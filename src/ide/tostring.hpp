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
// Converting anything into a printable string
// -------------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: tostring.hpp,v 1.4 2006-09-29 20:30:15 hecht Exp $

#ifndef TOSTRING_HPP
#define TOSTRING_HPP

// Hack to avoid conflicts in Cygwin G++ (found by Yann Collette,
// 20/10/2005)
#undef min
#undef max

#include <string>
#include <sstream>
using namespace std;

template <typename anytype> std::string tostring(const anytype arg){
  std::ostringstream buffer;
  buffer << arg;
  return buffer.str();
}

#endif // TOSTRING_HPP
