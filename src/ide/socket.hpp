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
// Communication between client and server through sockets
// -------------------------------------------------------

// Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
// $Id: socket.hpp,v 1.12 2006-09-29 20:30:15 hecht Exp $

#ifndef SOCKET_HPP
#define SOCKET_HPP

#include <signal.h> // for sigaction
#include <errno.h> // for sigaction
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#ifdef __MINGW32__
#include <windows.h>
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <sys/wait.h>
#endif

#include "tostring.hpp"

// To display more messages about data going through the socket on
// cerr
//#define SOCKET_DEBUG

// To transfer data as strings (slower, but ultra-portable)
//#define SOCKET_STRINGS

class Socket{
public:

  // IP Port designation.
  typedef unsigned short Port;

  // Socket communication channel descriptor.
#ifdef __MINGW32__
  typedef SOCKET descriptor;
#else
  typedef int descriptor;
#endif

  // Default constructor
  Socket();

  // Create a socket which opens the given TCP port to wait for calls.
  Socket(const Port port);

  // Create a socket that calls a given machine
  Socket(const string hostname,const Port port);

  // Create a socket object from an already-open system socket
  // descriptor and a host name.
  Socket(const descriptor d,const string hostname);

  // Returns a file descriptor which is bound to the given
  // port. Parameter = number of port to bind to.
  void Open(const Port port);

  // Initiate communication with a remote server. Parameters: port is
  // a well-known port on a remote server, hostname is a character
  // string giving the internet name of the remote machine. Returns
  // the descriptor used for communication.
  void Connect(const string hostname,const Port port);

  // Listen for a request on a specified port.

  // This function is used by the server to listen for communication.
  // It blocks until a remote request is received from the port bound
  // to the given descriptor. It returns a new socket descriptor
  // through which client and server can talk, while leaving the
  // initial descriptor free for further client connections.
  Socket Listen();

  // Stop socket communication
  void Close();

  string getremotehostname() const;

  // Retrieves information from an opened descriptor. Returns the
  // number of bytes read (0 represents the last reading of a closed
  // socket).
  int Read(char *buf,int size);

  // Buffered output
  void bufferedwrite(const char *buf,int size);
  void writeflush();

  // Manipulating one stringful of data
  string readuntil(const int length);
  string readstring();
  void writestring(const string s);

  // Have we reached the end of the file?
  bool ateof() const{return eof;}

private:

  // Socket addresses structure definition.
#ifdef __MINGW32__
  typedef SOCKADDR SockAddr;
  typedef SOCKADDR_IN SockAddrIn;
#else
  typedef struct sockaddr SockAddr;
  typedef struct sockaddr_in SockAddrIn;
#endif

  // Remote host information.
#ifdef __MINGW32__
  typedef HOSTENT HostEnt;
#else
  typedef struct hostent HostEnt;
#endif

  void IgnoreSigpipe();

  // System-dependant socket initialisation
  void Init();
  void CleanUp();

  string ErrorString();

  // Internal socket file descriptor
  descriptor socketfd;

  string remotehostname;

  // When the socket has been closed by someone
  bool eof;

  // Send information on an open socket descriptor. Returns the number
  // of bytes written.
  int Write(const char *buf,int size);
  string writebuffer;
};

// Exchanging various data types through a socket
template<class X> Socket &operator<<(Socket &S,const X x){
#ifdef SOCKET_STRINGS 
  // Just convert anything to a string. This is certainly not optimal,
  // but ultra-portable (as long as we choose the same kind of
  // characters at either end of the socket).
  S.writestring(tostring(x));
#else
  S.bufferedwrite((char*)&x,sizeof(X));
#endif
  return S;
}

template<class X> Socket &operator>>(Socket &S,X &x){
#ifdef SOCKET_STRINGS
  string s=S.readstring();
  istringstream i(s);
  i>>x;
#else
  S.Read((char*)&x,sizeof(X));
#endif
  return S;
}

// Explicit template instanciation for special type string (because it
// is of variable length).
template<> Socket &operator<<(Socket &S,const string x);
template<> Socket &operator>>(Socket &S,string &x);

// C strings

// At least when we're not in strings mode, we need to specify how to
// deal with the "char*" type, otherwise the default treatment would
// be to send the pointer value over!

// No writing, since we don't know the string size (avoid buffer
// overflows).
template<> Socket &operator<<(Socket &S,char* x);
template<> Socket &operator<<(Socket &S,const char* x);

// When not in debug mode, try and reduce the amount of data exchanged
// to a minimum.
#ifdef SOCKET_DEBUG
#define CMD_TYPE string
#define CMD_PROGRAM "program"
#define CMD_COLOR "color"
#define CMD_POINT "point"
#define CMD_LINE "line"
#define CMD_TEXT "text"
#define CMD_PEN "pen"
#define CMD_POLYGON "polygon"
#define CMD_CIRCLE "circle"
#define CMD_CLEAR "clear graphics"
#define CMD_FLUSH "flush graphics"
#define CMD_LINE_WIDTH "query line width"
#define CMD_LINE_HEIGHT "query line height"
#define CMD_PAUSE "pause"
#define CMD_STDOUT "stdout"
#define CMD_ERROR "error"
#define CMD_RESUME "resume"
#define CMD_SERVER_DONE "server done"
#else
#define CMD_TYPE unsigned char
#define CMD_PROGRAM 'a'
#define CMD_COLOR 'b'
#define CMD_POINT 'c'
#define CMD_LINE 'd'
#define CMD_TEXT 'e'
#define CMD_PEN 'f'
#define CMD_POLYGON 'g'
#define CMD_CIRCLE 'h'
#define CMD_CLEAR 'i'
#define CMD_FLUSH 'j'
#define CMD_LINE_WIDTH 'k'
#define CMD_LINE_HEIGHT 'l'
#define CMD_PAUSE 'm'
#define CMD_STDOUT 'n'
#define CMD_ERROR 'o'
#define CMD_RESUME 'p'
#define CMD_SERVER_DONE 'q'
#endif

// Socket through which the server sends all its graphical commands to
// the IDE client.
#ifdef SERVER
extern Socket *serversocket;
#endif

// Client-side sockets
#ifdef CLIENT

// Uses a specific socket to get all connection calls from the
// server(s). This strategy allows us to imagine several servers
// connecting to one IDE client in the future.
extern Socket *switchboard;

// Socket through which the client receives commands from the server.
extern Socket clientsocket;

// Opens a new socket to comunicate with the server
void newswitchboard();

#endif

// Arbitrarily chosen socket communication port, shared between client
// and server. todo: the end-user should be able to choose one
// depending on his local configuration.
extern Socket::Port commport;

#endif // SOCKET_HPP
