# Makefile using Automake + Autoconf
# ----------------------------------
# $Id: Makefile.am,v 1.6 2004/12/02 10:40:45 lehyaric Exp $

# To create statically linked executables (see configure.ac)
CXXLD=$(STATICTOOL) $(CXX)

bin_PROGRAMS=$(X11PROG)
EXTRA_PROGRAMS=FreeFem++-x11
FreeFem___x11_SOURCES=../Graphics/Xrgraph.cpp
FreeFem___x11_DEPENDENCIES=../fflib/libff.a ../lglib/liblg.a
LDADD=../lglib/liblg.a ../fflib/libff.a @UMFPACKLIB@ @ARPACKLIB@ @BLASLIB@
