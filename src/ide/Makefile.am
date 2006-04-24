# Makefile using Automake + Autoconf
# ----------------------------------

# Antoine Le Hyaric - LJLL Paris 6 - lehyaric@ann.jussieu.fr - 21/10/04
# $Id: Makefile.am,v 1.31 2006-01-27 12:21:43 hecht Exp $

bin_PROGRAMS=$(IDEPROG)
EXTRA_PROGRAMS=FreeFem++-ide FreeFem++-cs FreeFem++-client FreeFem++-server

# To create statically linked executables (see configure.ac)
CXXLD=$(STATICTOOL) $(CXX)

# C++ defines:
# ------------

# CLIENT asks for client-side treatments
# SERVER asks for server-side treatments
# CLIENTSERVER both client and server in same executable
# NOSOCKETS no sockets (CLIENTSERVER case only)

# IDE where client and server are merged together (no sockets)
# ------------------------------------------------------------

FreeFem___ide_SOURCES=cs.cpp commands.hpp commands.cpp draw.hpp		\
draw.cpp ../fflib/strversionnumber.cpp windres.h images.hpp		\
threads.hpp threads.cpp tostring.hpp hl_yacc.h hl_yacc.y++ hl_lex.l++	\
highlight.hpp highlight.cpp spawn.hpp spawn.cpp editor.hpp editor.cpp	\
server.hpp server.cpp
FreeFem___ide_CXXFLAGS=`$(FLTK_CONFIG) --cxxflags` -DCLIENT -DSERVER	\
-DNOSOCKETS
FreeFem___ide_DEPENDENCIES=../fflib/libff.a ../lglib/liblg.a
FreeFem___ide_LDADD=../lglib/liblg.a ../fflib/libff.a	\
@UMFPACKLIB@ @ARPACKLIB@ @BLASLIB@

# Rewrites the automake rule building the IDE client, to add necessary
# resources under MacOS.

# Automake does not want to see "fltk-config --ldflags" in *_LDADD, so
# we need to evaluate this separately

FreeFem++-ide$(EXEEXT): \
		$(FreeFem___ide_OBJECTS) $(FreeFem___ide_DEPENDENCIES) \
		$(WINDRESOBJ)
	@rm -f FreeFem++-ide$(EXEEXT)
	$(CXXLINK) $(FreeFem___ide_LDFLAGS) $(FreeFem___ide_OBJECTS)	 \
		$(WINDRESOBJ)						 \
		$(FreeFem___ide_LDADD) $(LIBS) `$(FLTK_CONFIG) --ldflags` \
		$(IDE_LIBS)
	$(FLTK_CONFIG) --post FreeFem++-ide$(EXEEXT)

# client (IDE)
# ------------

# Integrated Development Environment, client/server version. Separate
# client and server compilation to be able to compile them on
# different architectures.

BUILT_SOURCES=hl_yacc.h
AM_YFLAGS=-d
FreeFem___client_SOURCES=cs.cpp commands.hpp commands.cpp draw.hpp	\
draw.cpp ../fflib/strversionnumber.cpp windres.h images.hpp socket.hpp	\
socket.cpp threads.hpp threads.cpp tostring.hpp hl_yacc.h hl_yacc.y++	\
hl_lex.l++ hl_lexyacc.hpp highlight.hpp highlight.cpp spawn.hpp		\
spawn.cpp editor.hpp editor.cpp
FreeFem___client_CXXFLAGS=`$(FLTK_CONFIG) --cxxflags` -DCLIENT
EXTRA_DIST=windres.rc testhighlight.sh logo2.ico

# Rewrites the automake rule building the IDE client, to add necessary
# resources under MacOS.

# Automake does not want to see "fltk-config --ldflags" in *_LDADD, so
# we need to evaluate this separately

FreeFem++-client$(EXEEXT): \
		$(FreeFem___client_OBJECTS) $(FreeFem___client_DEPENDENCIES) \
		$(WINDRESOBJ)
	@rm -f FreeFem++-client$(EXEEXT)
	$(CXXLINK) $(FreeFem___client_LDFLAGS)				     \
		$(FreeFem___client_OBJECTS)				     \
		$(WINDRESOBJ)						     \
		`$(FLTK_CONFIG) --ldflags` $(FreeFem___client_LDADD) $(LIBS) \
		$(IDE_LIBS)
	$(FLTK_CONFIG) --post FreeFem++-client$(EXEEXT)

# Microsoft Windows resources
windres.o: windres.rc
	windres $< $@

# server (FreeFEM++)
# ------------------

FreeFem___server_SOURCES=cs.cpp draw.hpp draw.cpp socket.hpp	\
socket.cpp tostring.hpp server.hpp server.cpp
FreeFem___server_CXXFLAGS=-DSERVER
FreeFem___server_DEPENDENCIES=../fflib/libff.a ../lglib/liblg.a
FreeFem___server_LDADD=../lglib/liblg.a ../fflib/libff.a	\
@UMFPACKLIB@ @ARPACKLIB@ @BLASLIB@

# Test program for color-coding in editor window (with YACC debug option)
# -----------------------------------------------------------------------

noinst_PROGRAMS=testhighlight
testhighlight_SOURCES= hl_yacc.y++ hl_lex.l++ highlight.hpp	\
highlight.cpp testhighlight.cpp
testhighlight_CXXFLAGS=-DYYDEBUG=1
TESTS=$(IDE_TESTS)

# Client+server together
# ----------------------

# Client and server in the same executable, to make sure that we can
# always find the server program from the client, even through
# symbolic links.

FreeFem___cs_SOURCES=cs.cpp commands.hpp commands.cpp draw.hpp		\
draw.cpp ../fflib/strversionnumber.cpp windres.h images.hpp socket.hpp	\
socket.cpp threads.hpp threads.cpp tostring.hpp hl_yacc.h hl_yacc.y++	\
hl_lex.l++ highlight.hpp highlight.cpp spawn.hpp spawn.cpp editor.hpp	\
editor.cpp server.hpp server.cpp
FreeFem___cs_CXXFLAGS=`$(FLTK_CONFIG) --cxxflags` -DCLIENT -DSERVER	\
-DCLIENTSERVER
FreeFem___cs_DEPENDENCIES=../fflib/libff.a ../lglib/liblg.a
FreeFem___cs_LDADD=../lglib/liblg.a ../fflib/libff.a	\
@UMFPACKLIB@ @ARPACKLIB@ @BLASLIB@

# Rewrites the automake rule building the IDE client, to add necessary
# resources under MacOS.

# Automake does not want to see "fltk-config --ldflags" in *_LDADD, so
# we need to evaluate this separately

FreeFem++-cs$(EXEEXT): \
		$(FreeFem___cs_OBJECTS) $(FreeFem___cs_DEPENDENCIES) \
		$(WINDRESOBJ)
	@rm -f FreeFem++-cs$(EXEEXT)
	$(CXXLINK) $(FreeFem___cs_LDFLAGS) $(FreeFem___cs_OBJECTS)	 \
		$(WINDRESOBJ)						 \
		$(FreeFem___cs_LDADD) $(LIBS) `$(FLTK_CONFIG) --ldflags` \
		$(IDE_LIBS)
	$(FLTK_CONFIG) --post FreeFem++-cs$(EXEEXT)
