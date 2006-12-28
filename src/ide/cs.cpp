// Integrated Development Environment for FreeFEM++ - Client/Server version
// ------------------------------------------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: cs.cpp,v 1.77 2005-07-15 12:11:48 lehyaric Exp $

#ifdef CLIENT
#include <FL/x.H>
#endif

#include <unistd.h>
#include <cassert>
#include <list>
#include <iostream>
using namespace std;

// Graphical widgets are only needed in the client
#ifdef CLIENT
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_File_Chooser.H>
#include "editor.hpp"
#include "spawn.hpp"
#include "images.hpp"
#include "draw.hpp"
#include "commands.hpp"

#ifdef WIN32
#include "windres.h"
#endif
#if defined(__linux__)
#include <X11/xpm.h>
#endif
#include "highlight.hpp"
#endif // CLIENT


#ifdef SERVER
#include "server.hpp"
#endif

#ifndef NOSOCKETS
#include "socket.hpp"
#endif

#include "../fflib/strversionnumber.hpp"

// Client-side
// -----------

// To display more messages about the client/server dialog on cerr
//#define DIALOG_DEBUG

#ifdef CLIENT

// Takes care of all the bits and pieces of the graphical window when
// redrawing the graphics.
void flushgraphics(){
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

// Separate thread to communicate with the server through a socket
THREADFUNC(talktoserver,){
#ifndef NDEBUG
  cout<<"client: talktoserver started id="<<talktoserverid<<endl;
#endif

  // Catches many exceptions to prevent the IDE from crashing without
  // explanation. There should not be any error exit in the whole
  // IDE client code after the windows are displayed.
  bool error=false;
  bool stop=false;
  try{

    // Create socket comunications
#ifndef NOSOCKETS
    newswitchboard();
#endif

    // Spawn a server process once we know that sockets work ok.
    assert(runserverprocessid==0);
    runserverprocessid=Thread::Start(runserverprocess,NULL);

    // Activate job control buttons only when we know what to control
    Fl::lock();
    pausebutton->activate();
    stopbutton->activate();
    Fl::unlock();
    Fl::awake();
    freefemthreadcomm.WAIT();
    freefemrunning=true;
    talkingthreadsetup=false;
    freefemthreadcomm.Free();

    // Wait for that server to come online and talk to him only (the
    // socket code is able to talk to several processes through several
    // threads at once, but we don't need that yet).
#ifndef NOSOCKETS
    clientsocket=switchboard->Listen();
#endif

    // Past that point, this thread should be treatly humanly
    // (i.e. not killed) otherwise we risk leaving some semaphores in
    // a bizarre state.
    freefemthreadcomm.WAIT();
    talkingthreadsetup=true;
    freefemthreadcomm.Free();

    string message;
#ifndef NOSOCKETS
    if(clientsocket.getremotehostname()=="unknown")
      message="FreeFem++ server connected\n";
    else message=string("FreeFem++ server on ")
	   +clientsocket.getremotehostname()
	   +" connected\n";
#else
      message="FreeFem++ server connected\n";
#endif //NOSOCKETS
    Fl::lock();
    output->insert(message.c_str());
    output->show_insert_position();
    messagebar->value("FreeFem++ server running...");
    Fl::unlock();

    // Loop on all messages sent by the server through the open socket
    // (this is mainly about drawing graphical objects).
#ifdef DIALOG_DEBUG
    cerr<<"client: starting listening loop"<<endl;
#endif

    // Pause and stop buttons management
    freefemthreadcomm.WAIT();
    stop=freefemstop;
    freefemthreadcomm.Free();
    resetzoomcenter();
    bool serverended=false;

    // Loop waiting for commands coming from the server through a
    // socket
#ifdef NOSOCKETS

    // If the server does not use sockets, we just wait for it to end
    freefemserverended.Decr();
    freefemserverended.Incr();
#else

    // When not in debug mode, try and reduce the amount of data
    // exchanged to a minimum.
    CMD_TYPE cmd;
    clientsocket>>cmd;

    while(!clientsocket.ateof() && !stop && !serverended){

#ifdef DIALOG_DEBUG
      cerr<<"client: received command \""<<cmd<<"\""<<endl;
#endif

      // Send the program text to the server when it asks for it.
      if(cmd==CMD_PROGRAM){
#ifdef DIALOG_DEBUG
	cerr<<"client: sending program text"<<endl;
#endif
	clientsocket<<cmd_program();
	clientsocket.writeflush();
      }

      // Detailing all possible graphical commands. The constructor of
      // each of the graphical objects below is able to read the
      // object's characteristics from the input socket.
      else if(cmd==CMD_COLOR){

	// Read a color coming from the server. We need to store it
	// because FreeFem++ sets the color _before_ clearing the
	// graphics, and clearing the graphics in the client means
	// using the default color, which is white!
	color *c=new color;
	defaultcolor=new color(*c);
	backdrawings.push_back(c);
      }
      else if(cmd==CMD_POINT) backdrawings.push_back(new point);
      else if(cmd==CMD_LINE) backdrawings.push_back(new line);
      else if(cmd==CMD_TEXT) backdrawings.push_back(new text);
      else if(cmd==CMD_PEN) backdrawings.push_back(new pen);
      else if(cmd==CMD_POLYGON) backdrawings.push_back(new polygon);
      else if(cmd==CMD_CIRCLE) backdrawings.push_back(new circle);

      // Graphical queries
      else if(cmd==CMD_CLEAR) cmd_clear();
      else if(cmd==CMD_FLUSH) cmd_flush();
      else if(cmd==CMD_LINE_WIDTH){
	string s;
	clientsocket>>s;
	clientsocket<<cmd_line_width(s);
	clientsocket.writeflush();
      }
      else if(cmd==CMD_LINE_HEIGHT){
	clientsocket<<cmd_line_height();
	clientsocket.writeflush();
      }
      else if(cmd==CMD_PAUSE){
	cmd_pause();
	clientsocket<<CMD_RESUME;
	clientsocket.writeflush();
      }

      // Printing a message from the server process in the output window
      else if(cmd==CMD_STDOUT){
	string message;
	clientsocket>>message;
	cmd_stdout(message);
      }

      // Final handshake
      else if(cmd==CMD_SERVER_DONE){
	serverended=true;

	// Make sure that the server does not exit before we have read
	// all its output, otherwise we could face a "Connection reset
	// by peer" error.
	clientsocket<<"ok";
	clientsocket.writeflush();
      }
      else if(cmd==CMD_ERROR){

	// Record the error code, just to let the user know
	string message;
	clientsocket>>message;
	throw message;
      }
      else{
	throw string("Received unknown command from server: \"")
	  +tostring(cmd)+"\"";
      }

      // Checks that we don't need to pause or stop (try and refrain
      // from throwing any exception from here, or we will have to
      // remember mutex states!)
      freefempause.Decr();
      freefempause.Incr();
      freefemthreadcomm.WAIT();
      stop=freefemstop;
      freefemstop=false;
      freefemthreadcomm.Free();

      // Wait for next command from the server
      if(!serverended) clientsocket>>cmd;
    }
#endif // NOSOCKETS

  }
  catch(string explanation){
    cmd_error(explanation);
    error=true;
  }

  // User-required stop
#ifdef NOSOCKETS

  fl_alert("FreeFem++: User stop not implemented yet");

#else

  // If we are stopping because the user asked so, we need to close
  // the socket to let the server know that we are not listening
  // anymore.

  // When we close the communication socket, this will in turn provoke
  // an internal error in the server, which will then shut down.

  clientsocket.Close();

  // WIN32 does not like to close "switchboard" once clientsocket is
  // closed (strange! aren't they supposed to be different?).
#ifndef __MINGW32__
  switchboard->Close();
#endif
  switchboard=NULL;
#endif

  // Update IDE to reflect the fact that the computational server is
  // no more.
  Fl::lock();
  if(error) messagebar->value("FreeFem++ computation ended with an error");
  else if(stop) messagebar->value("FreeFem++ killed on request");
  else messagebar->value("FreeFem++ computation ended");

  // Deactivate job control buttons
  runbutton->activate();
  pausebutton->deactivate();
  pausebutton->clear();
  stopbutton->deactivate();
  freefemthreadcomm.WAIT();
  freefemrunning=false;
  talkingthreadsetup=false;
  freefemthreadcomm.Free();

  Fl::unlock();
  Fl::awake();

  // When the server is finished, this thread has no reason to carry
  // on.
#ifndef NDEBUG
  cout<<"client: talktoserver ended id="<<talktoserverid<<endl;
#endif
  talktoserverid=0;
  return 0;
}

// Called when the user clicks on the "Run FreeFEM++" button.
void startfreefemserver(Fl_Widget*,void*){

  // Can only run one server at a time (for the moment)
  runbutton->deactivate();

  // Tell the user what is happening
  messagebar->value("FreeFem++ server starting...");

  // Remove all previous outputs (for simplicity)
  outputbuffer->remove(0,outputbuffer->length());

  // Remove any previous drawings (because it could very well be an
  // unfinished drawing from a previously killed computation). Call
  // flushdrawings() twice to empty both the front and the back
  // buffer.
  clearlist(drawings);
  clearlist(backdrawings);
  graphics->redraw();

  // Leave first line blank, because characters are sometimes too high
  // and they bump into the top edge of the text widget.
  output->insert("\n");

  // Communicates with the server in a different thread, to avoid any
  // delay in redrawing the windows.
  assert(talktoserverid==0);
  talktoserverid=Thread::Start(talktoserver,NULL);
}

void pausefreefemserver(Fl_Widget*,void*){

  // Simply locks a mutex, blocking any reception of data from the socket.
  freefemthreadcomm.WAIT();
  if(freefempaused) freefempause.Incr();
  else freefempause.Decr();
  freefempaused=!freefempaused;

  if(freefempaused) messagebar->value("FreeFem++ computation paused");
  else messagebar->value("FreeFem++ computation resumed");

  freefemthreadcomm.Free();
}

void stopfreefemserver(Fl_Widget*,void*){
  freefemthreadcomm.WAIT();

  // How to stop the server depends on what level of setup it has
  // reached
  if(talkingthreadsetup){
    // Un-pause the server if necessary
    if(freefempaused) freefempause.Incr();
    freefempaused=false;

    // Just stops the freefem server thread. The socket will be closed
    // and the server will shut down automatically.
    freefemstop=true;
  }
  else{

    // In this situation, the server is not properly started up yet,
    // we need to kill off everything brutally and get back to a clean
    // state.

    mayday();
  }

  freefemthreadcomm.Free();
}

// Syntax highlighting styles
Fl_Text_Display::Style_Table_Entry styletable[]={
  {FL_BLACK,FL_COURIER,FL_NORMAL_SIZE}, // A=plain
  {FL_DARK_GREEN,FL_COURIER_ITALIC,FL_NORMAL_SIZE}, // B=comments
  {FL_BLACK,FL_COURIER_BOLD,FL_NORMAL_SIZE}, // C=macros
  {FL_BLUE,FL_COURIER,FL_NORMAL_SIZE}, // D=strings
  {FL_DARK_GREEN,FL_COURIER_BOLD,FL_NORMAL_SIZE}, // E=parameters
  {FL_DARK_RED,FL_COURIER_BOLD,FL_NORMAL_SIZE}, // F=types
  {FL_BLUE,FL_COURIER_BOLD,FL_NORMAL_SIZE}, // G=keywords
  {FL_DARK_MAGENTA,FL_COURIER_BOLD,FL_NORMAL_SIZE}, // H=globals

  // See errors more easily in debug mode
#ifdef BIG_SYNTAX_ERRORS
  {FL_RED,FL_COURIER_BOLD,20} // I=errors
#else
  {FL_RED,FL_COURIER_BOLD,FL_NORMAL_SIZE} // I=errors
#endif
};

// Called by Fl::add_timeout() to read the first file only after
// Fl::run() is called (otherwise FLTK crashes on Win32)
string firstfile;
void readfirstfile(void*){
  readfile(firstfile);
  Fl::remove_timeout(readfirstfile);
}

// Main client program
int clientmain(int argc,char *argv[]){
  try{

    // Starts threads protection in FLTK
    Fl::lock();

    // Path to server program
    // ----------------------

    // Records the command used to start the client, as a first guess as
    // how to start the server.
    commandline=string(argv[0]);

    // Adds the full path (we are going to change directories).
    if(
       // Not if the path starts with a slash
       commandline[0]!='/' && commandline[0]!='\\'

       // Neither if the path starts with a drive letter
       && !(commandline.size()>=3 && commandline[1]==':'
	    && commandline[2]=='\\')

       // If there is no slash in the command, it has been run through a
       // PATH and no directory should be added (todo: this is not quite
       // true if PATH contains ".").
       && (commandline.rfind('/',commandline.size())!=string::npos
	   || commandline.rfind('\\',commandline.size())!=string::npos)){
      char dir[1024];
      if(getcwd(dir,1024)==NULL)
	throw string("Could not get current working directory");
      commandline=string(dir)+'/'+commandline;
    }

    // If client and server are not in the same executable, we need to
    // find the server!

#ifndef CLIENTSERVER

    // Change client name into server name
    string dir,base;
    splitpath(commandline,dir,base);
    if(dir!="") commandline=dir+"FreeFem++-server";
    else commandline="FreeFem++-server";

#endif // CLIENTSERVER

    // Replace dialog
    // --------------

    replacedialog=new Fl_Window(300,105,"Replace");
    replacedialogfind=new Fl_Input(80,10,210,25,"Find:");
    replacedialogfind->align(FL_ALIGN_LEFT);

    replacedialogwith=new Fl_Input(80,40,210,25,"Replace:");
    replacedialogwith->align(FL_ALIGN_LEFT);

    replacedialogall=new Fl_Button(10,70,90,25,"Replace All");
    replacedialogall->callback((Fl_Callback*)replaceall);

    replacedialognext=new Fl_Return_Button(105,70,120,25,"Replace Next");
    replacedialognext->callback((Fl_Callback*)replaceagain);

    replacedialogcancel=new Fl_Button(230,70,60,25,"Cancel");
    replacedialogcancel->callback((Fl_Callback*)replacecancel);

    replacedialog->end();
    replacedialog->set_non_modal();

    // Main window proportions
    // -----------------------

    const int mainwindowwidth=800;
    const int mainwindowheight=600;
    const int buttonwidth=70;
    const int buttonheight=25;
    const int menubarheight=buttonheight;
    const int toolbarheight=buttonheight;
    const int messagebarheight=25;
    const int outputheight=150;
    const int buttonspacing=buttonwidth;
    const int workingareatop=menubarheight;
    const int workingareaheight=mainwindowheight
      -menubarheight
      -messagebarheight;
    const int workingareabottom=workingareatop+workingareaheight;
    const int editorareaheight=workingareaheight-outputheight;
    const int editorareawidth=mainwindowwidth/2;

    mainwindow=new Fl_Double_Window(mainwindowwidth,mainwindowheight);
    mainwindow->callback(quit);

    // Icons
    // -----

#ifdef WIN32 // Mingw32 or Cygwin
    mainwindow->icon((char*)LoadIcon(fl_display,MAKEINTRESOURCE(LOGO2)));
#endif

#if defined(__linux__)
    fl_open_display();
    Pixmap p,mask;
    XpmCreatePixmapFromData(fl_display,DefaultRootWindow(fl_display),
			    gui_logo2_xpm,&p,&mask,NULL);
    mainwindow->icon((char*)p);
#endif

    // Main menu
    // ---------

    Fl_Menu_Item menuitems[]={
      {"&File",0,0,0,FL_SUBMENU},
      {"&New File",0,(Fl_Callback*)newfile},
      {"&Open File...",FL_CTRL+'o',(Fl_Callback*)openfile},
      {"&Save File",FL_CTRL+'s',(Fl_Callback*)savefile},
      {"Save File &As...",0,(Fl_Callback*)savefileas,0,FL_MENU_DIVIDER},
      // todo: enable dynamic greying out
      //{"Run FreeFem++",0,(Fl_Callback*)startfreefemserver},
      //{"Pause FreeFem++",0,(Fl_Callback*)pausefreefemserver},
      //{"Stop FreeFem++",0,(Fl_Callback*)stopfreefemserver,0,FL_MENU_DIVIDER},
      {"E&xit",FL_CTRL+'q',(Fl_Callback*)quit,0},
      {0},

      {"&Edit",0,0,0,FL_SUBMENU},
      {"Cu&t",FL_CTRL+'x',(Fl_Callback*)cut},
      {"&Copy",FL_CTRL+'c',(Fl_Callback*)copy},
      {"&Paste",FL_CTRL+'v',(Fl_Callback*)paste},
      {"&Delete",0,(Fl_Callback*)deletetext},
      {0},

      {"&Search",0,0,0,FL_SUBMENU},
      {"&Find...",FL_CTRL+'f',(Fl_Callback*)find},
      {"F&ind Again",FL_CTRL+'g',findagain},
      {"&Replace...",FL_CTRL+'r',replace},
      {"Re&place Again",FL_CTRL+'t',replaceagain},
      {0},

      {0}
    };
    Fl_Menu_Bar menubar(0,0,mainwindowwidth,menubarheight);
    menubar.copy(menuitems);

    // Working area, made of several separate zones
    // --------------------------------------------

    Fl_Tile workingarea(0,workingareatop,mainwindowwidth,workingareaheight);

    // Editor area
    Fl_Group editorarea(0,workingareatop,
			editorareawidth,editorareaheight);

    // editor toolbar
    Fl_Group editortoolbar(0,workingareatop,
			   editorareawidth,workingareatop+toolbarheight);
    editortoolbar.box(FL_FLAT_BOX);

    // run
    int buttonx=0;
    runbutton=new Fl_Button(buttonx,workingareatop,buttonwidth,toolbarheight,
			    "Run");
    runbutton->callback(startfreefemserver);
    runbutton->tooltip("Run FreeFem++ on the program displayed in the editor");

    // pause.
    buttonx+=buttonspacing;
    pausebutton=new Fl_Button(buttonx,workingareatop,buttonwidth,toolbarheight,
			      "Pause");
    pausebutton->callback(pausefreefemserver);
    pausebutton->type(FL_TOGGLE_BUTTON);
    pausebutton->tooltip("Temporarily pause a running FreeFem++ computation"
			 " (press again to resume)");
    pausebutton->deactivate();

    // stop
    buttonx+=buttonspacing;
    stopbutton=new Fl_Button(buttonx,workingareatop,buttonwidth,toolbarheight,
			     "Stop");
    stopbutton->callback(stopfreefemserver);
    stopbutton->tooltip("Kill any currently running FreeFem++ computation");
    stopbutton->deactivate();
    editortoolbar.resizable(NULL);
    editortoolbar.end();

    // editor window
    editorbuffer=new Fl_Text_Buffer;
    highlightbuffer=new Fl_Text_Buffer(editorbuffer->length());
    inithighlight();

    editor=new Editor(0,workingareatop+toolbarheight,
		      editorareawidth,editorareaheight-toolbarheight);
    editor->buffer(editorbuffer);
    editorbuffer->add_modify_callback(textchanged,NULL);
    editor->textfont(FL_COURIER);
    editor->highlight_data(highlightbuffer,styletable,
			   sizeof(styletable)/sizeof(styletable[0]),
			   highlight_plain,unfinishedhighlight,0);
    editorbuffer->add_modify_callback(updatehighlight,NULL);
    editorbuffer->call_modify_callbacks();
    editorarea.resizable(editor);
    editorarea.end();

    // graphics area
    graphicsarea=new Fl_Group(editorareawidth,
			      workingareatop,
			      mainwindowwidth-editorareawidth,
			      editorareaheight);

    // graphics toolbar
    graphicstoolbar=new Fl_Group(editorareawidth,
				 workingareatop,
				 mainwindowwidth-editorareawidth,
				 toolbarheight);
    graphicstoolbar->box(FL_FLAT_BOX);

    // Create a group for all mouse control options
    fl_font(FL_HELVETICA,17);
    const char *clickmeanslabel="Click means:";
    const int clickmeanslabelsize=static_cast<int>(fl_width(clickmeanslabel));
    const char *clickpauselabel="Continue";
    const int clickpauselabelsize=
      static_cast<int>(fl_width(clickpauselabel))+10;
    buttonx=editorareawidth;
    Fl_Group clickcontrolarea(buttonx,workingareatop,
			      clickmeanslabelsize+clickpauselabelsize
			      +3*buttonwidth,toolbarheight);

    Fl_Output clickmeans(buttonx,workingareatop,
			 clickmeanslabelsize,toolbarheight);
    clickmeans.value(clickmeanslabel);
    clickmeans.box(FL_FLAT_BOX);
    clickmeans.color(FL_GRAY);

    // Click on the picture to un-pause (like previous FreeFem++ versions)
    buttonx+=clickmeanslabelsize;
    clickpausebutton=new Fl_Round_Button(buttonx,workingareatop,
					 clickpauselabelsize,
					 toolbarheight,clickpauselabel);
    clickpausebutton->type(FL_RADIO_BUTTON);
    clickpausebutton->tooltip("If this is set,"
			      " clicking in the graphics window will resume "
			      "a paused FreeFem++ computation");

    // Zooming in or out
    buttonx+=clickpauselabelsize;
    Fl_Round_Button zoominbutton(buttonx,workingareatop,
				 buttonwidth,toolbarheight,"Zoom +");
    zoominbutton.type(FL_RADIO_BUTTON);
    zoominbutton.callback(zoomin);
    zoominbutton.tooltip("If this is set,"
			 " left-clicking in the graphics window "
			 "will make it bigger");

    buttonx+=buttonspacing;
    Fl_Round_Button zoomoutbutton(buttonx,workingareatop,
				  buttonwidth,toolbarheight,"Zoom -");
    zoomoutbutton.type(FL_RADIO_BUTTON);
    zoomoutbutton.callback(zoomout);
    zoomoutbutton.tooltip("If this is set,"
			  " left-clicking in the graphics window "
			  "will make it smaller");

    clickpausebutton->setonly();
    clickcontrolarea.end();

    buttonx+=buttonspacing;
    Fl_Button zoomresetbutton(buttonx,workingareatop,
			      buttonwidth,toolbarheight,"No Zoom");
    zoomresetbutton.callback(zoomreset);
    zoomresetbutton.tooltip("Forget any zooming coefficient"
			    " and redraw the image");

    // This toolbar will only be activated when something is drawn
    graphicstoolbar->resizable(NULL);
    graphicstoolbar->deactivate();
    graphicstoolbar->end();

    // graphics window
    graphics=new Tffgraphics(editorareawidth,
			     workingareatop+toolbarheight,
			     mainwindowwidth-editorareawidth,
			     editorareaheight-toolbarheight);
    graphicsarea->resizable(graphics);
    graphicsarea->end();

    // FreeFem++ output
    output=new Fl_Text_Display(0,workingareatop+editorareaheight,
			       mainwindowwidth,outputheight);
    outputbuffer=new Fl_Text_Buffer;
    output->buffer(outputbuffer);
    output->color(FL_WHITE);

    workingarea.end();
    mainwindow->resizable(workingarea);

    // Status bar
    // ----------

    messagebar=new Fl_Output(0,workingareatop+workingareaheight,
			     mainwindowwidth,messagebarheight);
    messagebar->color(FL_GRAY);
    messagebar->value("Ready");

    // Final initialisations
    // ---------------------

    mainwindow->end();
    Fl::visual(FL_DOUBLE|FL_INDEX);
    setwindowtitle();

#ifdef CLIENTSERVER
    output->insert("\n-- FreeFem++ IDE client+server v");
#else
    output->insert("\n-- FreeFem++ IDE client v");
#endif
    output->insert(StrVersionNumber().c_str());
    output->insert("\n");
    output->show_insert_position();

    mainwindow->show();
    editor->take_focus();

    // Command-line parameters
    // -----------------------

    // A file name can be specified on the command line.
    int filearg=1;

    // MacOS adds an argument starting with "-psn" ("process serial
    // number"), which we do not use here.
    if(argc>=2 && strncmp(argv[1],"-psn",4)==0) filearg+=1;

    if(argc==filearg+1){

      // If we read the file now, it will activate the highlighting
      // procedure, which will call Fl::lock() before Fl::run(). This
      // crashes FLTK on Win32. So we wait until Fl::run() is called
      // by asking Fl::wait() to load the file.
      firstfile=argv[filearg];

      // A 1 second delay is enough on a dual-proc PIII 800Mhz
      // ("ljlldevelop"). TODO: Would this be enough on any Windows
      // machine?
      Fl::add_timeout(1.0,readfirstfile);
    }
#ifndef NDEBUG
    else if(argc!=filearg){
      fl_alert("FreeFem++: Wrong number of command-line arguments");
    }
#endif

    // Main loop
    // ---------

    return Fl::run();
  }
  catch(string explanation){

    // Use cerr because the graphical environment may not be properly
    // initialized at the time of the error.
    cerr<<"client: "<<explanation<<endl;
  }
}

#endif // CLIENT

// Main program
// ------------

int main(int argc,char *argv[]){

  // Client/Server mechanism
  // -----------------------

#ifdef CLIENTSERVER
  if(argc>=2 && string(argv[1])=="server") return servermain(argc,argv);
  else return clientmain(argc,argv);
#else
#ifdef CLIENT
  return clientmain(argc,argv);
#endif
#ifdef SERVER
  return servermain(argc,argv);
#endif
#endif // CLIENTSERVER
}
