// Color-coding for FreeFem++-cs editor window
// Antoine Le Hyaric - LJLL Paris  - lehyaric@ann.jussieu.fr
// $Id: highlight.hpp,v 1.5 2005/02/22 16:37:17 lehyaric Exp $

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
