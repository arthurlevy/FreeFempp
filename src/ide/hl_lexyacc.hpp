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
// Color-coding for FreeFem++-cs editor window
// Antoine Le Hyaric - LJLL Paris  - lehyaric@ann.jussieu.fr
// $Id: hl_lexyacc.hpp,v 1.6 2006-09-29 20:30:15 hecht Exp $

// Information for Lex and Yacc that should not be included in final
// application because of potentially conflictual defines (see in
// hl_yacc.h)

#ifndef HL_LEXYACC_HPP
#define HL_LEXYACC_HPP

#include <map>
#include "hl_yacc.h"

// Detects when there has been an error
extern bool hl_error;

// Replace a string with a given color
void colorize(const YYLTYPE loc,const char color);

// Tracks location in input string
void recordlocation(YYLTYPE *loc,char *text);

// Checks that names are properly defined before they are used
void newsymbol(const string n,const string type);
bool definedsymbol(const string n,const string type);

// "reserved" FreeFem++ keywords. They can all be hidden by
// user-defined objects.
class reservedinfo{
public:
  reservedinfo():lexcode(0),color(0){}
  reservedinfo(const char c,const int i):lexcode(i),color(c){}
  int lexcode;
  char color;
};
extern map<string,reservedinfo> reserved;

// Table of all known user-defined names (since we need to keep
// YYSTYPE constructor-free).
extern vector<string> words;

// A user-defined name can be of several different types
int nametoken(const string n,YYSTYPE *yylval,const YYLTYPE loc);

#endif // HL_LEXYACC_HPP
