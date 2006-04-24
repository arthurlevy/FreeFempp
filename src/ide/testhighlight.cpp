// Color-coding for FreeFem++-cs editor window - test program
// Antoine Le Hyaric - LJLL Paris  - lehyaric@ann.jussieu.fr
// $Id: testhighlight.cpp,v 1.5 2005-12-09 09:20:35 lehyaric Exp $

#include <iostream>
#include <fstream>
using namespace std;
#include "highlight.hpp"
#include "hl_lexyacc.hpp"
extern int yydebug;

// Just prints out the color codes
int main(int argc,char *argv[]){
  yydebug=1;
  inithighlightparser();

  // Read the file to highlight from a file
  if(argc!=2){
    cout<<"file?"<<endl;
    return 1;
  }
  ifstream in(argv[1]);
  string line;
  while(!in.eof()){
    getline(in,line,'\n');
    lexinput+=line+"\n";
  }
  in.close();

#if !defined(__MINGW32__)
  // When not under plain Microsoft Windows (i.e. Mingw, not Cygwin),
  // FLTK does not understand Windows CRLF codes. So we need to
  // replace them with one regular LF.
  int i=0;
  while(i<lexinput.length()){
    if(lexinput[i]=='\r') lexinput.erase(i,1);
    else i++;
  }
#endif

  cout<<"Initial file is:"<<endl
      <<lexinput<<endl;

  my_parse();

  cout<<"Highlight string is:"<<endl;
  for(int i=0;i<lexinput.size();i++){
    if(highlight.size()>i) cout<<highlight[i];
    else cout<<" ";
    cout<<lexinput[i];
  }

  // Error checking procedure for regression tests (see
  // testhighlight.sh).
  if(hl_error){
    cout<<"testhighlight: "<<argv[1]<<" produced an error"<<endl;
    exit(1);
  }

  return 0;
}
