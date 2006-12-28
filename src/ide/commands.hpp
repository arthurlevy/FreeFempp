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
// Commands available to server
// ----------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: commands.hpp,v 1.2 2006-09-29 20:30:15 hecht Exp $

#ifndef COMMANDS_HPP
#define COMMANDS_HPP

#include <string>
using namespace std;

// May be called either directly if client and server are merged
// together, or through sockets if they are separated.

string cmd_program();
double cmd_line_width(const string s);
float cmd_line_height();
void cmd_clear();
void cmd_stdout(const string message);
void cmd_flush();
void cmd_pause();
void cmd_error(const string explanation);

#endif // COMMANDS_HPP
