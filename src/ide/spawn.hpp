// Spawning a server process
// -------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: spawn.hpp,v 1.1 2005/02/25 15:14:13 lehyaric Exp $

#ifndef SPAWN_HPP
#define SPAWN_HPP

#include <string>
using namespace std;
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Buffer.H>
#include <FL/Fl_Output.H>
#include "threads.hpp"

// The initial command, used to start the client. We plan to use the
// same command to start the server. todo: we could try and run a
// server at any location, including remote ones.
extern string commandline;

// Graphical widgets showing messages from FreeFEM++
extern Fl_Text_Display *output;
extern Fl_Text_Buffer *outputbuffer;

// Reference to status bar
extern Fl_Output *messagebar;

// Data to communicate between the widgets and the server thread
extern CriticalSection freefemthreadcomm;
extern Semaphore freefempause;
extern bool freefempaused;
extern bool freefemstop;
extern bool freefemrunning;
extern bool talkingthreadsetup;
extern Thread::Id talktoserverid;

// In this situation, the server is not properly started up yet,
// we need to kill off everything brutally and get back to a clean
// state.

// We need this escape hatch because Windows makes non-blocking IO
// difficult to handle.

void mayday();

// Starts a server process, whatever the operating system. In a
// separate thread to wait until the server finishes and check for its
// return code.
extern Thread::Id runserverprocessid;
THREADFUNC(runserverprocess,);

#endif // SPAWN_HPP
