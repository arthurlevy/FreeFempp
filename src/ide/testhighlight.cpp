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
// Color-coding for FreeFem++-cs editor window - test program
// Antoine Le Hyaric - LJLL Paris  - lehyaric@ann.jussieu.fr
// $Id: testhighlight.cpp,v 1.7 2007/04/20 15:18:59 hecht Exp $
using namespace std;
#include "highlight.hpp"
#include "hl_lexyacc.hpp"
#include <iostream>
#include <fstream>

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
