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
// Editor functions
// ----------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: editor.hpp,v 1.5 2006-09-29 20:30:15 hecht Exp $

#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <FL/Fl_Input.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Button.H>
#include "threads.hpp"

// Reference to main window
extern Fl_Double_Window *mainwindow;

// Tracking changes in the editor window
extern bool filecurrentlyloading;
extern bool editorcontentchanged;

// filename of the currently edited file
extern string filename;

// Editor window
class Editor:public Fl_Text_Editor{
public:
  Editor(int x,int y,int w,int h,const char *label = 0);

private:

  // Remember when a drag'n'drop event happened, to distinguish them
  // from simple text pasting.
  bool dragndrop;

  // Catches the mouse drag'n'drop events
  int handle(int event);
};

// Reference to editor window
extern Editor *editor;
extern Fl_Text_Buffer *editorbuffer;

extern string mainwindowtitle;
void setwindowtitle();

void textchanged(int,int inserted,int deleted,int,const char*,void*);

// copy/paste
void copy(Fl_Widget*,void*);
void cut(Fl_Widget*,void*);
void deletetext(Fl_Widget*,void*);
void paste(Fl_Widget*,void*);

// find
extern string searchstring;
void findagain(Fl_Widget*,void*);
void find(Fl_Widget*,void*);

// replace
extern Fl_Window *replacedialog;
extern Fl_Input *replacedialogfind;
extern Fl_Input *replacedialogwith;
extern Fl_Button *replacedialogall;
extern Fl_Button *replacedialognext;
extern Fl_Button *replacedialogcancel;
void replace(Fl_Widget*,void*);
void replaceagain(Fl_Widget*,void*);
void replaceall(Fl_Widget*,void*);
void replacecancel(Fl_Widget*,void*);

// file management
bool discardcurrentfile();
void newfile(Fl_Widget*,void*);

// Do not use 'basename' or 'dirname', which are not available on some
// platforms (e.g. Cygwin).
void splitpath(const string path,string &dir,string &base);

// We change the default directory to be the one where the file is,
// just for "include" directives to work properly.
void changedir();
void readfile(const string file);
void writefile(const string file);
void openfile(Fl_Widget*,void*);
void savefileas();
void savefile(Fl_Widget*,void*);
void quit(Fl_Widget*,void*);

// Syntax highlighting
extern Fl_Text_Buffer *highlightbuffer;

// Semaphore controlling when the editor text should be
// re-highlighted.
extern Semaphore highlightflag;

// Background thread for highlight computations
THREADFUNC(computehighlight,);

// Call the highlighting procedure for each modified part of the edited text
void updatehighlight(int,int,int,int,const char *,void *);
void inithighlight();
void unfinishedhighlight(int,void*);

#endif // EDITOR_HPP
