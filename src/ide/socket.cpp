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
// $Id: socket.cpp,v 1.12 2006-09-29 20:30:15 hecht Exp $

#include <iostream>
#include <cassert>
#include "socket.hpp"
using namespace std;

// Default constructor
Socket::Socket(){
  socketfd=0;
  remotehostname="";
  eof=true;
}

// Create a socket which opens the given TCP port to wait for calls.
Socket::Socket(const Port port){
  Init();
  Open(port);
  eof=false;
}

// Create a socket that calls a given machine
Socket::Socket(const string hostname,const Port port){
  Init();
  Connect(hostname,port);
  eof=false;
}

// Create a socket object from an already-open system socket
// descriptor and a host name.
Socket::Socket(const descriptor d,const string hostname){
  socketfd=d;
  remotehostname=hostname;
  eof=false;
}

void Socket::IgnoreSigpipe(){
#ifndef __MINGW32__
  struct sigaction act;
  if(sigaction(SIGPIPE,(struct sigaction *)NULL,&act) < 0)
    throw string("Socket::ignore_sigpipe: sigaction error 1");
  if(act.sa_handler == SIG_DFL){
    act.sa_handler = SIG_IGN;
    if(sigaction(SIGPIPE,&act,(struct sigaction *)NULL) < 0)
      throw string("Socket::ignore_sigpipe: sigaction error 2");
  }
#endif
}

void Socket::Init(){
#ifdef __MINGW32__

  // (Code fragment found in WSAStartup() manual page in Microsoft
  // Visual C++).

  WORD wVersionRequested;
  WSADATA wsaData;
  int err;
 
  wVersionRequested = MAKEWORD(2,0);
 
  err = WSAStartup( wVersionRequested, &wsaData );

  // Cannot call WSAGetLastError() since DLL is not initialized yet.
  if(err != 0) throw string("Socket::Init: ")+ErrorString();
 
  // Confirm that the WinSock DLL supports 2.0.  Note that if the DLL
  // supports versions greater than 2.0 in addition to 2.0, it will
  // still return 2.0 in wVersion since that is the version we
  // requested.
 
  if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 0){
    WSACleanup();
    throw string("Socket::Init: Incompatible versions");
  }
 
  // The WinSock DLL is acceptable. Proceed.

#endif // __MINGW32__
}

void Socket::CleanUp(){
#ifdef __MINGW32__
  // Microsoft manual pages say WSAGetLastError() can be used.
  if(WSACleanup()==SOCKET_ERROR)
    throw string("Socket::CleanUp: ")+ErrorString();
#endif
}

void Socket::Open(const Port port){
  IgnoreSigpipe();

  socketfd=socket(AF_INET,SOCK_STREAM,0);
  if(socketfd<0) throw string("Socket::open::socket: ")+ErrorString();

  SockAddrIn server;
  server.sin_family = AF_INET;
  server.sin_addr.s_addr = INADDR_ANY;
  server.sin_port = htons((short)port);
  if(bind(socketfd,(SockAddr *)&server,sizeof(server)) < 0
     || listen(socketfd,SOMAXCONN) < 0)
    throw string("Socket::open::bind/listen: ")+ErrorString();
}

Socket Socket::Listen(){
  SockAddrIn net_client;
  descriptor d;

#ifdef __MINGW32__
  int len=sizeof(SockAddr);
  d=accept(socketfd,(SockAddr*)&net_client,&len);
#else
  socklen_t len=sizeof(SockAddr);
  while((d=accept(socketfd,(SockAddr*)&net_client,&len))<0
	&& errno == EINTR);
#endif
  if(d < 0) throw string("Socket::Listen: ")+ErrorString();

  string hostname;
  HostEnt *hostptr =
    gethostbyaddr((char*)&(net_client.sin_addr.s_addr),4,AF_INET);
  if(hostptr == NULL) hostname = "unknown";
  else hostname = hostptr->h_name;

  return Socket(d,hostname);
}

string Socket::getremotehostname() const{return remotehostname;}

void Socket::Connect(const string hostname,const Port port){
  IgnoreSigpipe();

  HostEnt *hp;

  if(!(hp = gethostbyname(hostname.c_str()))
     || (socketfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
    throw string("Socket::connect: ")+ErrorString();

  SockAddrIn server;
  memcpy((char*)&server.sin_addr,hp->h_addr_list[0],hp->h_length);
  server.sin_port = htons((short)port);
  server.sin_family= AF_INET;

  int retval;
#ifdef __MINGW32__
  retval=connect(socketfd,(SockAddr*)&server,sizeof(server));
#else
  while((retval = connect(socketfd,(SockAddr *)&server,sizeof(server))) < 0
	&& errno == EINTR);
#endif
  if(retval < 0) throw string("Socket::Connect: ")+ErrorString();
}

void Socket::Close(){
#ifdef __MINGW32__
#define SOCKET_CLOSE(x) closesocket(x)
#else
#define SOCKET_CLOSE(x) close(x)
#endif
  if(SOCKET_CLOSE(socketfd)<0)
    throw string("Socket::Close: ")+ErrorString();
  CleanUp();
}

int Socket::Read(char *buf,int size){
#ifdef SOCKET_DEBUG
  printf("Socket::Read: expecting %d bytes\n",size);

  // coherency checks (these are heuristic, they are only useful for
  // SOCKET_DEBUG)
  assert(size>0 && size<100000);
#endif

  int retval;
#ifdef __MINGW32__

  // This must be a blocking call! Otherwise this thread takes 100% of
  // processing power, leaving nothing to the server thread (or we
  // would have to increase the priority of the server, which is not
  // right if we want to have a responsive client).
  while((retval=recv(socketfd,buf,size,0))<0
	&& WSAGetLastError()==WSAEWOULDBLOCK) Yield();
#else
  while((retval = read(socketfd,buf,size))<0 && errno==EINTR);
#endif

  // Checks that everything went fine during the read
  if(retval<0) throw string("Socket::Read: ")+ErrorString();
  eof=retval==0;

  // Debug output
#ifdef SOCKET_DEBUG
  printf("Socket::Read: \"");
  int i;
  for(i=0;i<retval;i++){
#ifdef SOCKET_STRINGS
    printf("%c",buf[i]);
#else
    printf("%u ",buf[i]);
#endif
  }
  printf("\" length=%d\n",retval);
#endif

  return retval;
}

int Socket::Write(const char *buf,int size){
#ifdef SOCKET_DEBUG
  printf("Socket::Write: \"");
  int i;
  for(i=0;i<size;i++){
#ifdef SOCKET_STRINGS
    printf("%c",buf[i]);
#else
    printf("%u ",buf[i]);
#endif
  }
  printf("\" length=%d\n",size);
#endif

  int retval;
#ifdef __MINGW32__
  retval=send(socketfd,buf,size,0);
  if(retval==SOCKET_ERROR || retval!=size)
    throw string("Socket::Write: ")+ErrorString();
#else
  while((retval=send(socketfd,buf,size,0))<0 && errno==EINTR);
  if(retval<0) throw string("Socket::Write: ")+ErrorString();
#endif
  return retval;
}

// Uses unbuffered writes (for debugging)
//#define UNBUFFERED_WRITES

void Socket::bufferedwrite(const char *buf,int size){
#ifdef UNBUFFERED_WRITES
  Write(buf,size);
#else

  // Just stores it up until someone calls writeflush()
  writebuffer.append(buf,size);

  // Avoid sending too much data at any one time, to avoid any
  // indigestion in the socket.
  if(writebuffer.size()>200) writeflush();
#endif
}

void Socket::writeflush(){
#ifndef UNBUFFERED_WRITES
  Write(writebuffer.data(),writebuffer.size());
  writebuffer.resize(0);
#endif
}

string Socket::ErrorString(){
#ifdef __MINGW32__
  int e=WSAGetLastError();
  switch(e){
  case WSAEACCES:return "Permission denied";
  case WSAEADDRINUSE:return "Address already in use";
  case WSAEADDRNOTAVAIL:return "Cannot assign requested address";
  case WSAEAFNOSUPPORT:
    return "Address family not supported by protocol family";
  case WSAEALREADY:return "Operation already in progress";
  case WSAECONNABORTED:return "Software caused connection abort";
  case WSAECONNREFUSED:return "Connection refused";
  case WSAECONNRESET:return "Connection reset by peer";
  case WSAEDESTADDRREQ:return "Destination address required";
  case WSAEFAULT:return "Bad address)";
  case WSAEHOSTDOWN:return "Host is down";
  case WSAEHOSTUNREACH:return "No route to host";
  case WSAEINPROGRESS:return "Operation now in progress";
  case WSAEINTR:return "Interrupted function call";
  case WSAEINVAL:return "Invalid argument";
  case WSAEISCONN:return "Socket is already connected";
  case WSAEMFILE:return "Too many open files";
  case WSAEMSGSIZE:return "Message too long";
  case WSAENETDOWN:return "Network is down";
  case WSAENETRESET:return "Network dropped connection on reset";
  case WSAENETUNREACH:return "Network is unreachable";
  case WSAENOBUFS:return "No buffer space available";
  case WSAENOPROTOOPT:return "Bad protocol option";
  case WSAENOTCONN:return "Socket is not connected";
  case WSAENOTSOCK:return "Socket operation on non-socket";
  case WSAEOPNOTSUPP:return "Operation not supported";
  case WSAEPFNOSUPPORT:return "Protocol family not supported";
  case WSAEPROCLIM:return "Too many processes";
  case WSAEPROTONOSUPPORT:return "Protocol not supported";
  case WSAEPROTOTYPE:return "Protocol wrong type for socket";
  case WSAESHUTDOWN:return "Cannot send after socket shutdown";
  case WSAESOCKTNOSUPPORT:return "Socket type not supported";
  case WSAETIMEDOUT:return "Connection timed out";
  case WSAEWOULDBLOCK:return "Resource temporarily unavailable";
  case WSAHOST_NOT_FOUND:return "Host not found";
  case WSANOTINITIALISED:return "Successful WSAStartup not yet performed";
  case WSANO_DATA:return "Valid name, no data record of requested type";
  case WSANO_RECOVERY:return "This is a non-recoverable error";
  case WSASYSNOTREADY:return "Network subsystem is unavailable";
  case WSATRY_AGAIN:return "Non-authoritative host not found";
  case WSAVERNOTSUPPORTED:return "WINSOCK.DLL version out of range";
  case WSAEDISCON:return "Graceful shutdown in progress";
  default:return string("Unknown error (") + tostring(e) + ")";
  }

#else // __MINGW32__
  return strerror(errno);
#endif // __MINGW32__
}

void Socket::writestring(const string s){
#ifdef SOCKET_DEBUG
  printf("Socket::writestring: writing string \"%s\"\n",s.c_str());
#endif

  // Adds string length before the string itself.
  unsigned int size=s.size();
#ifdef SOCKET_STRINGS
  // We also transmit the length of the string as a string (of fixed
  // length) to make it totally portable.

  if(size>999999) throw string("Socket::writestring: string too long");
  char length[7];
  sprintf(length,"%06i",size);
  bufferedwrite(length,6);
#else // SOCKET_STRINGS
  bufferedwrite((char*)&size,sizeof(unsigned int));
#endif // SOCKET_STRINGS

  // Send the string itself
  bufferedwrite(s.data(),size);
}

string Socket::readuntil(const int length){
  string r;
#ifdef SOCKET_DEBUG
  printf("Socket::readuntil: expecting %d bytes\n",length);

  // coherency checks (these are heuristic, they are only useful for
  // SOCKET_DEBUG)
  assert(length>0 && length<100000);
#endif

  // Do we have enough data in the current line buffer? If not, we
  // need to get some more data from the socket.
  while(r.length()<length && !eof){
    const int bufsize=1024;
    char b[bufsize];
    int read;
    if(bufsize<length-r.length()) read=Read(b,bufsize);
    else read=Read(b,length-r.length());

    // Stack it into the buffer
    r.append(b,read);
  }

  if(r.size()>length) throw string("Socket::readuntil: indigestion");
  if(eof) throw string("Socket::readuntil: EOF");
  return r;
}

string Socket::readstring(){
  string buffer,r;
  unsigned int length;

  // Find out the length of the next bit
#ifdef SOCKET_STRINGS
  buffer=readuntil(6);
  if(!eof){

    // We need to use %u (= unsigned _decimal_ int) because %i would
    // think that the first '0' means its an octal number.
    sscanf(buffer.substr(0,6).c_str(),"%u",&length);
  }
#else
  Read((char*)&length,sizeof(unsigned int));
#endif

#ifdef SOCKET_DEBUG
  printf("Socket::readstring: have to read %d characters\n",length);
#endif

  // Get the next bit itself
  r=readuntil(length);

#ifdef SOCKET_DEBUG
  printf("Socket::readstring: read string \"%s\"\n",r.c_str());
#endif

  return r;
}

// Explicit template instanciation for special type string (which does
// not need converting before going through the socket).
template<> Socket &operator<<(Socket &S,const string x){
  S.writestring(x);
  return S;
}

template<> Socket &operator>>(Socket &S,string &x){
  x=S.readstring();
  return S;
}

// C strings. Just reverts back to the previous case (C++ strings).
template<> Socket &operator<<(Socket &S,char* x){
  string s=x;
  S.writestring(s);
  return S;
}
template<> Socket &operator<<(Socket &S,const char* x){
  string s=x;
  S.writestring(s);
  return S;
}

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
Socket *serversocket;
#endif

// Client-side sockets
#ifdef CLIENT

// Uses a specific socket to get all connection calls from the
// server(s). This strategy allows us to imagine several servers
// connecting to one IDE client in the future.
Socket *switchboard=NULL;

// Socket through which the client receives commands from the server.
Socket clientsocket;

#endif

// Arbitrarily chosen socket communication port, shared between client
// and server. todo: the end-user should be able to choose one
// depending on his local configuration.
Socket::Port commport;

#ifdef CLIENT

// Opens a new socket to comunicate with the server
void newswitchboard(){
  assert(switchboard==NULL);

  // Default TCP port to communicate with the server
  commport=34567;
  int portshift=0;

  // Opening a communication socket to listen to all future server
  // connections. When there is a problem, it could very well be due
  // to several IDEs running on the same machine for several different
  // users, or to a zombie staying in memory after a dirty crash. So
  // we need to try several different ports.
  bool portok=false;
  while(!portok && portshift<20){
    try{
      switchboard=new Socket(commport+portshift);
      portok=true;
    }
    catch(string explanation){
      cerr<<"Problem opening port "<<tostring(commport+portshift)<<": "
	  <<explanation<<endl;
      portshift++;
    }
  }

  // If we cannot communicate with the server, we can still open the
  // IDE to edit FreeFem++ files.
  if(portok) commport+=portshift;
  else{
    switchboard=NULL;
    throw string("No TCP port available for server communication");
  }
#ifndef NDEBUG
  cout<<"client: using port "<<tostring(commport)<<" for server communication"
      <<endl;
#endif
}

#endif // CLIENT
