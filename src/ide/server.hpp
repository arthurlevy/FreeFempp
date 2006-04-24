// Server-side treatments
// ----------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: server.hpp,v 1.1 2005/04/05 12:33:49 lehyaric Exp $

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
