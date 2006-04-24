// Threads for Linux and Microsoft Win32
// -------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: threads.hpp,v 1.5 2005/03/17 13:13:42 lehyaric Exp $

#ifndef THREADS_HPP
#define THREADS_HPP

#include <string>
using namespace std;
#ifdef __MINGW32__
#include <windows.h>
#else
#include <pthread.h>
#include <semaphore.h>
#endif

class Thread{
public:

#ifdef __MINGW32__
#define THREADFUNC(f,parm) unsigned int (__stdcall f)(Thread::Parm parm)
  typedef LPVOID Parm;
  typedef HANDLE Id;
#else
#define THREADFUNC(f,parm) void* f(Thread::Parm parm)
  typedef void* Parm;
  typedef pthread_t Id;
#endif

  // Mingw is a little puzzled if there are no brackets around
  // __stdcall
  static Id Start(THREADFUNC(f,),Parm p);
  static void Wait(Id tid);
  static void Exit(); // From inside the thread
  static void Kill(Id tid);
};

class Mutex{
public:

  Mutex();
  ~Mutex();

  void Wait(
#ifndef NDEBUG
	    const char *f,const int l
#endif
	    );

  void Free();

  // Can only work in "assert(IsLocked())" (and even then only
  // statistically), not in "assert(!IsLocked())". But this is the
  // most useful format anyway.
#ifndef NDEBUG
  bool IsLocked() const;
#endif

protected:
#ifdef __MINGW32__
    HANDLE mutex;
#else
    pthread_mutex_t mutex;
#endif

  // Just for checking.
#ifndef NDEBUG
  bool locked;

  // Fichier et ligne où la ressource a été bloquée pour la dernière
  // fois.
  const char *file;
  int line;
#endif
};

// Simplified mutex, which is implemented separately because it is
// much faster on Windows (100 times).
#ifdef __MINGW32__
class CriticalSection{
public:
  CriticalSection();
  ~CriticalSection();

  void Wait(
#ifndef NDEBUG
	    const char *f,const int l
#endif
	    );
  void Free();

  // Useful for asserts. Can only work in "assert(IsLocked())" (and
  // even then only statistically), not in "assert(!IsLocked())". But
  // this is the most useful format anyway.
#ifndef NDEBUG
  bool IsLocked() const;
#endif

private:
  CRITICAL_SECTION cs;
#ifndef NDEBUG
  bool locked;
  const char *file;
  int line;
#endif
};

#else
  typedef Mutex CriticalSection;
#endif // __MINGW32__

// La définition de la fonction Wait() en fonction des paramètres
// envoyés.
#ifndef NDEBUG
#define WAIT() Wait(__FILE__,__LINE__)
#else
#define WAIT() Wait()
#endif

class Semaphore{
public:
  // Initialisation with initial value i and maximum value max (which
  // is only for information, since it exists only under Windows).
  Semaphore(const unsigned int i,const unsigned int max,const string name);
  ~Semaphore();
  void Decr();
  void Incr();

private:
#ifdef __MINGW32__
  HANDLE sema;
#endif
#if defined(__linux__) || defined(__CYGWIN__)
  sem_t sema;
  int maximum;
#endif
#ifdef __APPLE__
  sem_t *sema;
  int maximum;

  // sem_getvalue() is defined but not implemented under MacOS X, so
  // we replaceit with a separate mutex-protected counter
  CriticalSection valueaccess;
  int value;
#endif
};

#endif // THREADS_HPP
