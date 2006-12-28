# Makefile using Automake + Autoconf
# ----------------------------------
# $Id: Makefile.am,v 1.6 2004-12-01 17:10:45 lehyaric Exp $

# To create statically linked executables (see configure.ac)
CXXLD=$(STATICTOOL) $(CXX)

bin_PROGRAMS=$(GLXPROG)
EXTRA_PROGRAMS=FreeFem++-glx
FreeFem___glx_SOURCES=../Graphics/xglrgraf.cpp
FreeFem___glx_DEPENDENCIES=../fflib/libff.a ../lglib/liblg.a
LDADD=../lglib/liblg.a ../fflib/libff.a @UMFPACKLIB@ @ARPACKLIB@	\
	@BLASLIB@ -lGLU -lGL @X11_LIBS@
INCLUDES=-I../fflib
