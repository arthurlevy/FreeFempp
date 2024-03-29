# Downloading and compiling extra libraries
# -----------------------------------------

# $Id$
all-local: mshmet

include ff-flags

# Downloading and compiling mshmet
# -------------------------------
# 
DIRPKG= ../pkg
SRCDIR= ./mshmet$(mshmet_VERSION)
#-$(mshmet_VERSION)
PACKAGE=$(DIRPKG)/mshmet$(mshmet_VERSION).tgz
SERVER=http://www.ann.jussieu.fr/~frey/ftp/archives/
INSTALL=../..
mshmet_VERSION=.2012.04.25
FAIRE=$(SRCDIR)/FAIRE

# ---------------------- 
#     mshmetlib

MSHMET_DIR = $(abs_top_builddir)/download/mshmet/mshmet$(mshmet_VERSION)
MSHMET_SRCDIRNOLIB = $(MSHMET_DIR)/sources
MSHMET_SRCDIR = $(MSHMET_DIR)/sourceslib
MSHMET_OBJDIR = $(MSHMET_DIR)/objects

mshmet: $(FAIRE) 

$(FAIRE):$(SRCDIR)/FAIT
	$(MAKE) WHERE $(SRCDIR)/$(INSTALL)  
	touch $(FAIRE)

$(SRCDIR)/FAIT:$(SRCDIR)/tag-tar
	cd $(MSHMET_DIR); $(MAKE)
	touch $(SRCDIR)/FAIT

# FFCS - libMesh is also required by yams, so we move all the rules to [[file:../../../Makefile.am]]
install:$(SRCDIR)/FAIT
	cp $(MSHMET_SRCDIR)/mshmetlib.h  $(SRCDIR)/$(INSTALL)/include/mshmetlib.h
	cp $(MSHMET_OBJDIR)/libmshmet.a  $(SRCDIR)/$(INSTALL)/lib/libmshmet.a

# FFCS - simplify makefile structure for automatic rebuilds
WHERE:install
	echo mshmet  LD -L@DIR@/lib -lmshmet  >$(SRCDIR)/$(INSTALL)/lib/WHERE.mshmet
	echo mshmet INCLUDE -I@DIR@/include>> $(SRCDIR)/$(INSTALL)/lib/WHERE.mshmet


$(SRCDIR)/tag-tar: $(PACKAGE)
	-mkdir mshmet$(mshmet_VERSION)
	cd mshmet$(mshmet_VERSION); tar xvzf ../$(PACKAGE)
	-mkdir $(MSHMET_SRCDIR)
	cp $(MSHMET_SRCDIRNOLIB)/*.c $(MSHMET_SRCDIRNOLIB)/*.h $(MSHMET_SRCDIR)
	cp $(MSHMET_SRCDIRNOLIB)/compil.date $(MSHMET_SRCDIR)
	cp mshmetlib-internal.h mshmetlib.c mshmetlib.h $(MSHMET_SRCDIR)/
	cp ../../src/libMesh/chrono.h $(MSHMET_SRCDIR)
	rm $(MSHMET_SRCDIR)/mshmet.c
	rm $(MSHMET_SRCDIR)/chrono.c
	cp ../../src/libMesh/eigenv.c $(MSHMET_SRCDIR)
	cp Makefile-mshmet.inc $(MSHMET_DIR)/makefile
	cd $(MSHMET_SRCDIR); patch -p2 < ../../mshmet.2011.03.06.patch
#
#	Patch for i586 developed by John Hunt (14/2/13)
#
	cd $(MSHMET_SRCDIR); patch -p2 < ../../mshmet.2012.04.25_i586.patch
	touch $(SRCDIR)/tag-tar

$(PACKAGE):
	-mkdir $(DIRPKG);
	cd $(DIRPKG);$(WGET)   $(SERVER)/`basename $(PACKAGE)`

clean:
	-rm ff-flags
#	FFCS - make sure that all directories are cleaned. Thisis especially important under Windows because there is no
#	compilation dependencies control there (see
#	[[file:c:/cygwin/home/alh/ffcs/dist/configure.ac::dependency_tracking]])
	-rm -rf mshmet.????.??.??
	-rm FAIT $(FAIRE) 

ff-flags: ../Makefile 
	grep 'abs_top_builddir *=' ../Makefile >> ff-flags
	grep 'CC *=' ../Makefile >> ff-flags
	grep 'CFLAGS *=' ../Makefile >> ff-flags
	grep 'LDFLAGS *=' ../Makefile >> ff-flags
	grep 'AR *=' ../Makefile >> ff-flags
	grep 'ARFLAGS *=' ../Makefile >> ff-flags
	grep 'RANLIB *=' ../Makefile >> ff-flags
	grep 'WGET *=' ../Makefile >> ff-flags
	grep 'mshmet_VERSION *=' ./Makefile >> ff-flags


.PHONY: $(SRCDIR)/$(INSTALL)
