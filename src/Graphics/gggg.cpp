// -*- Mode : c++ -*-
//
// SUMMARY  :      
// USAGE    :        
// ORG      : 
// AUTHOR   : Frederic Hecht
// E-MAIL   : hecht@ann.jussieu.fr
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
#include "config-wrapper.h"

#include <cstdio>
#include <complex>
#include <queue>
#include <error.hpp>
#include "environment.hpp"

#define  FF_GRAPH_PTR_DCL
#include "rgraph.hpp"

void ShowDebugStack(){}

 long verbosity = 1;
 long searchMethod=0; // = 9999; //pichon //PROBABLY BUG : can't compile without it
 FILE *ThePlotStream=0; //  Add for new plot. FH oct 2008

 
 int TheCurrentLine=-1; // unset: by default
 long mpisize=0,mpirank=0;

bool showCPU= false;


//  add F. Hecht 
EnvironmentData  ffenvironment;


