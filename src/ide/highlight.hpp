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
// $Id: highlight.hpp,v 1.6 2006-09-29 20:30:15 hecht Exp $

#ifndef HIGHLIGHT_HPP
#define HIGHLIGHT_HPP

#include <string>
#include <vector>
using namespace std;

void inithighlightparser();
int my_parse();

// Final result: a string containing highlight codes
extern string highlight;

// Highlight codes
const char highlight_plain='A';
const char highlight_comment='B';
const char highlight_macro='C';
const char highlight_string='D';
const char highlight_parameter='E';
const char highlight_type='F';
const char highlight_keyword='G';
const char highlight_global='H';
const char highlight_error='I';

// Read from a string rather than from a file
extern string lexinput;

#endif // HIGHLIGHT_HPP
