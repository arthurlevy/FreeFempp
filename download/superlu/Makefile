# Downloading and compiling extra libraries
# -----------------------------------------
# $Id$

all-local: superlu

# Downloading and compiling Tetgen
# ------------------------------

# SUPERLU information
#http://crd.lbl.gov/~xiaoye/SuperLU/superlu_4.0.tar.gz
DIRPKG=../pkg
SRCDIR=SuperLU_4.3
PACKAGE=superlu_4.3.tar.gz
PACKAGE_PATH=$(DIRPKG)/$(PACKAGE)
SERVER=http://crd-legacy.lbl.gov/~xiaoye/SuperLU/
# http://crd-legacy.lbl.gov/~xiaoye/SuperLU/superlu_4.3.tar.gz
INSTALL=../..
SUPERLU_VERSION=4.3
SUPERLULIB=../$(INSTALL)/lib/libsuperlu_$(SUPERLU_VERSION).a
include  ff-FLAGS

### LAPACK 
LAAUX 	= lsame.o xerbla.o
SLASRC 	= slacon.o 
DLASRC	= dlacon.o
CLASRC	= clacon.o scsum1.o icmax1.o
ZLASRC	= zlacon.o dzsum1.o izmax1.o
SCLAUX 	= slamch.o
DZLAUX 	= dlamch.o

### SuperLU 
ALLAUX 	= superlu_timer.o util.o memory.o get_perm_c.o mmd.o \
	  sp_coletree.o sp_preorder.o sp_ienv.o relax_snode.o \
	  heap_relax_snode.o colamd.o

SLUSRC = \
	sgssv.o sgssvx.o \
	ssp_blas2.o ssp_blas3.o sgscon.o  \
	slangs.o sgsequ.o slaqgs.o spivotgrowth.o \
	sgsrfs.o sgstrf.o sgstrs.o scopy_to_ucol.o \
	ssnode_dfs.o ssnode_bmod.o \
	spanel_dfs.o spanel_bmod.o sreadhb.o \
	scolumn_dfs.o scolumn_bmod.o spivotL.o spruneL.o \
	smemory.o sutil.o smyblas2.o

DLUSRC = \
	dgssv.o dgssvx.o \
	dsp_blas2.o dsp_blas3.o dgscon.o \
	dlangs.o dgsequ.o dlaqgs.o dpivotgrowth.o  \
	dgsrfs.o dgstrf.o dgstrs.o dcopy_to_ucol.o \
	dsnode_dfs.o dsnode_bmod.o \
	dpanel_dfs.o dpanel_bmod.o dreadhb.o \
	dcolumn_dfs.o dcolumn_bmod.o dpivotL.o dpruneL.o \
	dmemory.o dutil.o dmyblas2.o ## dgstrsL.o dgstrsU.o

CLUSRC = \
	scomplex.o cgssv.o cgssvx.o csp_blas2.o csp_blas3.o cgscon.o \
	clangs.o cgsequ.o claqgs.o cpivotgrowth.o  \
	cgsrfs.o cgstrf.o cgstrs.o ccopy_to_ucol.o \
	csnode_dfs.o csnode_bmod.o \
	cpanel_dfs.o cpanel_bmod.o creadhb.o \
	ccolumn_dfs.o ccolumn_bmod.o cpivotL.o cpruneL.o \
	cmemory.o cutil.o cmyblas2.o

ZLUSRC = \
	dcomplex.o zgssv.o zgssvx.o zsp_blas2.o zsp_blas3.o zgscon.o \
	zlangs.o zgsequ.o zlaqgs.o zpivotgrowth.o  \
	zgsrfs.o zgstrf.o zgstrs.o zcopy_to_ucol.o \
	zsnode_dfs.o zsnode_bmod.o \
	zpanel_dfs.o zpanel_bmod.o zreadhb.o \
	zcolumn_dfs.o zcolumn_bmod.o zpivotL.o zpruneL.o \
	zmemory.o zutil.o zmyblas2.o


OBJ_SUPERLU = $(ALLAUX) $(LAAUX) \
 $(SLUSRC)  $(SLASRC) $(SCLAUX) \
 $(DLUSRC)  $(DLASRC) $(DZLAUX) \
 $(CLUSRC)  $(CLASRC) \
 $(ZLUSRC)  $(ZLASRC) 

superlu: FAIT

# FFCS - 18/6/12 - depend on SRCDIR to remake all when package version changes
FAIT:$(SRCDIR)	
	$(MAKE)  install WHERE
	touch FAIT


FAIRE:$(SRCDIR)
	cd $(SRCDIR)/SRC; $(MAKE) -f ../../ff-FLAGS  $(OBJ_SUPERLU)
	touch FAIRE

# FFCS - FAIRE and WHERE need to be done sequentially, even in a parallel build (corrected by Cico, 1/3/12)
install: FAIRE
	$(MAKE) WHERE
	cd $(SRCDIR)/SRC; $(AR) $(ARFLAGS) $(SUPERLULIB)  $(OBJ_SUPERLU)
	cd $(SRCDIR)/SRC; $(RANLIB) $(SUPERLULIB) 
	cp $(SRCDIR)/SRC/s*h  $(SRCDIR)/$(INSTALL)/include
WHERE:
	echo superlu LD -L@DIR@/lib -lsuperlu_$(SUPERLU_VERSION)  >$(SRCDIR)/$(INSTALL)/lib/WHERE.superlu
	echo superlu INCLUDE -I@DIR@/include >> $(SRCDIR)/$(INSTALL)/lib/WHERE.superlu




$(SRCDIR)/$(INSTALL): 
	mkdir $(SRCDIR)/$(INSTALL)


$(SRCDIR): $(PACKAGE_PATH)
	tar xvzf $(PACKAGE_PATH)
	touch $(SRCDIR)

$(PACKAGE_PATH):
	-mkdir $(DIRPKG);
	cd $(DIRPKG);$(WGET)  $(SERVER)$(PACKAGE)

# FFCS - make sure that all directories are cleaned. Thisis especially important under Windows because there is no
# compilation dependencies control there (see [[file:c:/cygwin/home/alh/ffcs/dist/configure.ac::dependency_tracking]])

clean:
	-rm -rf SuperLU_* ff-FLAGS
	-rm -rf FAIT FAIRE


# ALH - FFCS - 18/5/9 - FHecht says he forgot to add -fPIC for 64 bit platforms, so I add it myself here.
ff-FLAGS: ../Makefile  Makefile 
	grep '^CXX *=' ../Makefile >>$@
	grep '^CC *=' ../Makefile >>$@
	grep '^CFLAGS *=' ../Makefile|sed 's/$$/ -fPIC/' >>$@
	grep '^BLAS[A-Z ]*='  ../Makefile|grep =  >>$@
	grep '^AR *='  ../Makefile|grep =  >>$@
	grep '^ARFLAGS *='  ../Makefile|grep =  >>$@
	grep '^RANLIB *='    ../Makefile|grep =  >>$@
	grep '^WGET *='    ../Makefile|grep =  >>$@

