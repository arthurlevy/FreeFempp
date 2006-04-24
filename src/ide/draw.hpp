// Graphics window
// ---------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: draw.hpp,v 1.2 2005/04/05 13:08:18 lehyaric Exp $

#ifndef DRAW_HPP
#define DRAW_HPP

#include <cassert>
#include <list>
#include <vector>
#include <string>
using namespace std;
#ifdef CLIENT
#include <FL/Fl_Button.H>
#include <FL/Fl_Round_Button.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Widget.H>
#include <FL/fl_draw.H>
#endif
#ifndef NOSOCKETS
#include "socket.hpp"
#endif

// Defines a default width and height for FreeFEM++ graphics, that
// will be scaled down to the window size when the actual drawing
// takes place. Uses "float" to avoid any rounding problems.
extern const float virtualwidth,virtualheight;

// We also define a virtual font size. It the size of the font that
// fits into a window of size virtualwidth x virtualheight. The actual
// font size will be scaled to the actual window size.
extern const float virtualfontsize;

// An object that the FreeFEM++ server can ask to be drawn by the
// graphical window.
class drawable{
public:

#ifdef CLIENT
  // How to draw that object in the graphical window
  virtual void draw()=0;

  // Creating a clone of the object (to go into the other drawing
  // list, back to front).
  virtual drawable *clone()=0;
#endif // CLIENT

  // When on the server, how to send data about that particular object
  // to the client, to enable the client to draw it (it is the default
  // constructor of this object that receives data on the client).
#ifdef SERVER
#ifndef NOSOCKETS
  virtual void send() const=0;
#endif
#endif // SERVER
};

#ifdef CLIENT

// A drawing list shared between FreeFEM++ server thread and the
// drawing window. There are two copies to leave the previous one on
// screen while the next one is built.
extern list<drawable*> drawings;
extern list<drawable*> backdrawings;

// Clears the front picture and transfers the back picture to the
// front.
void clearlist(list<drawable*> &l);
void flushdrawings();

// Zooming coefficients
extern float zoomcenterx,zoomcentery,zoomscale;

// Translation coefficients
extern int translatex,translatey;

// Limiting zoom to reasonable limits (X could crash if we asked for
// stupidly big fonts for instance).
void limitzoomscale();

// Zooming state (necessary for 1-button mice)
extern bool zoominstate;
void zoomin(Fl_Widget*,void*);
void zoomout(Fl_Widget*,void*);

#endif // CLIENT

// Information on each specific graphical object
class coords{
public:
  coords(){
    X=0.0;
    Y=0.0;
  }
  coords(const float x,const float y):X(x),Y(y){}

  // Scaling factors, useful only on the client side (where the
  // graphical window is displayed).

#ifdef CLIENT

  // The actual size of the drawing window
  static int widgetleft,widgettop,widgetwidth,widgetheight;

  // Keeping the picture square even in a rectangular window
  static float scale(){
    return min(widgetwidth/virtualwidth,widgetheight/virtualheight);
  }

  // Scaling procedure for x or y
  static int windowscaling(const float xy,const float zoomcenterxy,
			   const int widgetsize,
			   const int widgetstart,const int translate){

    // Zoom
    float zoomxy;
    zoomxy=(xy-zoomcenterxy)*zoomscale;

    // Scale
    float graphxy=zoomxy*scale();

    // Translate
    return static_cast<int>(graphxy)+translate+widgetsize/2+widgetstart;
  }

  // Find virtual coordinates back from window coordinates (to locate
  // the center of a zoom as pointed by the mouse).
  static float virtualscaling(const float xy,const float zoomcenterxy,
			      const int widgetsize,
			      const int widgetstart,const int translate){

    // Untranslate
    float untranslatexy=xy-translate-widgetsize/2-widgetstart;

    // Unscale
    float unscalexy=untranslatexy/scale();

    // Unzoom
    float unzoomxy=unscalexy/zoomscale+zoomcenterxy;

    return unzoomxy;
  }

  // how to convert from FreeFEM++ coordinates to FLTK window
  // coordinates. Keep the image scaled and centered.
  static int widgetx(const float x){
    return windowscaling(x,zoomcenterx,widgetwidth,widgetleft,translatex);
  }
  static int widgety(const float y){
    return windowscaling(y,zoomcentery,widgetheight,widgettop,translatey);
  }

  // Return the values of X and Y for a given widget size
  int getx() const{return widgetx(X);}
  int gety() const{return widgety(Y);}

#endif // CLIENT

  // Communication of coordinates from FreeFEM++ server to IDE client
#ifndef NOSOCKETS
#ifdef CLIENT
  void receive(){clientsocket>>X>>Y;}
#endif
#ifdef SERVER
  void send() const{*serversocket<<X<<Y;}
#endif
#endif

private:
  float X,Y;
};

#ifdef CLIENT

// Job control buttons
extern Fl_Button *runbutton;
extern Fl_Button *pausebutton;
extern Fl_Button *stopbutton;
extern Fl_Round_Button *clickpausebutton;

// The graphics toolbar must be accessible from here to be activated
// when some graphical data is displayed.
extern Fl_Group *graphicstoolbar;

// Defines default values for the zoom center, such that the graphics
// are well centered
void resetzoomcenter();

// Create a specific widget for FreeFEM++ drawings
class Tffgraphics:public Fl_Box{
public:
  Tffgraphics(int x,int y,int w,int h,const char *label = 0);

protected:

  void draw();

private:

  // Compute the zooming center in virtual coordinates from the
  // given window coordinates
  static void findzoomcenter();

  //  Distinguish mouse clicks for zooms (no motion) and translations
  //  (dragging motion).
  bool mousedrag;

  int oldmousex,oldmousey;

  // Catches the mouse when it comes by!
  int handle(int event);
};
extern Tffgraphics *graphics;
extern Fl_Group *graphicsarea;

// Resetting the zoom by clicking on a button
void zoomreset(Fl_Widget*,void*);

#endif // CLIENT

class color:public drawable{
public:
  color(const unsigned char r,const unsigned char g,const unsigned char b):
    red(r),green(g),blue(b){}
#ifdef CLIENT
#ifndef NOSOCKETS
  color(){clientsocket>>red>>green>>blue;}
#endif
  void draw(){
    fl_color(fl_rgb_color(red,green,blue));
  }
  drawable *clone(){return new color(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{*serversocket<<CMD_COLOR<<red<<green<<blue;}
#endif
#endif
private:
  unsigned char red,green,blue;
};

// Stores the default color that FreeFem++ selected, because we must
// remember it even when FreeFem++ clears the graphics (FF++ sets the
// color first, and then clears the image!).
extern color *defaultcolor;

class point:public drawable,private coords{
public:
  point(const coords c):coords(c){}
#ifdef CLIENT
#ifndef NOSOCKETS
  point(){coords::receive();}
#endif
  void draw(){fl_point(getx(),gety());}
  drawable *clone(){return new point(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{
    *serversocket<<CMD_POINT;
    coords::send();
  }
#endif
#endif
};

class line:public drawable{
public:
  line(const coords f,const coords t):from(f),to(t){}
#ifdef CLIENT
#ifndef NOSOCKETS
  line(){
    from.receive();
    to.receive();
  }
#endif
  void draw(){fl_line(from.getx(),from.gety(),to.getx(),to.gety());}
  drawable *clone(){return new line(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{
    *serversocket<<CMD_LINE;
    from.send();
    to.send();
  }
#endif
#endif
private:
  coords from,to;
};

class text:public drawable{
public:
  text(const coords s,const string l):start(s),label(l){}
#ifdef CLIENT
#ifndef NOSOCKETS
  text(){
    start.receive();
    clientsocket>>label;
  }
#endif
  void draw(){

    // Choose a font size proportional to the corresponding graphics.
    float fontsize=virtualfontsize*coords::scale();
    fontsize*=zoomscale;

    fl_font(FL_COURIER,static_cast<int>(fontsize));
    fl_draw(label.c_str(),start.getx(),start.gety());
  }
  drawable *clone(){return new text(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{
    *serversocket<<CMD_TEXT;
    start.send();
    *serversocket<<label;
  }
#endif
#endif
private:
  coords start;
  string label;
};

class pen:public drawable{
public:
  pen(const int t):thickness(t){}
#ifdef CLIENT
#ifndef NOSOCKETS
  pen(){clientsocket>>thickness;}
#endif
  void draw(){fl_line_style(FL_SOLID,thickness);}
  drawable *clone(){return new pen(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{*serversocket<<CMD_PEN<<thickness;}
#endif
#endif
private:
  int thickness;
};

class circle:public drawable{
public:
  circle(const coords c,const float r):centre(c),radius(r){}
#ifdef CLIENT
#ifndef NOSOCKETS
  circle(){
    centre.receive();
    clientsocket>>radius;
  }
#endif
  void draw(){
    fl_arc(static_cast<int>(centre.getx()-radius),
	   static_cast<int>(centre.gety()-radius),
	   static_cast<int>(2*radius),
	   static_cast<int>(2*radius),
	   0,360);
  }
  drawable *clone(){return new circle(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{
    *serversocket<<CMD_CIRCLE;
    centre.send();
    *serversocket<<radius;
  }
#endif
#endif
private:
  coords centre;
  float radius;
};

// A convex filled polygon
class polygon:public drawable{
public:
  polygon(const vector<coords> p):points(p){}
#ifdef CLIENT
#ifndef NOSOCKETS
  polygon(){

    // Get the number of points
    int n;
    clientsocket>>n;

    // Get point coordinates
    int i;
    for(i=0;i<n;i++){
      coords c;
      c.receive();
      points.push_back(c);
    }
  }
#endif
  void draw(){

    // Can speed up computations when the polygon has three or four
    // edges.
    assert(points.size()>=3);
    if(points.size()==3){
      fl_polygon(points[0].getx(),points[0].gety(),
		 points[1].getx(),points[1].gety(),
		 points[2].getx(),points[2].gety());
    }
    else if(points.size()==4){
      fl_polygon(points[0].getx(),points[0].gety(),
		 points[1].getx(),points[1].gety(),
		 points[2].getx(),points[2].gety(),
		 points[3].getx(),points[3].gety());
    }

    // More than four edges (and points)
    else{

      // Find the barycentre of all the points
      float x=0,y=0;
      for(vector<coords>::const_iterator p=points.begin();p<points.end();p++){
	x+=p->getx();
	y+=p->gety();
      }
      x/=points.size();
      y/=points.size();

      // Draw filled triangles defined by two polygon points and the
      // barycentre
      for(vector<coords>::const_iterator p=points.begin();p<points.end();
	  p++){

	// We need to link the last point back to the first
	if(p+1==points.end()){
	  fl_polygon(p->getx(),p->gety(),
		     points.begin()->getx(),points.begin()->gety(),
		     static_cast<int>(x),static_cast<int>(y));
	}
	else{
	  fl_polygon(p->getx(),p->gety(),
		     (p+1)->getx(),(p+1)->gety(),
		     static_cast<int>(x),static_cast<int>(y));
	}
      }
    }
  }
  drawable *clone(){return new polygon(*this);}
#endif
#ifdef SERVER
#ifndef NOSOCKETS
  void send() const{

    // Send number of points
    *serversocket<<CMD_POLYGON<<points.size();

    // Send each point coordinates
    for(vector<coords>::const_iterator p=points.begin();p<points.end();p++)
      p->send();
  }
#endif
#endif

private:
  vector<coords> points;
};

#endif // DRAW_HPP
