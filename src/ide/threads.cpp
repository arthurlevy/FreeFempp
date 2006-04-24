// Threads for Linux and Microsoft Win32
// -------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: threads.cpp,v 1.9 2005/06/28 09:07:36 lehyaric Exp $

#include <cassert>
#include <string>
#include <cerrno>
#include <cstring>
using namespace std;

#include "threads.hpp"
#include "tostring.hpp"

#ifdef __MINGW32__
#include <process.h>
#else
#include <signal.h>
#endif

// Displaying error messages under Microsoft Windows
#ifdef __MINGW32__
void windowserror(const DWORD errorcode,const string from){
  TCHAR szBuf[80]; 
  LPVOID lpMsgBuf;

  FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM,
		NULL,
		errorcode,
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR) &lpMsgBuf,
		0, NULL );

  wsprintf(szBuf, 
	   "failed with error %d: %s", 
	   errorcode, lpMsgBuf); 

  string message=from+": "+szBuf;
  LocalFree(lpMsgBuf);
  throw message;
}
#endif // __MINGW32__

Thread::Id Thread::Start(THREADFUNC(f,),Thread::Parm p){
  Id tid;
#ifdef __MINGW32__
  unsigned ThreadId;
  tid = (HANDLE) _beginthreadex(NULL,0,f,p,0,&ThreadId);
  if(tid == NULL) throw string("Thread::Start: Thread could not be created");
#else
  int R = pthread_create(&tid,NULL,f,p);
  if(R != 0) throw string("Thread::Start: Thread could not be created");
#endif
  return tid;
}

void Thread::Wait(Thread::Id tid){
#ifdef __MINGW32__
  DWORD R = WaitForSingleObject(tid,INFINITE);
  if(R == WAIT_FAILED) throw string("Thread::Wait","Wait failed");
  CloseHandle(tid);
#else
  int R=pthread_join(tid,NULL);
  if(R!=0) throw string("Thread::Wait: Wait failed");
#endif
}

void Thread::Exit(){
#ifdef __MINGW32__
    _endthreadex(0);
#else
    pthread_exit(NULL); // No test: returns void.
#endif
}

void Thread::Kill(Thread::Id tid){
#ifdef __MINGW32__
    if(TerminateThread(tid,0) == 0)
      throw string("Thread::Kill: Thread not killed");
#else
    if(pthread_kill(tid,SIGINT)!=0)
      throw string("Thread::Kill: Thread not killed");
#endif
}

Semaphore::Semaphore(const unsigned int i,const unsigned int max,
		     const string name){
#ifdef __MINGW32__
  sema = CreateSemaphore(NULL,i,max,NULL);
  if(sema == NULL) throw string("Semaphore::Semaphore: Creation failed");
#endif
#if defined(__linux__) || defined(__CYGWIN__)
  maximum=max;
  int R = sem_init(&sema,0,i);
  if(R != 0) throw string("Semaphore::Semaphore: Creation failed");
#endif
#ifdef __APPLE__

  // Initializing class members
  maximum=max;
  valueaccess.WAIT();
  value=i;
  valueaccess.Free();

  // MacOSX only accepts named semaphore, so we need to create a
  // unique name.
  string uniquename=string("/tmp/freefem++-")+name+tostring(getpid());

  sema=sem_open(uniquename.c_str(),O_CREAT|O_EXCL,0,i);
  if(sema==(sem_t*)SEM_FAILED)
    throw string("Semaphore::Semaphore: Creation failed");
#endif
}

Semaphore::~Semaphore(){
#ifdef __MINGW32__
    BOOL R = CloseHandle(sema);
    if(!R) throw string("Semaphore::~Semaphore: Failed");
#endif
#ifdef __APPLE__
    int R=sem_close(sema);
    if(R!=0) throw string("Semaphore::~Semaphore: Failed");
#endif
}

void Semaphore::Decr(){
#ifdef __MINGW32__
  DWORD R = WaitForSingleObject(sema,INFINITE);
  if(R==WAIT_FAILED) throw string("Semaphore::Decr: Wait failed");
#endif
#if defined(__linux__) || defined(__CYGWIN__)
  int R;

  // sem_wait() seems to be interrupted by ddd
  while((R=sem_wait(&sema))<0 && errno==EINTR);
  if(R!=0) throw string("Semaphore::Decr: Wait failed: ")+strerror(errno);
#endif
#ifdef __APPLE__

  // We need to decrease the semaphore value before waiting for the
  // semaphore itself, otherwise we could miss an Incr() happening
  // between sem_wait() and value--.
  valueaccess.WAIT();
  value--;
  valueaccess.Free();

  int R = sem_wait(sema);
  if(R!=0) throw string("Semaphore::Decr: Wait failed");
#endif
}

void Semaphore::Incr(){
#ifdef __MINGW32__
  BOOL R = ReleaseSemaphore(sema,1,NULL);
  if(!R){
    DWORD errorcode=GetLastError();

    // If the semaphore hits its maximum, this is not a problem.
    if(errorcode!=298) windowserror(errorcode,"Semaphore::Incr");
  }
#endif
#if defined(__linux__) || defined(__CYGWIN__)
  int v;
  int R=sem_getvalue(&sema,&v);
  if(R!=0) throw string("Semaphore::getvalue: Failed");
  if(v<maximum){
    R=sem_post(&sema);
    if(R != 0) throw string("Semaphore::Incr: Failed");
  }
#endif
#ifdef __APPLE__

  // Only increments the semaphore if its value has not reached the
  // allowed maximum
  valueaccess.WAIT();
  if(value<maximum){
    int R = sem_post(sema);
    if(R!=0) throw string("Semaphore::Incr: Failed");
    value++;
  }
  valueaccess.Free();
#endif
}

Mutex::Mutex(){
#ifdef __MINGW32__
  mutex = CreateMutex(NULL,FALSE,NULL);
  if(mutex == NULL) throw string("Mutex::Mutex: Creation failed");
#else
  int R = pthread_mutex_init(&mutex,NULL);
  if(R != 0) throw string("Mutex::Mutex: Creation failed");
#endif
#ifndef NDEBUG
  locked = false;
#endif
}

Mutex::~Mutex(){
#ifdef __MINGW32__
  BOOL R = CloseHandle(mutex);
  if(!R) throw string("Mutex::~Mutex: Failed");
#else
  int R = pthread_mutex_destroy(&mutex);
  if(R != 0) throw string("Mutex::~Mutex: Destruction failed");
#endif
  }

void Mutex::Wait(
#ifndef NDEBUG
		 const char *f,const int l
#endif
		 ){
#ifdef __MINGW32__
  DWORD R = WaitForSingleObject(mutex,INFINITE);
  if(R == WAIT_FAILED) throw string("Mutex::Wait: Failed");
#else
  int R = pthread_mutex_lock(&mutex);
  if(R != 0) throw string("Mutex::Wait: Failed");
#endif

#ifndef NDEBUG
  assert(!locked);
  locked = true;

  // Only a debugger will be able to read the contents of file and
  // line.
  file = f;
  line = l;
#endif
}

void Mutex::Free(){
#ifndef NDEBUG
  assert(locked);
  locked = false;
#endif

#ifdef __MINGW32__
  BOOL R = ReleaseMutex(mutex);
  if(!R) throw string("Mutex::Free: Failed");
#else
  int R = pthread_mutex_unlock(&mutex);
  if(R != 0) throw string("Mutex::Free: Failed");
#endif
}

#ifndef NDEBUG
bool Mutex::IsLocked() const{return locked;}
#endif

#ifdef __MINGW32__
CriticalSection::CriticalSection(){
  // Critical section system calls do not return error values.
  InitializeCriticalSection(&cs);
#ifndef NDEBUG
  locked = false;
#endif
}

CriticalSection::~CriticalSection(){DeleteCriticalSection(&cs);}

void CriticalSection::Wait(
#ifndef NDEBUG
			   const char *f,const int l
#endif
			   ){
  EnterCriticalSection(&cs);
#ifndef NDEBUG
  assert(!locked);
  locked = true;
  file = f;
  line = l;
#endif
}

void CriticalSection::Free(){
#ifndef NDEBUG
  assert(locked);
  locked = false;
#endif
  LeaveCriticalSection(&cs);
}

#ifndef NDEBUG
bool CriticalSection::IsLocked() const{return locked;}
#endif // NDEBUG

#endif // __MINGW32__ for CriticalSection
