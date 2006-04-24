// Graphics window
// ---------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: draw.cpp,v 1.2 2005/04/05 13:08:18 lehyaric Exp $

#include "draw.hpp"

#ifdef CLIENT
#include <FL/Fl.H>
#include "spawn.hpp"
#endif

// Defines a default width and height for FreeFEM++ graphics, that
// will be scaled down to the window size when the actual drawing
// takes place. Uses "float" to avoid any rounding problems.
const float virtualwidth=800.0, virtualheight=800.0;

// We also define a virtual font size. It the size of the font that
// fits into a window of size virtualwidth x virtualheight. The actual
// font size will be scaled to the actual window size.
const float virtualfontsize=15.0;

// The rest is only useful in a client
#ifdef CLIENT

// A drawing list shared between FreeFEM++ server thread and the
// drawing window. There are two copies to leave the previous one on
// screen while the next one is built.
list<drawable*> drawings;
list<drawable*> backdrawings;

// Clears the front picture and transfers the back picture to the
// front.
void clearlist(list<drawable*> &l){
  for(list<drawable*>::iterator d=l.begin();d!=l.end();d++)
    delete *d;
  l.resize(0);
}

void flushdrawings(){

  // Delete any previous objects from the list of drawings
  clearlist(drawings);

  // Copies all the newly built objects to have a stable image
  // displayed on screen.
   for(list<drawable*>::iterator d=backdrawings.begin();
       d!=backdrawings.end();
       d++)
     drawings.push_back((*d)->clone());
}

// Zooming coefficients
float zoomcenterx=0.0,zoomcentery=0.0,zoomscale=1.0;

// Translation coefficients
int translatex=0,translatey=0;

// Limiting zoom to reasonable limits (X could crash if we ask for
// stupidly big fonts for instance).
void limitzoomscale(){
  if(zoomscale>50.0) zoomscale=50.0;
  if(zoomscale<1/50.0) zoomscale=1/50.0;
}

// Zooming state (necessary for 1-button mice)
bool zoominstate=true;
void zoomin(Fl_Widget*,void*){
  zoominstate=true;
}
void zoomout(Fl_Widget*,void*){
  zoominstate=false;
}

int coords::widgetleft,
  coords::widgettop,
  coords::widgetwidth,
  coords::widgetheight;

// Job control buttons
Fl_Button *runbutton=NULL;
Fl_Button *pausebutton=NULL;
Fl_Button *stopbutton=NULL;
Fl_Round_Button *clickpausebutton=NULL;

// The graphics toolbar must be accessible from here to be activated
// when some graphical data is displayed.
Fl_Group *graphicstoolbar=NULL;

// Defines default values for the zoom center, such that the graphics
// are well centered
void resetzoomcenter(){
    
  // The default zoom center should be the center of the virtual
  // graphics
  zoomcenterx=virtualwidth/2;
  zoomcentery=virtualheight/2;

  // The default translation should bring the zoom center to the
  // middle of the current graphical window (all the
  // window-size-dependant components of "translate*" are added inside
  // coords::windowscaling()).
  translatex=0;
  translatey=0;
}

Tffgraphics::Tffgraphics(int x,int y,int w,int h,const char *label):
  Fl_Box(FL_DOWN_BOX,x,y,w,h,label){
  color(FL_WHITE);
}

void Tffgraphics::draw(){
  Fl_Box::draw();

  // Update the actual widget size with its current value.
  coords::widgetleft=x();
  coords::widgettop=y();
  coords::widgetwidth=w();
  coords::widgetheight=h();

  // If there is something to draw
  if(drawings.size()!=0){

    // Clean window borders
    const int edge=3;
    fl_push_clip(x()+edge,y()+edge,w()-2*edge,h()-2*edge);

    // Just ask all the objects to draw themselves
    for(list<drawable*>::iterator d=drawings.begin();d!=drawings.end();d++)
      (*d)->draw();
    
    fl_pop_clip();

    // on Windows, the line style is not reset automatically after
    // this.
    fl_line_style(FL_SOLID,1);
  }
}

// Compute the zooming center in virtual coordinates from the
// given window coordinates
void Tffgraphics::findzoomcenter(){
  zoomcenterx=coords::virtualscaling(Fl::event_x(),zoomcenterx,
				     coords::widgetwidth,
				     coords::widgetleft,translatex);
  zoomcentery=coords::virtualscaling(Fl::event_y(),zoomcentery,
				     coords::widgetheight,
				     coords::widgettop,translatey);

  // We want the center of interest to stay under the mouse
  // cursor. Remove any window-size-dependant component from the
  // translation, to be able to redraw the same scene event when the
  // window is resized.
  translatex=Fl::event_x()-coords::widgetleft-coords::widgetwidth/2;
  translatey=Fl::event_y()-coords::widgettop-coords::widgetheight/2;
}

// Catches the mouse when it comes by!
int Tffgraphics::handle(int event){
  switch(event){
  case FL_PUSH:

    // Do we use mouse clicks to un-pause FreeFem++ or to zoom?
    if(clickpausebutton->value()){
      freefemthreadcomm.WAIT();
      if(freefempaused){
	freefempause.Incr();
	freefempaused=false;
	pausebutton->clear();
	messagebar->value("FreeFem++ computation resumed");
      }
      freefemthreadcomm.Free();
    }
    else{
      oldmousex=Fl::event_x();
      oldmousey=Fl::event_y();
      mousedrag=false;
    }
    return 1;

  case FL_DRAG:
    if(!clickpausebutton->value()){
      translatex+=Fl::event_x()-oldmousex;
      translatey+=Fl::event_y()-oldmousey;
      oldmousex=Fl::event_x();
      oldmousey=Fl::event_y();
      mousedrag=true;
      redraw();
    }
    return 1;

  case FL_RELEASE:
    // Only if there is currently something to display in the
    // graphical window, and if the mouse action was not a drag.
    if(drawings.size()!=0 && !mousedrag){

      // Do we use mouse clicks to un-pause FreeFem++ or to zoom?
      if(!clickpausebutton->value()){

	findzoomcenter();

	//  Change zoom scale _after_ computing zoom center coordinates!
	switch(Fl::event_button()){
	case FL_LEFT_MOUSE: // Zoom in
	  if(zoominstate) zoomscale*=1.5;
	  else zoomscale/=1.5;
	  limitzoomscale();
	  break;
	case FL_MIDDLE_MOUSE: // Zoom reset
	  zoomscale=1.0;
	  resetzoomcenter();
	  break;
	case FL_RIGHT_MOUSE: // Zoom out
	  if(zoominstate) zoomscale/=1.5;
	  else zoomscale*=1.5;
	  limitzoomscale();
	  break;
	default:
	  assert(false);
	}

	redraw();
      }
    }
    return 1;

  case FL_ENTER:
    messagebar->value("This is the graphical output window");
    return 1;

  case FL_LEAVE:

    // Remove any message we put there when "FL_ENTER" happened.
    messagebar->value("");
    return 1;

  default:
    return Fl_Widget::handle(event);
  }
}

Tffgraphics *graphics=NULL;
Fl_Group *graphicsarea=NULL;

// Resetting the zoom by clicking on a button
void zoomreset(Fl_Widget*,void*){
  zoomscale=1.0;
  resetzoomcenter();
  graphics->redraw();
}

// Stores the default color that FreeFem++ selected, because we must
// remember it even when FreeFem++ clears the graphics (FF++ sets the
// color first, and then clears the image!).
color *defaultcolor=NULL;

#endif // CLIENT
