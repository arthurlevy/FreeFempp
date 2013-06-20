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
  sprintf(buffer," %9f (date Jeu  6 jui 2013 20:58:44 CEST)",VersionNumber());
  return buffer; //.str()+" (date Jeu  6 jui 2013 20:58:44 CEST)" ;
}
