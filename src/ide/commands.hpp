// Commands available to server
// ----------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: commands.hpp,v 1.1 2005/04/05 12:33:49 lehyaric Exp $

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
