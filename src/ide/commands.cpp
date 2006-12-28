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
// Commands available to server
// ----------------------------

// May be called either directly if client and server are merged
// together, or through sockets if they are separated.

#include <FL/Fl.H>
#include "commands.hpp"
#include "editor.hpp"
#include "draw.hpp"
#include "spawn.hpp"

string cmd_program(){
  char *s=editorbuffer->text();
  string program=s;
  free(s);
  return program;
}

double cmd_line_width(const string s){
  Fl::lock();

  // Chooses a font corresponding to the virtual graphical
  // window size.
  fl_font(FL_COURIER,static_cast<int>(virtualfontsize));
  double lx=fl_width(s.c_str());
  Fl::unlock();

  return lx;
}

float cmd_line_height(){
  Fl::lock();

  // Chooses a font corresponding to the virtual graphical
  // window size.
  fl_font(FL_COURIER,static_cast<int>(virtualfontsize));
  float f=fl_height();
  Fl::unlock();

  return f;
}

void cmd_clear(){

  // Since we want the user to be able to watch each image as
  // long as possible, we do not clear the front buffer but only
  // the back buffer.
  clearlist(backdrawings);

  // The default color should be set here, because FreeFem++
  // does not set the color settings after clearing the
  // graphics.
  if(defaultcolor!=NULL) backdrawings.push_back(defaultcolor->clone());
}

void cmd_stdout(const string message){
  Fl::lock();
  output->insert(message.c_str());
  output->show_insert_position();
  Fl::unlock();

  // awake() is necessary to make the main thread aware that the
  // window should be updated.
  Fl::awake();
}

void cmd_flush(){
  Fl::lock();
  flushdrawings();
  graphics->redraw();
  
  // Graphics toolbar only useful if there is an image!
  if(drawings.size()!=0) graphicstoolbar->activate();
  else graphicstoolbar->deactivate();
  graphicstoolbar->redraw();

  Fl::unlock();

  // awake() is necessary to make the main thread aware that the
  // window should be updated.
  Fl::awake();
}

void cmd_pause(){

  // Simply activate the pause button.
  Fl::lock();
  freefemthreadcomm.WAIT();
  if(!freefempaused){
    freefempause.Decr();
    freefempaused=true;
  }
  freefemthreadcomm.Free();
  pausebutton->set();
  messagebar->value("FreeFem++ computation waiting"
		    " (click on Pause to resume)");
  Fl::unlock();
  Fl::awake();

  // Just wait for the user to click on the button (we are in a
  // separate thread so we can block here).
  freefempause.Decr();
  freefempause.Incr();
}

void cmd_error(const string explanation){
  Fl::lock();
  output->insert("Error running FreeFem++ server: ");
  output->insert(explanation.c_str());
  output->insert("\n");
  output->show_insert_position();
  Fl::unlock();
  Fl::awake();
}
