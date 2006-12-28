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
// Server-side treatments
// ----------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: server.hpp,v 1.2 2006-09-29 20:30:15 hecht Exp $

#ifndef SERVER_HPP
#define SERVER_HPP

#include <string>
using namespace std;
#include "threads.hpp"

// Main server entry point, either through a thread, or through a new
// process.
int servermain(int argc,char *argv[]);

// If the server does not use sockets but runs in a separate thread,
// we need to define a communication agent to tell the client thread
// when the server is finished (if sockets are used, we simply send a
// CMD_SERVER_DONE message).
#ifdef NOSOCKETS
extern Semaphore freefemserverended;
#endif

#endif // SERVER_HPP
