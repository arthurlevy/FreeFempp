// Color-coding for FreeFem++-cs editor window
// Antoine Le Hyaric - LJLL Paris  - lehyaric@ann.jussieu.fr
// $Id: highlight.cpp,v 1.17 2006-04-03 20:09:30 hecht Exp $

#include <iostream>
#include <cassert>
using namespace std;
#include "highlight.hpp"
#include "hl_lexyacc.hpp"
// Final result: a string containing highlight codes
string highlight;

// Read from a string rather than from a file
string lexinput;
int lexinputpos=0;

// Remember which names have been properly defined
map<string,reservedinfo> reserved;
map<string,string> symbols;
vector<string> words;

void inithighlightparser(){
  reserved["append"]=reservedinfo(highlight_parameter,APPEND);
  reserved["R3"]=reservedinfo(highlight_type,R3);
  reserved["BFGS"]=reservedinfo(highlight_keyword,BFGS);
  reserved["BoundaryProblem"]=reservedinfo(highlight_keyword,BOUNDARYPROBLEM);
  reserved["CG"]=reservedinfo(highlight_keyword,CG);
  reserved["Cholesky"]=reservedinfo(highlight_keyword,CHOLESKY);
  reserved["Crout"]=reservedinfo(highlight_keyword,CROUT);
  reserved["GMRES"]=reservedinfo(highlight_keyword,GMRES);
  reserved["HaveUMFPACK"]=reservedinfo(highlight_keyword,HAVEUMFPACK);
  reserved["IsMetric"]=reservedinfo(highlight_parameter,ISMETRIC);
  reserved["hsv"]=reservedinfo(highlight_parameter,HSV);
  reserved["LU"]=reservedinfo(highlight_keyword,LU);
  reserved["LinearCG"]=reservedinfo(highlight_keyword,LINEARCG);
  reserved["EigenValue"]=reservedinfo(highlight_keyword,EIGENVALUE);
  reserved["LinearGMRES"]=reservedinfo(highlight_keyword,LINEARGMRES);
  reserved["nv"]=reservedinfo(highlight_global,BIG_N);
  reserved["nt"]=reservedinfo(highlight_global,BIG_N);
  reserved["N"]=reservedinfo(highlight_global,BIG_N);
  reserved["NLCG"]=reservedinfo(highlight_keyword,NLCG);
  reserved["Newton"]=reservedinfo(highlight_global,NEWTON);
  reserved["NoUseOfWait"]=reservedinfo(highlight_global,NOUSEOFWAIT);
  reserved["P"]=reservedinfo(highlight_global,P);
  reserved["P0"]=reservedinfo(highlight_type,P0);
  reserved["P0edge"]=reservedinfo(highlight_type,P0edge);
  reserved["P1"]=reservedinfo(highlight_type,P1);
  reserved["P1b"]=reservedinfo(highlight_type,P1B);
  reserved["P1dc"]=reservedinfo(highlight_type,P1DC);
  reserved["P1nc"]=reservedinfo(highlight_type,P1NC);
  reserved["P2"]=reservedinfo(highlight_type,P2);
  reserved["P2dc"]=reservedinfo(highlight_type,P2DC);
  reserved["P2h"]=reservedinfo(highlight_type,P2H);
  reserved["RT0"]=reservedinfo(highlight_type,RT0);
  reserved["RT0Ortho"]=reservedinfo(highlight_type,RT0ORTHO);
  reserved["UMFPACK"]=reservedinfo(highlight_keyword,UMFPACK);
  reserved["abs"]=reservedinfo(highlight_keyword,ABS);
  reserved["abserror"]=reservedinfo(highlight_parameter,ABSERROR);
  reserved["acos"]=reservedinfo(highlight_keyword,ACOS);
  reserved["acosh"]=reservedinfo(highlight_keyword,ACOSH);
  reserved["adaptmesh"]=reservedinfo(highlight_keyword,ADAPTMESH);
  reserved["anisomax"]=reservedinfo(highlight_parameter,ANISOMAX);
  reserved["area"]=reservedinfo(highlight_global,AREA);
  reserved["arg"]=reservedinfo(highlight_keyword,ARG);
  reserved["asin"]=reservedinfo(highlight_keyword,ASIN);
  reserved["asinh"]=reservedinfo(highlight_keyword,ASINH);
  reserved["aspectratio"]=reservedinfo(highlight_parameter,ASPECTRATIO);
  reserved["assert"]=reservedinfo(highlight_keyword,ASSERT);
  reserved["atan"]=reservedinfo(highlight_keyword,ATAN);
  reserved["atan2"]=reservedinfo(highlight_keyword,ATAN2);
  reserved["atanh"]=reservedinfo(highlight_keyword,ATANH);
  reserved["average"]=reservedinfo(highlight_keyword,AVERAGE);
  reserved["bb"]=reservedinfo(highlight_parameter,BB);
  reserved["binside"]=reservedinfo(highlight_parameter,BINSIDE);
  reserved["bmat"]=reservedinfo(highlight_parameter,BMAT);
  reserved["bool"]=reservedinfo(highlight_type,BOOL);
  reserved["border"]=reservedinfo(highlight_type,BORDER);
  reserved["break"]=reservedinfo(highlight_keyword,BREAK);
  reserved["broadcast"]=reservedinfo(highlight_keyword,BROADCAST);
  reserved["buildmesh"]=reservedinfo(highlight_keyword,BUILDMESH);
  reserved["buildmeshborder"]=reservedinfo(highlight_keyword,BUILDMESHBORDER);
  reserved["bw"]=reservedinfo(highlight_parameter,BW);
  reserved["cadna"]=reservedinfo(highlight_parameter,CADNA);
  reserved["checkmovemesh"]=reservedinfo(highlight_keyword,CHECKMOVEMESH);
  reserved["cin"]=reservedinfo(highlight_global,CIN);
  reserved["clean"]=reservedinfo(highlight_parameter,CLEAN);
  reserved["clock"]=reservedinfo(highlight_keyword,CLOCK);
  reserved["cmm"]=reservedinfo(highlight_parameter,CMM);
  reserved["coef"]=reservedinfo(highlight_parameter,COEF);
  reserved["complex"]=reservedinfo(highlight_type,COMPLEX);
  reserved["conj"]=reservedinfo(highlight_keyword,CONJ);
  reserved["continue"]=reservedinfo(highlight_keyword,CONTINUE);
  reserved["convect"]=reservedinfo(highlight_keyword,CONVECT);
  reserved["cos"]=reservedinfo(highlight_keyword,COS);
  reserved["cosh"]=reservedinfo(highlight_keyword,COSH);
  reserved["cout"]=reservedinfo(highlight_global,COUT);
  reserved["cutoff"]=reservedinfo(highlight_parameter,CUTOFF);
  reserved["diag"]=reservedinfo(highlight_global,DIAG);
  reserved["dimKrylov"]=reservedinfo(highlight_parameter,DIMKRYLOV);
  reserved["dumptable"]=reservedinfo(highlight_keyword,DUMPTABLE);
  reserved["dn"]=reservedinfo(highlight_keyword,DN);
  reserved["dx"]=reservedinfo(highlight_keyword,DX);
  reserved["dxx"]=reservedinfo(highlight_keyword,DXX);
  reserved["dxy"]=reservedinfo(highlight_keyword,DXY);
  reserved["dy"]=reservedinfo(highlight_keyword,DY);
  reserved["dyx"]=reservedinfo(highlight_keyword,DYX);
  reserved["dyy"]=reservedinfo(highlight_keyword,DYY);
  reserved["dz"]=reservedinfo(highlight_keyword,DZ);
  reserved["else"]=reservedinfo(highlight_keyword,ELSE);
  reserved["emptymesh"]=reservedinfo(highlight_keyword,EMPTYMESH);
  reserved["end"]=reservedinfo(highlight_keyword,END);
  reserved["endl"]=reservedinfo(highlight_global,ENDL);
  reserved["eps"]=reservedinfo(highlight_parameter,EPS);
  reserved["err"]=reservedinfo(highlight_parameter,ERR);
  reserved["errg"]=reservedinfo(highlight_parameter,ERRG);
  reserved["exec"]=reservedinfo(highlight_keyword,EXEC);
  reserved["exit"]=reservedinfo(highlight_keyword,EXIT);
  reserved["exp"]=reservedinfo(highlight_keyword,EXP);
  reserved["factorize"]=reservedinfo(highlight_parameter,FACTORIZE);
  reserved["false"]=reservedinfo(highlight_global,FF_FALSE);
  reserved["fespace"]=reservedinfo(highlight_type,FESPACE);
  reserved["fill"]=reservedinfo(highlight_parameter,FILL);
  reserved["for"]=reservedinfo(highlight_keyword,FOR);
  reserved["func"]=reservedinfo(highlight_type,FUNC);
  reserved["grey"]=reservedinfo(highlight_parameter,GREY);
  reserved["hTriangle"]=reservedinfo(highlight_global,HTRIANGLE);
  reserved["hmax"]=reservedinfo(highlight_parameter,HMAX);
  reserved["hmin"]=reservedinfo(highlight_parameter,HMIN);
  reserved["i"]=reservedinfo(highlight_global,I);
  reserved["if"]=reservedinfo(highlight_keyword,IF);
  reserved["ifstream"]=reservedinfo(highlight_type,IFSTREAM);
  reserved["imag"]=reservedinfo(highlight_type,IMAG);
  reserved["include"]=reservedinfo(highlight_keyword,INCLUDE);
  reserved["init"]=reservedinfo(highlight_parameter,INIT);
  reserved["inquire"]=reservedinfo(highlight_parameter,INQUIRE);
  reserved["inside"]=reservedinfo(highlight_parameter,INSIDE);
  reserved["int"]=reservedinfo(highlight_type,INT);
  reserved["int1d"]=reservedinfo(highlight_keyword,INT1D);
  reserved["int2d"]=reservedinfo(highlight_keyword,INT2D);
  reserved["intalledges"]=reservedinfo(highlight_keyword,INTALLEDGES);
  reserved["interpolate"]=reservedinfo(highlight_keyword,INTERPOLATE);
  reserved["iso"]=reservedinfo(highlight_parameter,ISO);
  reserved["ivalue"]=reservedinfo(highlight_parameter,IVALUE);
  reserved["jump"]=reservedinfo(highlight_keyword,JUMP);
  reserved["keepbackvertices"]=reservedinfo(highlight_parameter,KEEPBACKVERTICES);
  reserved["label"]=reservedinfo(highlight_global,LABEL);
  reserved["lenEdge"]=reservedinfo(highlight_global,LENEDGE);
  reserved["load"]=reservedinfo(highlight_keyword,LOAD);
  reserved["log"]=reservedinfo(highlight_keyword,LOG);
  reserved["log10"]=reservedinfo(highlight_keyword,LOG10);
  reserved["m"]=reservedinfo(highlight_global,M);
  reserved["matrix"]=reservedinfo(highlight_type,MATRIX);
  reserved["resize"]=reservedinfo(highlight_global,RESIZE);
  reserved["max"]=reservedinfo(highlight_global,MAX);
  reserved["maxit"]=reservedinfo(highlight_parameter,MAXIT);
  reserved["maxsubdiv"]=reservedinfo(highlight_parameter,MAXSUBDIV);
  reserved["mean"]=reservedinfo(highlight_keyword,MEAN);
  reserved["mesh"]=reservedinfo(highlight_type,MESH);
  reserved["metric"]=reservedinfo(highlight_parameter,METRIC);
  reserved["min"]=reservedinfo(highlight_global,MIN);
  reserved["movemesh"]=reservedinfo(highlight_keyword,MOVEMESH);
  reserved["mpirank"]=reservedinfo(highlight_keyword,MPIRANK);
  reserved["mpisize"]=reservedinfo(highlight_keyword,MPISIZE);
  reserved["n"]=reservedinfo(highlight_global,SMALL_N);
  reserved["nTonEdge"]=reservedinfo(highlight_global,NTONEDGE);
  reserved["nbarrow"]=reservedinfo(highlight_parameter,NBARROW);
  reserved["nbev"]=reservedinfo(highlight_parameter,NBEV);
  reserved["nbiso"]=reservedinfo(highlight_parameter,NBISO);
  reserved["nbiter"]=reservedinfo(highlight_parameter,NBITER);
  reserved["nbiterline"]=reservedinfo(highlight_parameter,NBITERLINE);
  reserved["nbjacoby"]=reservedinfo(highlight_parameter,NBJACOBY);
  reserved["nbsmooth"]=reservedinfo(highlight_parameter,NBSMOOTH);
  reserved["nbvx"]=reservedinfo(highlight_parameter,NBVX);
  reserved["ncv"]=reservedinfo(highlight_parameter,NCV);
  reserved["nomeshgeneration"]=reservedinfo(highlight_parameter,NOMESHGENERATION);
  reserved["norm"]=reservedinfo(highlight_keyword,NORM);
  reserved["nuEdge"]=reservedinfo(highlight_global,NUEDGE);
  reserved["precision"]=reservedinfo(highlight_global,PRECISION);
  reserved["sum"]=reservedinfo(highlight_global,SUM);
  reserved["ndof"]=reservedinfo(highlight_global,NDOF);
  reserved["ndofK"]=reservedinfo(highlight_global,NDOFK);
  reserved["nuTriangle"]=reservedinfo(highlight_global,NUTRIANGLE);
  reserved["ofstream"]=reservedinfo(highlight_type,OFSTREAM);
  reserved["omega"]=reservedinfo(highlight_parameter,OMEGA);
  reserved["on"]=reservedinfo(highlight_keyword,ON);
  reserved["op"]=reservedinfo(highlight_parameter,OP);
  reserved["optimize"]=reservedinfo(highlight_parameter,OPTIMIZE);
  reserved["otherside"]=reservedinfo(highlight_keyword,OTHERSIDE);
  reserved["periodic"]=reservedinfo(highlight_parameter,PERIODIC);
  reserved["pi"]=reservedinfo(highlight_global,PI);
  reserved["plot"]=reservedinfo(highlight_keyword,PLOT);
  reserved["polar"]=reservedinfo(highlight_keyword,POLAR);
  reserved["pow"]=reservedinfo(highlight_keyword,POW);
  reserved["power"]=reservedinfo(highlight_parameter,POWER);
  reserved["precon"]=reservedinfo(highlight_parameter,PRECON);
  reserved["problem"]=reservedinfo(highlight_type,PROBLEM);
  reserved["processor"]=reservedinfo(highlight_keyword,PROCESSOR);
  reserved["ps"]=reservedinfo(highlight_parameter,PS);
  reserved["qfe"]=reservedinfo(highlight_parameter,QFE);
  reserved["qfnbpE"]=reservedinfo(highlight_parameter,QFNBPE);
  reserved["qfnbpT"]=reservedinfo(highlight_parameter,QFNBPT);
  reserved["qforder"]=reservedinfo(highlight_parameter,QFORDER);
  reserved["qft"]=reservedinfo(highlight_parameter,QFT);
  reserved["ratio"]=reservedinfo(highlight_parameter,RATIO);
  reserved["readmesh"]=reservedinfo(highlight_keyword,READMESH);
  reserved["real"]=reservedinfo(highlight_type,REAL);
  reserved["region"]=reservedinfo(highlight_keyword,REGION);
  reserved["rescaling"]=reservedinfo(highlight_parameter,RESCALING);
  reserved["return"]=reservedinfo(highlight_keyword,RETURN);
  reserved["save"]=reservedinfo(highlight_parameter,SAVE);
  reserved["savemesh"]=reservedinfo(highlight_keyword,SAVEMESH);
  reserved["set"]=reservedinfo(highlight_keyword,SET);
  reserved["sigma"]=reservedinfo(highlight_parameter,SIGMA);
  reserved["sin"]=reservedinfo(highlight_keyword,SIN);
  reserved["sinh"]=reservedinfo(highlight_keyword,SINH);
  reserved["solve"]=reservedinfo(highlight_keyword,SOLVE);
  reserved["solver"]=reservedinfo(highlight_parameter,SOLVER);
  reserved["split"]=reservedinfo(highlight_parameter,SPLIT);
  reserved["splitin2"]=reservedinfo(highlight_parameter,SPLITIN2);
  reserved["splitmesh"]=reservedinfo(highlight_keyword,SPLITMESH);
  reserved["splitpbedge"]=reservedinfo(highlight_parameter,SPLITPBEDGE);
  reserved["sqrt"]=reservedinfo(highlight_keyword,SQRT);
  reserved["square"]=reservedinfo(highlight_keyword,SQUARE);
  reserved["strategy"]=reservedinfo(highlight_parameter,STRATEGY);
  reserved["string"]=reservedinfo(highlight_type,STRING);
  reserved["sym"]=reservedinfo(highlight_parameter,SYM);
  reserved["t"]=reservedinfo(highlight_parameter,T);
  reserved["tan"]=reservedinfo(highlight_keyword,TAN);
  reserved["tanh"]=reservedinfo(highlight_keyword,TANH);
  reserved["tgv"]=reservedinfo(highlight_parameter,TGV);
  reserved["thetamax"]=reservedinfo(highlight_parameter,THETAMAX);
  reserved["tol"]=reservedinfo(highlight_parameter,TOL);
  reserved["triangulate"]=reservedinfo(highlight_keyword,TRIANGULATE);
  reserved["true"]=reservedinfo(highlight_global,FF_TRUE);
  reserved["trunc"]=reservedinfo(highlight_keyword,TRUNC);
  reserved["value"]=reservedinfo(highlight_parameter,VALUE);
  reserved["varf"]=reservedinfo(highlight_type,VARF);
  reserved["varrow"]=reservedinfo(highlight_parameter,VARROW);
  reserved["vector"]=reservedinfo(highlight_parameter,VECTOR);
  reserved["veps"]=reservedinfo(highlight_parameter,VEPS);
  reserved["verbosity"]=reservedinfo(highlight_global,VERBOSITY);
  reserved["version"]=reservedinfo(highlight_global,VERSION);
  reserved["viso"]=reservedinfo(highlight_parameter,VISO);
  reserved["wait"]=reservedinfo(highlight_parameter,WAIT);
  reserved["while"]=reservedinfo(highlight_keyword,WHILE);
  reserved["x"]=reservedinfo(highlight_global,X);
  reserved["y"]=reservedinfo(highlight_global,Y);
  reserved["z"]=reservedinfo(highlight_global,Z);
  // ADD FH oct 2005 
  reserved["tolpivot"]=reservedinfo(highlight_parameter,TOLPIVOT);
  reserved["tolpivotsym"]=reservedinfo(highlight_parameter,TOLPIVOTSYM);
  reserved["l2"]=reservedinfo(highlight_global,L1);
  reserved["l1"]=reservedinfo(highlight_global,L2);
  reserved["linfty"]=reservedinfo(highlight_global,LINFTY);
//  reserved["diag"]=reservedinfo(highlight_global,DIAG);
 // reserved["coef"]=reservedinfo(highlight_global,COEF);
  reserved["nbcoef"]=reservedinfo(highlight_global,NBCOEF);
  
      reserved["qf1pE"]=reservedinfo(highlight_keyword,QF1PE);
      reserved["qf1pElump"]=reservedinfo(highlight_keyword,QF1PELUMP);
      reserved["qf1pT"]=reservedinfo(highlight_keyword,QF1PT);
      reserved["qf1pTlump"]=reservedinfo(highlight_keyword,QF1PTLUMP);
      reserved["qf2pE"]=reservedinfo(highlight_keyword,QF2PE);
      reserved["qf2pT"]=reservedinfo(highlight_keyword,QF2PT);
      reserved["qf2pT4P1"]=reservedinfo(highlight_keyword,QF2PT4P1);
      reserved["qf3pE"]=reservedinfo(highlight_keyword,QF3PE);
      reserved["qf5pT"]=reservedinfo(highlight_keyword,QF5PT);
      reserved["qf7pT"]=reservedinfo(highlight_keyword,QF7PT);
      reserved["qf9pT"]=reservedinfo(highlight_keyword,QF9PT);
  
}

int my_yyinput(char *buf,int maxsize){

  // Number of characters to read
  int n=maxsize;
  if(n>lexinput.size()-lexinputpos) n=lexinput.size()-lexinputpos;


  // Transfers characters into buf
  if(n>0){
    memcpy(buf,lexinput.data()+lexinputpos,n);
    lexinputpos+=n;
  }
  return n;
}

bool hl_error=false;
void colorize(const YYLTYPE loc,const char color){
  if(color==highlight_error) hl_error=true;

  // Find buffer location from line (always zero) and column
  int start=loc.first_column;
  int stop=loc.last_column;
  assert(stop<=highlight.size());

  highlight.replace(start,stop-start,stop-start,color);
}


// Location of last accepted token
int currentloc=0;
void recordlocation(YYLTYPE *loc,char *text){
  loc->first_column=currentloc;
  currentloc+=strlen(text);
  loc->last_column=currentloc;
}

extern int yyparse();
extern YYLTYPE yylloc;
int my_parse(){

  // Initialize highlight string with plain colors
  highlight=string(lexinput.size(),highlight_plain);

  // Initializes other static variables
  lexinputpos=0;
  currentloc=0;
  symbols.clear();
  words.resize(0);

  // Run the scan
  return yyparse();
}

// FreeFem++ allows any symbol to be defined any number of times
void newsymbol(const string n,const string type){
  symbols[n]=type;
}

// Just checks that the name is correctly defined
bool definedsymbol(const string n,const string type){
  map<string,string>::const_iterator i=symbols.find(n);
#ifndef NDEBUG
  cerr<<"definedsymbol: looking for "<<n<<" as a "<<type<<": ";
  if(i==symbols.end()) cerr<<"unknown"<<endl;
  else cerr<<"known as a "<<(*i).second<<endl;
#endif
  return (i!=symbols.end()) && ((*i).second==type);
}

int nametoken(const string n,YYSTYPE *yylval,const YYLTYPE loc){

  // Write this name down, and pass the corresponding index as yylval
  words.push_back(n);
  *yylval=words.size()-1;

  // Determines its dynamic type
  map<string,string>::const_iterator i=symbols.find(n);
  if(i==symbols.end()){
    // Any FreeFem++ "reserved" word can be hidden by a user-defined
    // variable.
    map<string,reservedinfo>::const_iterator j=reserved.find(n);
    if(j!=reserved.end()){
      colorize(loc,(*j).second.color);
      return (*j).second.lexcode;
    }
    else return NAME;
  }
  else if((*i).second=="variable") return USER_VARIABLE;
  else if((*i).second=="type"){
    colorize(loc,highlight_type);
    return USER_TYPE;
  }
  else if((*i).second=="problem"){
    colorize(loc,highlight_type);
    return USER_PROBLEM;
  }
  else if((*i).second=="function") return USER_FUNCTION;
  else if((*i).second=="varf"){
    colorize(loc,highlight_type);
    return USER_VARF;
  }
  else if((*i).second=="border") return USER_BORDER;

  else assert(false);

  return NAME;
}
