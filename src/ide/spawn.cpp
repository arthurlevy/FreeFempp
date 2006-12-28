// -*- Mode : c++ -*-
//
// SUMMARY  :      
// USAGE    :        
// ORG      : 
// AUTHOR   : Antoine Le Hyaric -
// E-MAIL   : lehyaric@ann.jussieu.fr
//

/*
 
 This file is part of Freefem++
 
 Freefem++ is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 2.1 of the License, or
 (at your option) any later version.
 
 Freefem++  is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public License
 along with Freefem++; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
// Spawning a server process
// -------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: spawn.cpp,v 1.8 2006-09-29 20:30:15 hecht Exp $

#ifndef SPAWN_HPP
#define SPAWN_HPP

#include <iostream>
using namespace std;
#include <cassert>
#include <FL/Fl.H>
#include <FL/Fl_Output.H>
#ifndef NOSOCKETS
#include "socket.hpp"
#endif
#include "spawn.hpp"
#include "editor.hpp"
#include "server.hpp"

// The initial command, used to start the client. We plan to use the
// same command to start the server. todo: we could try and run a
// server at any location, including remote ones.
string commandline;

// Graphical widgets showing messages from FreeFEM++
Fl_Text_Display *output=NULL;
Fl_Text_Buffer *outputbuffer=NULL;

// Reference to status bar
Fl_Output *messagebar=NULL;

// Data to communicate between the widgets and the server thread
CriticalSection freefemthreadcomm;
Semaphore freefempause(1,1,"pause");
bool freefempaused=false;
bool freefemstop=false;
bool freefemrunning=false;
bool talkingthreadsetup=false;
Thread::Id talktoserverid=0;

// In this situation, the server is not properly started up yet,
// we need to kill off everything brutally and get back to a clean
// state.

// We need this escape hatch because Windows makes non-blocking IO
// difficult to handle.

void mayday(){
#ifndef NDEBUG
  cout<<"client: mayday() called\n";
#endif

  // We suppose that the talktoserver thread is in the "listen" state.
  assert(freefemthreadcomm.IsLocked());
  assert(!talkingthreadsetup);
  assert(talktoserverid!=0);
  Thread::Kill(talktoserverid);
#ifndef NOSOCKETS
  switchboard->Close();
  switchboard=NULL;
#endif

  // Reset everything to safe values
  talktoserverid=0;
  freefempaused=false;
  freefemstop=false;
  freefemrunning=false;
  talkingthreadsetup=false;
}

// There is no regex.h under MinGW, so we need to look for server
// error messages by hand. Returns true and a line number if something
// was found.
bool finderrormessage(const string &output,const string search,
		      string::size_type &start,int &line){
  bool found=false;

  // Looks for the given string
  start=output.find(search);

  // See if we can find a number behind it
  if(start!=string::npos){
    string::size_type numstart=start+search.length();
    string::size_type numstop=numstart;
    while(numstop<output.size()
	  && output[numstop]>='0' && output[numstop]<='9') numstop++;

    // Do we have a line number?
    if(numstop>numstart){
      found=true;
      line=atoi(output.substr(numstart,numstop-numstart).c_str());
    }
  }

  return found;
}

// Starts a server process, whatever the operating system. In a
// separate thread to wait until the server finishes and check for its
// return code.
Thread::Id runserverprocessid=0;
THREADFUNC(runserverprocess,){

  // We display error messages on the console to avoid flooding the
  // screen with fl_alerts.

#ifndef NDEBUG
  cout<<"client: runserverprocess started with id="<<runserverprocessid<<endl;
  Fl::lock();
  output->insert("Running FreeFem++ server as \"");
  output->insert(commandline.c_str());
  output->insert("\"\n");
  output->show_insert_position();
  Fl::unlock();
  Fl::awake();
#endif

  // If we do not use sockets, we just need to call the server
  // function. No extra process.
#ifdef NOSOCKETS
  freefemserverended.Decr();
  servermain(0,NULL);
#else

  // The server needs some specific parameters on the command line

#ifdef __MINGW32__
  char commportstring[100];
  strcpy(commportstring,tostring(commport).c_str());
  char *argv[]={"dummy","server","localhost",commportstring,NULL};
  int ret=_spawnv(_P_WAIT,commandline.c_str(),argv);
  if(ret==-1){
    Fl::lock();
    output->insert("Internal error: _spawnv() failed: ");
    output->insert(strerror(errno));
    output->show_insert_position();
    output->insert("\n");
    Fl::unlock();
    Fl::awake();
  }
  else if(ret>0){
    Fl::lock();
    output->insert("Server returned with error code ");
    output->insert(tostring(ret).c_str());
    output->insert("\n");
    output->show_insert_position();
    Fl::unlock();
    Fl::awake();
  }
#else // __MINGW32__
  string command=commandline+" server "+"localhost "+tostring(commport);
  int ret=system(command.c_str());
  if(ret==-1){
    Fl::lock();
    output->insert("Internal error: system call to run "
		   "FreeFem++ server failed\n");
    output->show_insert_position();
    Fl::unlock();
    Fl::awake();
  }
  else if(WIFEXITED(ret)==0){
    Fl::lock();
    output->insert("FreeFem++ server execution terminated\n");
    output->show_insert_position();
    Fl::unlock();
    Fl::awake();
  }
  else if(WEXITSTATUS(ret)!=0){
    Fl::lock();
    output->insert("Server returned with error code ");
    output->insert(tostring(WEXITSTATUS(ret)).c_str());
    output->insert("\n");
    output->show_insert_position();
    Fl::unlock();
    Fl::awake();
  }
#endif // __MINGW32__

#endif // NOSOCKETS

  // Check that the server-dialog thread is not left hanging dry.
  freefemthreadcomm.WAIT();
  if(freefemrunning && !talkingthreadsetup) mayday();
  freefemthreadcomm.Free();
#ifndef NDEBUG
  cout<<"client: runserverprocess ended id="<<runserverprocessid<<endl;
#endif
  runserverprocessid=0;

  // Look for an error message in the server output
  Fl::lock();
  char *outputtext=outputbuffer->text();

  // Compile-time errors
  int line;
  bool found;
  string textfound;
  string::size_type outputpos;
  found=finderrormessage(outputtext,"line number :",outputpos,line);
  if(found) textfound="line number :";

  // Runtime errors
  if(!found){
    found=finderrormessage(outputtext,"at exec line  ",outputpos,line);
    if(found) textfound="at exec line  ";
  }

  // Highlight the error, if found
  if(found){

    // Select the error message in the server messages window
#ifndef NDEBUG
    cerr<<"client: runserverprocess: found server error message \""
	<<textfound<<"\""<<endl;
#endif
    outputbuffer->select(outputbuffer->rewind_lines(outputpos,0),
			 outputbuffer->skip_lines(outputpos,1));
    output->show_insert_position();

    // Select the corresponding line in the editor
#ifndef NDEBUG
    cerr<<"client: runserverprocess: highlighting editor line "<<line<<endl;
#endif
    int editorpos=editorbuffer->skip_lines(0,line);
    editorbuffer->select(editorpos,editorbuffer->skip_lines(editorpos,1));
    editor->show_insert_position();
  }
  free(outputtext);
  Fl::unlock();
  Fl::awake();
}

#endif // SPAWN_HPP
