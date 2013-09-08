#include "config-wrapper.h"
#include "strversionnumber.hpp"
#include <cstdlib>
using namespace std;
#define TOSTRING1(i) #i
#define TOSTRING(i) TOSTRING1(i)

//#include <sstream>
#include <cstdio>
using namespace std;

double VersionNumber(){
  return VersionFreeFempp;
}

string StrVersionNumber(){
//  std::ostringstream buffer;
//  buffer.precision(8);
//  buffer<<VersionNumber();
  static char buffer[100];
  sprintf(buffer," %9f (date Κυρ 08 Σεπ 2013 11:04:19 μμ EEST)",VersionNumber());
  return buffer; //.str()+" (date Κυρ 08 Σεπ 2013 11:04:19 μμ EEST)" ;
}
