// Server-side treatments
// ----------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: server.cpp,v 1.7 2005/09/21 11:34:17 lehyaric Exp $
#define FF_GRAPH_SET_PTR
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <iostream>
using namespace std;
#include "tostring.hpp"
#include "server.hpp"
#include "commands.hpp"
#include "draw.hpp"

// FreeFEM++ libraries are only needed in the server
#include "../fflib/AFunction.hpp"
#include "../fflib/lex.hpp"
#include "../lglib/lg.tab.hpp"
#include "../Graphics/rgraph.hpp"
#include "../fflib/strversionnumber.hpp"

// FreeFEM++ output
// ----------------

// Defines an output stream which prints all its data into the
// FreeFEM++ output window.

class Tfreefemstreambuffer:public streambuf{
public:
  Tfreefemstreambuffer():streambuf(){
    char *ptr = new char[1024];
    setp(ptr,ptr+1024);
    setg(0,0,0);
  }

  ~Tfreefemstreambuffer(){
    sync();

    // pbase() points to "ptr" allocated above.
    delete[] pbase();
  }

protected:
  int overflow(int c){
    put_buffer();

    // What to do with the extra character
    if(c!=EOF){
      if (pbase() == epptr()) put_char(c);
      else sputc(c);
    }
    return 0;
  }

  int sync(){
    put_buffer();
    return 0;
  }

private:
  void put_buffer(void){

    // If there is text to display in the stream buffer
    if(pbase()!=pptr()){

      // Copy the data into the window
      string buffer(pbase(),pptr()-pbase());
#ifdef NOSOCKETS
      cmd_stdout(buffer);
#else
      *serversocket<<CMD_STDOUT<<buffer;
#endif

      // Reset the stream buffer
      setp(pbase(),epptr());
    }
  }

  // Output one single character
  void put_char(int c){
    string s;
    s.push_back(c);
#ifdef NOSOCKETS
    cmd_stdout(s);
#else
    *serversocket<<CMD_STDOUT<<s;
#endif
  }
};
Tfreefemstreambuffer freefemstreambuffer;

// Connecting to FreeFEM++
// -----------------------

// If the server does not use sockets but runs in a thread, we still
// need to tell the client thread when the server is finished (if
// sockets are used, we simply send a CMD_SERVER_DONE message).
#ifdef NOSOCKETS
Semaphore freefemserverended(1,1,"freefemserverended");
#endif

// Since we compute the line width and height in advance (to optimize
// TCP communication), we approximate every character to an 'X'.
double characterwidth;
float characterheight;

// Some required yet undeclared FreeFEM++ objects
extern bool lgdebug;
void init_lgfem() ;
void init_lgmesh() ;
void init_algo();
#ifdef HAVE_LIBARPACK
void init_eigenvalue();
#endif
extern double CPUcompileInit;
extern Block *currentblock;
extern int Compile();

// Extracted from function mymain(), file lg.tab.cpp
void runfreefem(const string program){

#ifndef NDEBUG
    printf("server: now running FreeFem++ program\n");
#endif

  cout << "-- FreeFem++ IDE server v" << StrVersionNumber() << endl;

  // Try and catch all the exceptions produced by FreeFEM++ to avoid
  // killing the IDE at the same time.
  int retvalue=0;
  try{

    // Initialisations
    // ---------------

    // The IDE is not configured for parallel computations yet
#ifdef PARALLELE
    assert(false);
#endif

    withrgraphique=false;
    lexdebug=false;
    lgdebug=false;
    zzzfff=new mylex(cout);

    // Transfer the program source from the editor to FreeFEM++
    zzzfff->input(program);
    
    // Mots-clés
    zzzfff->Add("include",INCLUDE);
    zzzfff->Add("load",LOAD);
    zzzfff->Add("while",WHILE);
    zzzfff->Add("for",FOR);
    zzzfff->Add("if",IF);
    zzzfff->Add("else",ELSE);
    zzzfff->Add("end",ENDOFFILE);
    zzzfff->Add("break",BREAK);
    zzzfff->Add("continue",CONTINUE);
    zzzfff->Add("return",RETURN);
    zzzfff->Add("border",BORDER);
    zzzfff->Add("fespace",FESPACEID);
    Init_map_type();
    cout << " Load: ";
    init_lgfem();
    init_lgmesh();
    init_algo();

#ifdef HAVE_LIBARPACK
    init_eigenvalue();
#endif   

#ifdef PARALLELE
    init_lgparallele(); 
#endif

#ifdef HAVE_LIBUMFPACK
    cout << " UMFPACK ";  
#endif

    cout << endl;

    // Running FreeFEM++
    // -----------------

    CPUcompileInit=CPUtime();

    currentblock=0;
    currentblock = new Block(currentblock);  

    // compile
    retvalue=Compile();

    if(retvalue==0)  
      if(currentblock) 
	retvalue=1,cerr <<  "Error:a block is not close" << endl;   
      else 
	cerr <<  "Bien: On a fini Normalement" << endl; 

    // Stopping FreeFEM++ properly
    // ---------------------------

    delete zzzfff;
  }
  catch(Error & e){
    retvalue=e.errcode();
    cout << "error " << e.what() 
	 << "\n code = "<<  retvalue << endl;

    // Warn the IDE client
    string message=string("FreeFem++ returned error ")+tostring(retvalue);
#ifdef NOSOCKETS
    cmd_error(message);
#else
    *serversocket<<CMD_ERROR<<message;
    serversocket->writeflush();
#endif
  }
}

// FreeFEM++ "rgraph" methods, modified to talk to Tffgraphics
// -----------------------------------------------------------

static long cube6[7][3] ={
  {65535,32000,32000},
  {65535,65535,0},
  {0,65535,0},
  {0,65535,65535},
  {0,0,65535},
  {65535,0,65535},
  {32000,0,0}
};

static long grey6[2][3] ={
  {65534,65534,65534},
  {0,0,0}
};

static FILE *psfile = 0;
static FILE *psfile_save = 0;
static bool grey=false;
static int LastColor=2;  //  pour est en couleur par defaut

const float fMinPixel = -32000;
const float fMaxPixel = +32000;
static int ncolortable,fcolor;

typedef struct rgb {
  unsigned char r;    // red component of color
  unsigned char g;  // green component of color
  unsigned char b;    // blue component of color
}	rgb;
static rgb *colortable=NULL;

static float echx,echy;

// FreeFem++ data: Minimum and maximum acceptable coordinates in
// FreeFem++ internal coordinates.
static float rxmin,rxmax,rymin,rymax;

static int  lacouleur;

// FreeFem++ data: Current (virtual screen) coordinate
float currx,curry;

static int INITGRAPH=0;

void myexit(int err){
  cout << " The End err=" << err << endl;
  exit(err);
}

void message(char *s){
  printf("%s	\n",s);
}

void erreur(char *s){
  message(s);
  exit(0);
}

void *safecalloc(size_t nb, size_t  size){
  void* p=NULL;
  p = calloc(nb, size);
  if (p == NULL) printf("Run out of Memory!\n");
  return p;
}

void safefree(void** f){
  if(*f){ free((char*) *f); *f=NULL;}
}

int LaCouleur() {return  lacouleur;}

void couleur(int c){ 
  if ( lacouleur == c) // small optim
    return;

  c= c > LastColor ? 1 : c; // c=std::min(c,LastColor); pour noir et blanc
  lacouleur = c;
  color tmp(0,0,0);
  if (colortable)
    { 
      if (c>=0 && c < ncolortable){
	tmp=color(colortable[c].r,
		  colortable[c].g,
		  colortable[c].b);
      }
      else 
	tmp=color(0,0,0);
    }
  else
    if ( c == 0 )
      tmp=color(255,255,255);
    else
      tmp=color(0,0,0);

  // Send new color to client
#ifdef NOSOCKETS
  defaultcolor=new color(tmp);
  backdrawings.push_back(new color(tmp));
#else
  tmp.send();
#endif

  if (psfile)
    {
      float r=1,g=1,b=1;
      if (colortable) {
	if (c>0 && c < ncolortable)
	  {
	    r =  (float) colortable[c].r/255;
	    g =  (float) colortable[c].g/255;
	    b =  (float) colortable[c].b/255;
	  }
      }
      else if (c!=0)
	r=g=b=0;
    
      fprintf(psfile,"%.3f %.3f %.3f C\n",r,g,b);
    }
}

// The color palette mechanism is kept on the server side. The client
// will only hear about the RGB values taken from the palette.
static rgb DefColor_rgb( int k,int nb, bool hsv,bool grey,int nbcolors,float *colors)
{
  rgb C;
  float r,g,b;
  extern void DefColor(float & r, float & g, float & b,
		       int k,int nb, bool hsv,bool grey,int nbcolors,float *colors);
  DefColor(r,g,b,   k,nb,hsv,grey,nbcolors,colors);
  C.r=(unsigned short)(255*r);
  C.g=(unsigned short)(255*g);
  C.b=(unsigned short)(255*b);
  return C;
}

void SetColorTable(int nb){
  int i;
  if (fcolor  && nb>2 && nb < 256) 
    { 
      nb = std::max(nb,8);
      if (ncolortable == nb) return;// optim
      if(colortable) delete [] colortable;
      colortable = new rgb[nb];
      ncolortable = nb;
      if(LastColor>1) LastColor=nb-1;
      int k=0;
      colortable[k].r=255;
      colortable[k].g=255;
      colortable[k].b=255;
      k++;
      colortable[k].r=0;
      colortable[k].g=0;
      colortable[k].b=0;
      k++;
      nb = nb -2;
      for (long i0=0;i0<nb;i0++,k++)
	{  
	  //     long  i1 = nb - i0;
	  long  i6 = i0*6;
	  long  j0 = i6/nb;// in 0..6
	  long  j1 = j0+1;// in 1..6
	  long  k0 = i0 - (nb*j0)/6L;
	  long  k1 = (nb*j1)/6L-i0;
	  long  kk = k0+k1;
	  if ( kk <= 0)
	    { cerr << kk << " " << nb << " " << k0 << " " << k1 << " " << endl;
	    assert(kk);
	    }
	  if (! grey)
	    {
	      colortable[k].r= (unsigned short)
		((long) (cube6[j1][0]*k0+cube6[j0][0]*k1)/kk);
	      colortable[k].g= (unsigned short)
		((long)  (cube6[j1][1]*k0+cube6[j0][1]*k1)/kk);
	      colortable[k].b= (unsigned short)
		((long) (cube6[j1][2]*k0+cube6[j0][2]*k1)/kk);
	    }
          else 
	    {
	      kk=nb-1;
	      k1 =  i0;
	      k0 = nb - i0 -1;
	      j0=1;
	      j1=0;
	      colortable[k].r= (unsigned short)
		((long) (grey6[j1][0]*k0+grey6[j0][0]*k1)/kk);
	      colortable[k].g= (unsigned short)
		((long)  (grey6[j1][1]*k0+grey6[j0][1]*k1)/kk);
	      colortable[k].b= (unsigned short)
		((long) (grey6[j1][2]*k0+grey6[j0][2]*k1)/kk);
	    }
	   
	  assert(k<ncolortable);
	}
    }
}
void SetColorTable1(int nb,bool hsv,int nbcolors,float *colors){
  int i;
  if (fcolor  && nb>2 && nb < 256) 
    { 
      nb = std::max(nb,8);
      if (ncolortable == nb) return;// optim
      if(colortable) delete [] colortable;
      colortable = new rgb[nb];
      ncolortable = nb;
      if(LastColor>1) LastColor=nb-1;
      for (int i0=0;i0<nb;i0++)
	{
	  colortable[i0]=DefColor_rgb(i0,nb,hsv,grey,nbcolors,colors);
	}

    }
}

void initgraphique(){
  colortable=0;
  ncolortable=0;
  LastColor=2;// En couleur pas defaul

  fcolor=1;
  SetColorTable(8); // set 

  INITGRAPH = 1;
}

void closegraphique(){
  if(INITGRAPH){
    INITGRAPH = 0;
    closePS();
  }
}

void cadre(float xmin,float xmax,float ymin,float ymax){
  rxmin = xmin;
  rxmax = xmax;
  rymin = ymin;
  rymax = ymax;

  echx = virtualwidth / (xmax - xmin);
  echy = virtualheight / (ymax - ymin);
}

void getcadre(float &xmin,float &xmax,float &ymin,float &ymax){
  xmin = rxmin;
  xmax = rxmax;
  ymin = rymin;
  ymax = rymax;
}

int InRecScreen(float x1, float y1,float x2, float y2){  
  return (std::max(x1,x2)>= rxmin)
    && (std::min(x1,x2) <= rxmax)
    && (std::max(y1,y2) >= rymin)
    && (std::min(y1,y2)  <= rymax);
}

int InPtScreen( float x, float y){
  return (x >= rxmin) && (x <= rxmax)
    && (y >= rymin) && (y <= rymax);
}

float scali(int i){
  return i/echx  + rxmin;
}

float scalj(int j){
  return -j/echy  + rymax;
}

float scalx(float x){
  return std::min(fMaxPixel,std::max(fMinPixel,((x - rxmin) * echx)));
}

float scaly(float y){
  return std::min(fMaxPixel,std::max(fMinPixel,((rymax - y) * echy)));
}

void pointe(float x, float y){
  coords c(scalx(x),scaly(y));
  point p(c);
#ifdef NOSOCKETS
  backdrawings.push_back(new point(p));
#else
  p.send();
#endif
}

void rmoveto(float x, float y){
  currx = scalx(x);
  curry = scaly(y);
}

void rlineto(float x, float y){
  float newx = scalx(x), newy = scaly(y);
  line l(coords(currx,curry),coords(newx,newy));
#ifdef NOSOCKETS
  backdrawings.push_back(new line(l));
#else
  l.send();
#endif
  if (psfile)
    fprintf(psfile,"%d %d %d %d L\n",
	    static_cast<int>(currx), static_cast<int>(virtualheight-curry),
	    static_cast<int>(newx), static_cast<int>(virtualheight-newy));
  currx = newx; curry = newy;
}

void cadreortho(float centrex, float centrey, float rayon){
  if (virtualheight < virtualwidth)
    {
      rymin = centrey - rayon;
      rymax = centrey + rayon;
      echx = echy= virtualheight / (2 * rayon);
      rxmin= centrex - virtualwidth / (2 * echx);
      rxmax= centrex + virtualwidth / (2 * echx);
    }
  else
    {
      rxmin = centrex - rayon;
      rxmax = centrex + rayon;
      echx = echy = virtualwidth / (2 * rayon);
      rymin = centrey - virtualheight / (2 * echy);
      rymax = centrey + virtualheight / (2 * echy);
    }
}

void plotstring(const char *s){

  // We do not use the same interactive mechanism as standard
  // FreeFem++, so we do not want to display the same help messages.
  if(string(s)!="Enter ? for help"){

    // Since we compute the line width in advance (to optimize TCP
    // communication), we approximate every character to an 'X'.
    int l=strlen(s);
    double lx=l*characterwidth;
    text t(coords(currx,curry),s);
#ifdef NOSOCKETS
    backdrawings.push_back(new text(t));
#else
    t.send();
#endif

    if(psfile) fprintf(psfile,"(%s) %d %d  S\n",s,static_cast<int>(currx),
		       static_cast<int>(virtualheight-curry));
    currx += lx;
  }
}

// Displays the graphical window (if anything is necessary to make it
// shown on screen).
void showgraphic(){}

void penthickness(int pepais){
#ifdef NOSOCKETS
  backdrawings.push_back(new pen(pepais));
#else
  pen(pepais).send();
#endif

  if(psfile) fprintf(psfile,"%d setlinewidth\n",static_cast<int>(pepais));
}

// Displays all recorded graphical objects in the graphical window
void viderbuff(){
#ifdef NOSOCKETS
  cmd_flush();
#else
  *serversocket<<CMD_FLUSH;
  serversocket->writeflush();
#endif
}

void cercle(float centrex, float centrey, float rayon){
  int r = (int) (rayon * echx);
  coords c(scalx(centrex),scaly(centrey));
  circle C(c,r);
#ifdef NOSOCKETS
  backdrawings.push_back(new circle(C));
#else
  C.send();
#endif
}

// Clears the graphical window
void reffecran(){
#ifdef NOSOCKETS
  cmd_clear();
#else
  *serversocket<<CMD_CLEAR;
#endif
}

void fillpoly(int n, float *poly){
  vector<coords> points;
  int i;
  for(i=0;i<n;i++){
    points.push_back(coords(scalx(poly[2*i]),scaly(poly[2*i+1])));
  }
#ifdef NOSOCKETS
  backdrawings.push_back(new polygon(points));
#else
  polygon(points).send();
#endif

  if(psfile){
    fprintf(psfile,"bF ");
    for (i=0;i<n;i++)
      fprintf(psfile,"%d %d ", static_cast<int>(scalx(poly[2*i])),
	      static_cast<int>(virtualheight-scaly( poly[2*i+1])));
    fprintf(psfile,"eF\n"); 
  }
}

// No-one should use this function any more (all files should be read
// via the IDE editor window).
int getprog(char* fn,int argc, char **argv){
  assert(false);
  return 0;
}

int execute(const char * str){ 
  return system(str);
}

// Interacting with the graphical window is done by the FLTK widget
// itself. So we use the default "sansrgraph" version of Getijc() and
// Getxyc().
char Getijc(int *x1,int *y1){
  *x1=0;
  *y1=0;

#ifdef NOSOCKETS
  cmd_flush();
  cmd_pause();
#else
  *serversocket<<CMD_FLUSH;
  *serversocket<<CMD_PAUSE;
  serversocket->writeflush();
  CMD_TYPE answer;
  *serversocket>>answer;
  assert(answer==CMD_RESUME);
#endif

  return 0;
}
   
char Getxyc(float &x,float &y){ 
  char c;
  int i,j;
  c = Getijc( &i,&j);
  x = scali(i);
  y = scalj(j);
  return c;
}

// Pauses provoked by plot(_,wait=1) go directly to getxyc(). The
// pause at the end of a program comes here with waitm==1. We want no
// pause at the end, so we just forget about waitm here.
void rattente(int waitm){}

void GetScreenSize(int &ix,int &iy){
  ix = static_cast<int>(virtualwidth);
  iy = static_cast<int>(virtualheight);
}

void openPS(const char *filename){
  char ffff[32];
  int count=0;
  if(psfile_save) closePS();
  time_t t_loc;
  float s=0.5;
  char  username[10];
  /*if (!cuserid(username)) */ strcpy(username,"inconnue");
  time(&t_loc);
  bool notfound;
  if( !filename) 
    do {
      struct stat buf;
      sprintf(ffff,"rgraph_%.3d.ps",count++);
      volatile int r= stat(ffff,&buf) ;
      notfound = r !=0;
      if(count>1000) break;
    } while ( !notfound );
   

  const char *fps (filename?filename:ffff);

  
  psfile=fopen(fps,"w");
  if(psfile) {
    psfile_save=psfile;
    fprintf(psfile,"%%!PS-Adobe-2.0 EPSF-2.0\n%%%%Creator: %s\n%%%%Title: FreeFem++\n","user");
    fprintf(psfile,"%%%%CreationDate: %s",ctime(&t_loc));
    fprintf(psfile,"%%%%Pages: 1\n");
    fprintf(psfile,"%%%%BoundingBox:       0 0 %d %d\n",int(virtualwidth*s),int(virtualheight*s));
    fprintf(psfile,"%%%%EndComments\n");
    fprintf(psfile," /L {newpath moveto lineto stroke} def\n");
    fprintf(psfile," /C {setrgbcolor} def\n");
    fprintf(psfile," /rec {newpath 4 copy 8 1 roll moveto 3 -1 roll lineto 4 2 roll exch lineto lineto closepath} def\n");
    fprintf(psfile," %f %f  scale \n",s,s);
    fprintf(psfile," 0 %d 0 %d rec clip\n",int(virtualwidth),int(virtualheight));
    fprintf(psfile," /Helvetica findfont 10 scalefont setfont\n");
    fprintf(psfile," /S {moveto show} def\n");
    fprintf(psfile," /bF  { mark} def \n");
    fprintf(psfile," /eF {newpath moveto counttomark 2 idiv {lineto} repeat closepath  fill cleartomark} def\n");
    fprintf(psfile," /P { /yy exch def /xx exch def   xx xx 1 add yy yy 1 add  rec  fill } def\n");
    fprintf(psfile," 1 setlinewidth\n");
  }
  else 
    cerr << " Err openning postscript file " << fps << endl;
}

void closePS(){
  if(psfile_save) {
    fprintf(psfile_save,"showpage\n");
    fclose(psfile_save);
  }
  psfile_save=0;
  psfile=0;
}

void coutmode(short i){}

float GetHeigthFont(){

  // Since we compute the line height in advance (to optimize TCP
  // communication), we approximate every character to an 'X'.
  
  // The final numerical coefficient depends on the shape of the
  // chosen font
  return characterheight/echy/1.5;
}

void Commentaire(const char * c){
  if(psfile){
    fprintf(psfile,"%% %s\n",c);
  }
}

void NoirEtBlanc(int NB){
  if(NB) LastColor=1;
  else LastColor=ncolortable?ncolortable:2;
}
 
void MettreDansPostScript(int in){
  if(in) psfile=psfile_save;
  else psfile=0;
}

static void FillRect(float x0,float y0, float x1, float y1){
  float r[8];
  r[0]=x0;r[1]=y0;
  r[2]=x1;r[3]=y0;
  r[4]=x1;r[5]=y1;
  r[6]=x0;r[7]=y1;
  fillpoly(4,r);
}

int PutLevel(int lineno, float xf, int col){
  float xmin,xmax,ymin,ymax;
  getcadre(xmin,xmax,ymin,ymax);
  float xleft = xmax - (xmax-xmin)*0.1;
  float ytop  = ymax;
  float ydelta = (ymax-ymin)/40;
  ydelta=GetHeigthFont();
  xleft = xmax - 6*ydelta;  
  ytop -= ydelta*(col+2);
  couleur(col);
  FillRect(xleft+ydelta/8.,ytop+ydelta/8.,
	   xleft+ydelta*7./8.,ytop+ydelta*7./8.);
  rmoveto(xleft+ydelta*1.4,ytop+ydelta/4);
  char buf[30];
  sprintf(buf,"%g",xf);
  couleur(1);
  plotstring(buf);

  return lineno;
}

// FreeFem++ does not pilot the help screens, the IDE does
void ShowHelp(const char *,int){
  assert(false);
}

void setgrey(bool gg ){grey=gg;}
int getgrey(){return grey;}

// Main server program
// -------------------

int servermain(int argc,char *argv[]){

#ifdef DIALOG_DEBUG
  cerr<<"server: FreeFem++ server starting"<<endl;
#endif

#ifndef NOSOCKETS
  // Catches all exceptions to display them where we can see them (on
  // cerr).
  try{

    // Get all the parameters sent by the client as command-line
    // parameters.

    // $1="server"
    if(argc!=4 ||string(argv[1])!="server"){
      cerr<<"This is the FreeFem++ computational server"<<endl;
      cerr<<"Please run \"FreeFem++-cs\" to access this server"<<endl;
      exit(1);
    }
    
    // $2=client hostname
    string clientname=argv[2];
    
    // $3=client port number
    istringstream i(argv[3]);
    i>>commport;

    // Opens the communication socket
    serversocket=new Socket(clientname,commport);
  }
  catch(string Exception){

    // printf is not redirected to the client output window but to the
    // initial terminal. So there is more chance to see messages there
    // in case the new socket does not work properly.
    printf("%s\n",Exception.c_str());
  }
#endif//NOSOCKETS

  // Now the socket works, so we can display errors in the client
  // output window (where the user will most likely look for them).
  try{

    // Redirects all FreeFEM++ output through cout (and cerr) to the
    // output window (note: printf() is not redirected).
#ifdef DIALOG_DEBUG
    printf("server: redirecting cout\n");
#endif
    cout.rdbuf(&freefemstreambuffer);
#ifdef DIALOG_DEBUG
    printf("server: cout redirected\n");
#endif

    // Get the program we have to run
    string program;
#ifdef NOSOCKETS
    program=cmd_program();
#else
#ifdef DIALOG_DEBUG
    printf("server: asking for program text\n");
#endif
    *serversocket<<CMD_PROGRAM;
    serversocket->writeflush();
#ifdef DIALOG_DEBUG
    printf("server: waiting for program text\n");
#endif
    *serversocket>>program;
#ifndef NDEBUG
    printf("server: program received\n");
#endif
#endif // NOSOCKETS

#ifdef DIALOG_DEBUG
    printf("server: program text is:\n%s\n",program.c_str());
#endif

    // Get some more information about graphics, to avoid splitting
    // the flux of graphical commands from server to client (this
    // slows down TCP quite a lot).
#ifdef NOSOCKETS
    characterheight=cmd_line_height();
    characterwidth=cmd_line_width("X");
#else
    *serversocket<<CMD_LINE_HEIGHT;
    serversocket->writeflush();
    *serversocket>>characterheight;
    string x="X";
    *serversocket<<CMD_LINE_WIDTH<<x;
    serversocket->writeflush();
    *serversocket>>characterwidth;
#endif//NOSOCKETS
#ifndef NDEBUG
    printf("server: graphical characters size evaluated\n");
#endif

    // Run FreeFEM++
    runfreefem(program);
  }
  catch(string Exception){

    // printf is not redirected to the client output window but to the
    // initial terminal. So there is more chance to see messages there
    // in case the socket does not work properly.
    printf("%s\n",Exception.c_str());
  }

  // If we are not using sockets, we still need to tell the other
  // threads when the server is finished.
#ifdef NOSOCKETS
  freefemserverended.Incr();
#else
  // A separate block to insure the socket is closed whatever happened
  // before
  try{
    *serversocket<<CMD_SERVER_DONE;
    serversocket->writeflush();

    // Wait for an answer, but the client will close the socket soon
    // after that anyway.
    string answer;
    *serversocket>>answer;
    assert(answer=="ok");

    serversocket->Close();
  }
  catch(string Exception){

    // printf is not redirected to the client output window but to the
    // initial terminal. So there is more chance to see messages there
    // in case the socket does not work properly.
    printf("%s\n",Exception.c_str());
  }
#endif//NOSOCKETS

  return 0;
}
