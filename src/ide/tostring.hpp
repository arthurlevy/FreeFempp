// Converting anything into a printable string
// -------------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: tostring.hpp,v 1.3 2005/10/20 14:22:05 lehyaric Exp $

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
