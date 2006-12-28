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
// $Id: editor.cpp,v 1.13 2006-09-29 20:30:15 hecht Exp $

#ifdef __MINGW32__
#include <io.h> // chdir()
#endif
#include <errno.h> // errno on MacOs X
#include <unistd.h> // chdir() on RedHat
#include <cassert>
#include <iostream>
using namespace std;
#include <FL/fl_file_chooser.H>
#include "tostring.hpp"
#include "spawn.hpp"
#include "editor.hpp"
#include "highlight.hpp"

// Reference to main window
Fl_Double_Window *mainwindow=NULL;

// Tracking changes in the editor window
bool filecurrentlyloading=false;
bool editorcontentchanged=false;

// filename of the currently edited file
string filename;

// Editor window
Editor::Editor(int x,int y,int w,int h,const char *label):
  Fl_Text_Editor(x,y,w,h,label),dragndrop(false){}

// Catches the mouse drag'n'drop events
int Editor::handle(int event){
  switch(event){
  case FL_DND_ENTER:
    // Tell FLTK that we want to know about drag'n'drop events
    dragndrop=true;
    return 1;

  case FL_DND_DRAG:
    // Tell FLTK (again!) that we want to know about drag'n'drop
    // events
    dragndrop=true;
    return 1;

  case FL_DND_RELEASE:

    // We want to receive the corresponding data (sent to us via an
    // FL_PASTE event)
    dragndrop=true;
    return 1;

  case FL_DND_LEAVE:
    dragndrop=false;
    return 1;

  case FL_PASTE:

    // If there was no FL_DND_RELEASE, we don't know what to do with
    // the pasted text. So we leave the above class deal with it.
    if(!dragndrop) return Fl_Text_Editor::handle(event);
    else {
      dragndrop=false;

      // The event text contains whatever the other application
      // (Microsoft Internet Explorer, Mozilla, ...) sent. So we need
      // to do some guesswork.
      string file=Fl::event_text();

      // Mozilla sometimes sends wide characters. We need to convert
      // them back to regular (short) ones. We may loose some
      // information in the process, but filenames should only use
      // regular characters anyway.

      if(Fl::event_length()>1 && file[1]==0){
	const char *w=Fl::event_text();
	file="";
	while(w < Fl::event_text()+Fl::event_length()){
	  file+=tostring(*w);
	  w+=2;
	}
      }

      // Internet browsers and file managers like to add "file:/" or
      // "file://" before file paths
      if(file.substr(0,5)=="file:") file.erase(0,5);

      // There may be some extra "/" at the beginning, for instance
      // if the format was "file://...".
      while(file.substr(0,2)=="//") file.erase(0,1);

      // Internet browsers (e.g. Firefox for Microsoft Windows) may
      // also represent the drive letter as a directory (e.g. "/c:/")
      if(file.size()>=4 && file[0]=='/' && file.substr(2,2)==":/")
	file.erase(0,1);

      // Drag'n'drop data may contain more than a filename. We just
      // discard everything.
      string::size_type cr=file.find('\n');
      if(cr!=string::npos) file[cr]='\0';

      if (discardcurrentfile()) readfile(file.c_str());
    }
    return 1;

  default:
    return Fl_Text_Editor::handle(event);
  }

  // The default treatment is to indicate that we are not interested
  // in an event.
  return 0;
}

// Reference to editor window
Editor *editor=NULL;
Fl_Text_Buffer *editorbuffer=NULL;

string mainwindowtitle;
void setwindowtitle(){
  mainwindowtitle="FreeFem++";
  if(filename!="") mainwindowtitle+=string(" ")+filename;
  if (editorcontentchanged) mainwindowtitle+=" (modified)";
  mainwindow->label(mainwindowtitle.c_str());
}

void textchanged(int,int inserted,int deleted,int,const char*,void*){
  if((inserted||deleted) && !filecurrentlyloading) editorcontentchanged=true;
  setwindowtitle();
  if(filecurrentlyloading) editor->show_insert_position();
}

// copy/paste
void copy(Fl_Widget*,void*){Fl_Text_Editor::kf_copy(0,editor);}
void cut(Fl_Widget*,void*){Fl_Text_Editor::kf_cut(0,editor);}
void deletetext(Fl_Widget*,void*){editorbuffer->remove_selection();}
void paste(Fl_Widget*,void*){Fl_Text_Editor::kf_paste(0,editor);}

// find
string searchstring;
void find(Fl_Widget*,void*);
void findagain(Fl_Widget*,void*){
  if(searchstring=="") find(NULL,NULL);
  else{
    int pos=editor->insert_position();
    if(editorbuffer->search_forward(pos,searchstring.c_str(),&pos)){
      editorbuffer->select(pos,pos+searchstring.size());
      editor->insert_position(pos+searchstring.size());
      editor->show_insert_position();
    }
    else fl_alert("\'%s\' not found!",searchstring.c_str());
  }
}

void find(Fl_Widget*,void*){
  const char *f=fl_input("Search string:",searchstring.c_str());
  if(f!=NULL){
    searchstring=f;
    findagain(NULL,NULL);
  }
}

// replace
Fl_Window *replacedialog;
Fl_Input *replacedialogfind;
Fl_Input *replacedialogwith;
Fl_Button *replacedialogall;
Fl_Button *replacedialognext;
Fl_Button *replacedialogcancel;
void replace(Fl_Widget*,void*){
  replacedialog->show();
}

void replaceagain(Fl_Widget*,void*){
  string find=replacedialogfind->value();
  if(find=="") replacedialog->show();
  else{
    string replace=replacedialogwith->value();
    replacedialog->hide();
    int pos=editor->insert_position();
    if (editorbuffer->search_forward(pos,find.c_str(),&pos)){
      editorbuffer->select(pos,pos+find.size());
      editorbuffer->remove_selection();
      editorbuffer->insert(pos,replace.c_str());
      editorbuffer->select(pos,pos+replace.size());
      editor->insert_position(pos+replace.size());
      editor->show_insert_position();
    }
    else fl_alert("No occurrences of \'%s\' found!",find.c_str());
  }
}

void replaceall(Fl_Widget*,void*){
  string find=replacedialogfind->value();
  if(find=="") replacedialog->show();
  else{
    string replace=replacedialogwith->value();
    replacedialog->hide();
    editor->insert_position(0);

    // Did we find at least one occurrence?
    bool foundone=false;

    int found=1;
    while(found){
      int pos=editor->insert_position();
      found=editorbuffer->search_forward(pos,find.c_str(),&pos);
      if (found){
	editorbuffer->select(pos,pos+find.size());
	editorbuffer->remove_selection();
	editorbuffer->insert(pos,replace.c_str());
	editor->insert_position(pos+replace.size());
	editor->show_insert_position();
	foundone=true;
      }
    }

    if(!foundone) fl_alert("\'%s\' not found!",find.c_str());
  }
}

void replacecancel(Fl_Widget*,void*){
  replacedialog->hide();
}

// file management
void savefile(Fl_Widget*,void*);
void stopfreefemserver(Fl_Widget*,void*);
bool discardcurrentfile(){

  // Checks whether the FreeFem++ server is currently running.
  freefemthreadcomm.WAIT();
  bool running=freefemrunning;
  freefemthreadcomm.Free();
  if(running && fl_ask("Cancel current FreeFem++ computation?")!=1)
    return false;
  if(running) stopfreefemserver(NULL,NULL);

  // Checks whether the editor contains anything to save
  if (!editorcontentchanged) return true;
  else{
    int r=fl_choice("Save current file?","Cancel","Save","Discard");
    switch(r){
    case 2:// Discard
      return true;
    case 1:// Save
      savefile(NULL,NULL);
      return !editorcontentchanged;
    case 0:// Cancel
      return false;
    default:
      assert(false);
      return false;
    }
  }
}

void newfile(Fl_Widget*,void*){
  if(discardcurrentfile()){
    filename="";
    editorbuffer->select(0,editorbuffer->length());
    editorbuffer->remove_selection();
    editorcontentchanged=false;
    editorbuffer->call_modify_callbacks();
  }
}

// Do not use 'basename' or 'dirname', which are not available on some
// platforms (e.g. Cygwin).
void splitpath(const string path,string &dir,string &base){

  // Find the last '/' or '\' in the path
  string::size_type forwardslash=path.rfind('/',path.size());
  string::size_type backwardslash=path.rfind('\\',path.size());
  string::size_type slash=string::npos;
  if(forwardslash!=string::npos) slash=forwardslash;
  if(backwardslash!=string::npos) slash=backwardslash;
  if(forwardslash!=string::npos && backwardslash!=string::npos)
    slash=max(forwardslash,backwardslash);

  // Split into directory and filename
  dir="";
  base=path;
  if(slash!=string::npos){

    // Always keeps the final slash in the directory name because "c:"
    // and "c:\" do not have the same meaning under Microsoft Windows.
    dir=path.substr(0,slash+1);

    if(slash<path.size()-1) base=path.substr(slash+1,path.size()-slash-1);
  }
}

// We change the default directory to be the one where the file is,
// just for "include" directives to work properly.
void changedir(){
  string dir,base;
  splitpath(filename,dir,base);

  // Record new values
  if(dir!=""){
#ifndef NDEBUG
    cerr<<"client: changing directory to \""<<dir<<"\""<<endl;
#endif
    chdir(dir.c_str());
    messagebar->value((string("Current directory set to ")+dir).c_str());
#ifndef NDEBUG
    cerr<<"client: edp file base name is \""<<base<<"\""<<endl;
#endif
    filename=base;
  }
}

void readfile(const string file){
  filecurrentlyloading=true;
  filename=file;
  editorcontentchanged=false;
  changedir();
  if (editorbuffer->loadfile(filename.c_str()))
    fl_alert("Error reading file \'%s\':\n%s.",
	     filename.c_str(),strerror(errno));

#if !defined(__MINGW32__)
  // When not under plain Microsoft Windows (i.e. Mingw, not Cygwin),
  // FLTK does not understand Windows CRLF codes. So we need to
  // replace them with one regular LF.
  int i=0;
  while(i<editorbuffer->length()){
    if(editorbuffer->character(i)=='\r') editorbuffer->remove(i,i+1);
    else i++;
  }
#endif

  filecurrentlyloading=false;
  editorbuffer->call_modify_callbacks();
}

void writefile(const string file){
  filename=file;
  editorcontentchanged=false;
  changedir();
  if (editorbuffer->savefile(filename.c_str()))
    fl_alert("Error writing file \'%s\':\n%s.",
	     filename.c_str(),strerror(errno));
  editorbuffer->call_modify_callbacks();
}

void openfile(Fl_Widget*,void*){
  if (discardcurrentfile()){
    char *newfile=fl_file_chooser("Open file?","*",filename.c_str());
    if(newfile) readfile(newfile);
  }
}

void savefileas(){
  char *newfile=fl_file_chooser("Save file as?","*",filename.c_str());
  if(newfile) writefile(newfile);
}

void savefile(Fl_Widget*,void*){
  if(filename=="") savefileas();
  else writefile(filename);
}

void quit(Fl_Widget*,void*){
  if(discardcurrentfile()){
    mainwindow->hide();
    exit(0);
  }
}

Fl_Text_Buffer *highlightbuffer;

// Semaphore controlling when the editor text should be
// re-highlighted.
Semaphore highlightflag(0,1,"highlight");

// Background thread for highlight computations
THREADFUNC(computehighlight,){
  try{

    // Infinite loop to compute as many highlights as necessary
    while(1){

      // Wait for some work to do
      highlightflag.Decr();
#ifndef NDEBUG
      cerr<<"client: running highlighting procedure\n";
#endif

      // Read the data to highlight from the editor
      Fl::lock();
      char *text=editorbuffer->text();
      lexinput=text;
      free(text);
      Fl::unlock();

      // Run the highlighting procedure (we do not care about any
      // error return code: erroneous characters will be displayed
      // with a special color anyway).
      my_parse();

      // Only replace the highlighting codes if the buffer contents
      // are still close enough to what we worked with.
      Fl::lock();
      if(highlight.size()==editorbuffer->length()){
	highlightbuffer->text(highlight.c_str());
	editor->redisplay_range(0,editorbuffer->length());
      }
#ifndef NDEBUG
      else cerr<<"client: highlight data size="<<highlight.size()
	       <<" not equal to text size="<<editorbuffer->length()<<endl;
#endif
      Fl::unlock();
      Fl::awake();
    }
  }
  catch(string explanation){
    cerr<<"client: exception in computehighlight thread:"<<endl
	<<explanation<<endl;
  }

  return 0;
}

// Call the highlighting procedure for each modified part of the edited text
void updatehighlight(int,int,int,int,const char *,void *){

  // Just ask the highlighting thread (computehighlight()) to work on
  // this
  highlightflag.Incr();
}

void inithighlight(){

  // The Lex+Yacc grammar
  inithighlightparser();

  // Start the highlighting thread
  Thread::Start(computehighlight,NULL);
}

void unfinishedhighlight(int,void*){}
