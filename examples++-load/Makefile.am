all-local: @LOAD_COMPILE@
TESTS=APk-AdaptEpsDeltaPk.edp APk-ExplicitPkTest.edp APk-FreeFemQA.edp APk-MetricPk.edp IPOTest.edp IpOptMinSurf.edp IpoptLap.edp IpoptMinSurfVol.edp IpoptVI.edp IpoptVI2.edp LapDG3.edp LapDG4.edp LapLNewSolver.edp LapMUMPS_seq.edp LapNewSolver.edp LapUmfpack64.edp LaplaceP3.edp LaplaceP4.edp LaplaceRT1.edp Leman-mesh.edp MetricKuate.edp NSP2BRP0.edp PARDISO.edp SuperLU.edp VarIneq2.edp  bilapMorley.edp bmo.edp buildlayermesh.edp checkglumeshcube.edp cmaes-VarIneq.edp cmaes-oven.edp convect_dervieux.edp convectchacon-3d.edp convectchacon.edp convexehull3d.edp dfft.edp ffnewuoa.edp ffrandom.edp funcTemplate.edp glumesh3D.edp gsl.edp  ilut.edp isoline.edp lame-TD-NSS.edp lap-solvers.edp lapack.edp layer.edp load.edp meditddm.edp metis.edp mshmet.edp myType.edp myfunction2.edp pipe.edp plot-fb-P3.edp plot-fb-P3dc.edp plot-fb-P4.edp plot-fb-P4dc.edp plotfb.edp ppm2rnm.edp provadxw.edp ref.edp refinesphere.edp  schwarz-nm.edp scotch.edp shell.edp splitedges.edp splitmesh3.edp splitmesh6.edp test-ElementMixte.edp testFE-P3.edp testFE-P3dc.edp testFE-P4.edp testFE-P4dc.edp testFE-PkEdge.edp testFE.edp testFEMorley.edp tetgencube.edp  tetgenholeregion_rugby.edp thresholdings.edp ttestio.edp
# all test can fail must but clean ????  FH... 
XFAIL_TESTS=$(TESTS)

LOG_DRIVER=$(SHELL) $(top_srcdir)/test-driver-ff
TESTS_ENVIRONMENT=TEST_FFPP=$(TEST_FFPP) FLAGS_FFPP=-nw

EXTRA_DIST= $(TESTS) all.edp makeref.edp regtests.edp \
ff-get-dep.in ff-pkg-download.in load.link.in  include.tar.gz \
 BernadiRaugel.cpp Morley.cpp dfft.cpp  \
 funcTemplate.cpp mat_dervieux.cpp mat_psi.cpp myfunction.cpp \
 mat_dervieux.cpp  funcTemplate.cpp \
 regtests.m4     addNewType.cpp \
  qf11to25.cpp  Element_P3.cpp  Element_P3.hpp  Element_P4.cpp  Element_P4.hpp \
  Element_P3dc.cpp  Element_P3dc.hpp Element_P4dc.cpp  Element_P4dc.hpp \
  Element_PkEdge.cpp \
  SuperLu.cpp  \
  NewSolver.cpp \
  splitmesh3.cpp    splitmesh6.cpp   \
  README_SuperLU \
  tetgen.cpp\
  msh3.cpp msh3.hpp\
  ffrandom.cpp   \
  medit.cpp  \
  bmo.cpp lgbmo.cpp bmo.hpp \
 fflapack.cpp	lapack.cpp	clapack.h  \
 fig.pgm lg.pgm ppm2rnm.cpp ppmimg.h   \
 DxWriter.cpp  metis.cpp pcm.cpp pcm.hpp pcm2rnm.cpp \
 UMFPACK64.cpp iovtk.cpp gmsh.cpp MetricKuate.cpp  \
 ffnewuoa.cpp		newuoa.f Element_P1dc1.cpp ilut.cpp  \
 freeyams.cpp mmg3d-v4.0.cpp  mshmet.cpp \
 BinaryIO.cpp	gsl.cpp   gsl.awk ff_gsl_awk.hpp gsl.idp isolineP1.cpp isoline.cpp lg.pgm  \
 thresholdings.cpp	 \
 VTK_writer_3d.cpp VTK_writer.cpp splitedges.cpp  \
 Element_Mixte.cpp    \
 myfunction2.cpp   \
 cmaes.cpp \
 cmaes.h cmaes_interface.h ff-cmaes.cpp \
 ff-NLopt.cpp \
 MetricPk.cpp GeometryQA.cpp  FreeFemQA.cpp BasicMath.h  TensorK.hpp  Geometry.hpp  \
 RZ.h SortedList.h ExampleMetrics.h  \
 cube.msh  \
 MUMPS_seq.cpp \
 ff-Ipopt.cpp \
 scotch.cpp    shell.cpp \
 pipe.cpp pstream.h  \
 symmetrizeCSR.cpp \
 dmatrix.hpp PARDISO.cpp             \
 ch.pts  

LIST_COMPILE=myfunction.$(DYLIB_SUFFIX)  BernadiRaugel.$(DYLIB_SUFFIX) \
         Morley.$(DYLIB_SUFFIX) funcTemplate.$(DYLIB_SUFFIX) addNewType.$(DYLIB_SUFFIX) \
         qf11to25.$(DYLIB_SUFFIX)  Element_P3.$(DYLIB_SUFFIX)    Element_P4.$(DYLIB_SUFFIX)  \
	 Element_P3dc.$(DYLIB_SUFFIX)    Element_P4dc.$(DYLIB_SUFFIX) 	\
	 Element_PkEdge.$(DYLIB_SUFFIX)  msh3.$(DYLIB_SUFFIX) \
	splitmesh3.$(DYLIB_SUFFIX)  splitmesh6.$(DYLIB_SUFFIX) \
	ffrandom.$(DYLIB_SUFFIX)  \
	medit.$(DYLIB_SUFFIX)  \
	mat_dervieux.$(DYLIB_SUFFIX) lgbmo.$(DYLIB_SUFFIX) mat_psi.$(DYLIB_SUFFIX)\
	ppm2rnm.$(DYLIB_SUFFIX) DxWriter.$(DYLIB_SUFFIX) \
	pcm2rnm.$(DYLIB_SUFFIX) $(DYLIB_OTHER_COMPILE)  \
	iovtk.$(DYLIB_SUFFIX) 	 gmsh.$(DYLIB_SUFFIX) MetricKuate.$(DYLIB_SUFFIX) \
	Element_P1dc1.$(DYLIB_SUFFIX) BinaryIO.$(DYLIB_SUFFIX) \
        isolineP1.$(DYLIB_SUFFIX) isoline.$(DYLIB_SUFFIX)  thresholdings.$(DYLIB_SUFFIX) \
        VTK_writer_3d.$(DYLIB_SUFFIX)  VTK_writer.$(DYLIB_SUFFIX) \
	splitedges.$(DYLIB_SUFFIX) Element_Mixte.$(DYLIB_SUFFIX) \
	myfunction2.$(DYLIB_SUFFIX) \
	MetricPk.$(DYLIB_SUFFIX) FreeFemQA.$(DYLIB_SUFFIX) shell.$(DYLIB_SUFFIX) \
	@TOOL_DYLIB_pipe@ symmetrizeCSR.$(DYLIB_SUFFIX) 

# FFCS - some libraries are skipped because the corresponding tool is deactivated.

LIST_COMPILE_PKG=tetgen.$(DYLIB_SUFFIX) @TOOL_DYLIB_superlu@ dfft.$(DYLIB_SUFFIX) @TOOL_DYLIB_metis@		\
	@TOOL_DYLIB_umfpack@ NewSolver.$(DYLIB_SUFFIX) @TOOL_DYLIB_lapack@ @TOOL_DYLIB_fflapack@		\
	ffnewuoa.$(DYLIB_SUFFIX) ilut.$(DYLIB_SUFFIX) @TOOL_DYLIB_yams@ @TOOL_DYLIB_mmg3d@ @TOOL_DYLIB_mshmet@	\
	@TOOL_DYLIB_gsl@ @TOOL_DYLIB_mumps_seq@ @TOOL_DYLIB_ipopt@ @TOOL_DYLIB_nlopt@ ff-cmaes.$(DYLIB_SUFFIX)	\
	@TOOL_DYLIB_scotch@ @TOOL_DYLIB_pardiso@

bin_PROGRAMS=

# FFCS parallel make: some targets need to be built first, sequentially

load_compile: ff-c++ WHERE_LIBRARY-download include.done freefem++.pref
#
# max_load
	-rm "Missing-plugins-$(DYLIB_SUFFIX).log" 2>/dev/null
	$(MAKE) $(AM_MAKEFLAGS) $(LIST_COMPILE) $(LIST_COMPILE_PKG)
	@if test -f Missing-plugins-$(DYLIB_SUFFIX).log ; then cat Missing-plugins-$(DYLIB_SUFFIX).log; fi; exit 0 
	@echo Warning missing plugin: `for i in $(LIST_COMPILE) $(LIST_COMPILE_PKG); do if test ! -s $i ; then j=1; echo "$i," ;fi; done`
	echo " finish build list $(DYLIB_SUFFIX)"

.cpp.$(DYLIB_SUFFIX): ff-c++
	 ./ff-c++ -auto $< 

# FFCS - 26/10/11 - Unpacking include.tar.gz is very often buggy under Cygwin (softlinks are randomly replaced with
# empty files without any access right). So just replace the whole thing with a plain copy.

if ENABLE_FFCS
allheaders=../src/fflib/AddNewFE.h ../src/fflib/AFunction_ext.hpp ../src/fflib/AFunction.hpp ../src/fflib/AnyType.hpp	\
	../src/fflib/array_init.hpp ../src/fflib/array_resize.hpp ../src/fflib/array_tlp.hpp				\
	../src/femlib/assertion.hpp ../src/femlib/BamgFreeFem.hpp ../src/Algo/BFGS.hpp ../src/Algo/BrentLS.hpp		\
	../src/Algo/CG.hpp ../src/femlib/CGNL.hpp ../src/fflib/CodeAlloc.hpp ../config.h ../config-wrapper.h		\
	../src/Algo/CubicLS.hpp ../src/Algo/defs.hpp ../src/femlib/DOperator.hpp ../src/libMesh/eigenv.h		\
	../src/fflib/endian.hpp ../src/fflib/environment.hpp ../src/fflib/error.hpp ../src/femlib/fem3.hpp		\
	../src/femlib/fem.hpp ../src/femlib/FESpace.hpp ../src/femlib/FESpacen.hpp ../src/fflib/ff++.hpp		\
	../src/fflib/ffstack.hpp ../src/femlib/FQuadTree.hpp ../src/femlib/GenericMesh.hpp				\
	../src/Graphics/getprog-unix.hpp ../src/Graphics/glrgraph.hpp ../src/femlib/gmres.hpp				\
	../src/femlib/GQuadTree.hpp ../src/femlib/HashTable.hpp ../src/femlib/HeapSort.hpp ../src/fflib/InitFunct.hpp	\
	../src/fflib/ffapi.hpp ../src/femlib/Label.hpp ../src/fflib/lex.hpp ../src/fflib/lgfem.hpp			\
	../src/fflib/lgmesh3.hpp ../src/fflib/lgsolver.hpp ../src/lglib/lg.tab.hpp ../src/femlib/libmesh5.h		\
	../src/Algo/LineSearch.hpp ../src/femlib/MatriceCreuse.hpp ../src/femlib/MatriceCreuse_tpl.hpp			\
	../src/femlib/Mesh1dn.hpp ../src/femlib/Mesh2dn.hpp ../src/bamglib/Mesh2.h ../src/femlib/Mesh3dn.hpp		\
	../src/bamglib/Meshio.h ../src/femlib/MeshPoint.hpp ../src/bamglib/meshtype.h ../src/bamglib/Metric.h		\
	../src/Graphics/mode_open.hpp ../src/Algo/NewtonRaphson.hpp ../src/Algo/NRJ.hpp ../src/fflib/Operator.hpp	\
	../src/Algo/Optima.hpp ../src/Algo/Param.hpp ../src/femlib/PkLagrange.hpp ../src/fflib/PlotStream.hpp		\
	../src/fflib/problem.hpp ../src/femlib/QuadratureFormular.hpp ../src/bamglib/QuadTree.h ../src/femlib/R1.hpp	\
	../src/bamglib/R2.h ../src/femlib/R2.hpp ../src/femlib/R3.hpp ../src/femlib/RefCounter.hpp			\
	../src/Graphics/rgraph.hpp ../src/femlib/RNM.hpp ../src/femlib/RNM_opc.hpp ../src/femlib/RNM_op.hpp		\
	../src/femlib/RNM_tpl.hpp ../src/Algo/RosenBrock.hpp ../src/fflib/Serialize.hpp ../src/bamglib/SetOfE4.h	\
	../src/fflib/showverb.hpp ../src/femlib/splitsimplex.hpp ../src/fflib/String.hpp				\
	../src/fflib/strversionnumber.hpp ../src/fflib/throwassert.hpp ../src/femlib/ufunction.hpp			\
	../src/fflib/versionnumber.hpp

include.done: $(allheaders)
	mkdir -p include
	cp $^ include
	touch $@

else
include.done: include.tar.gz
	rm -rf include 
	gunzip -c include.tar.gz| tar xvf -
	-rm -f include/._*
	touch $@
endif

clean-local::
	-rm -r include
	-rm include.done

Ref: makeref.edp
	../src/nw/FreeFem++-nw makeref.edp

makeref.edp: regtests.m4 ../regtests.m4
	m4 regtests.m4 > makeref.edp

all-local: all.edp regtests.edp load_compile

# FFCS - 27/2/13 - remove dependency on Makefile to avoid recompiling everything everytime something is changed in the
# configuration step

all.edp:
	@(echo "NoGraphicWindow=true;NoUseOfWait=true;int verbosityy=verbosity;"; \
	for i in *`ls *.edp|grep -v -E '^(all|regtests|makeref|ref)\.edp$$'` ; do  \
		echo ' cout << "--------- file : '$$i' --------------------------------------------------------" << endl;' ;\
		echo "verbosity=verbosityy;" ; \
		echo \{ include \"$$i\"\;\}\; ;\
		echo ' cout << "------------------------------------------------------------------------------ " << endl;' ;\
	done) > $@

# To check the scripts against their reference values
regtests.edp: regtests.m4 ../regtests.m4
	m4 -DASSERT regtests.m4 > regtests.edp

# FFCS - 27/2/13 - remove dependency on Makefile to avoid recompiling everything everytime something is changed in the
# configuration step

$(LIST_COMPILE):ff-c++ include.done

clean-local::
	-rm *.o *.$(DYLIB_SUFFIX) load.link WHERE_LIBRARY-download ff-get-dep ff-c++ ff-pkg-download \
	  $(LIST_COMPILE) $(LIST_COMPILE_PKG)  regtests.edp makeref.edp
	-rm -rf include include.done
ff-c++:load.link.in load.link WHERE_LIBRARY-download ff-get-dep ../config.status
	../config.status  --file=ff-c++:load.link.in
	chmod a+x ff-c++
load.link:load.link.in ../config.status
	../config.status  --file=load.link:load.link.in
	chmod a+x load.link
ff-pkg-download:ff-pkg-download.in ../config.status
	../config.status  --file=$@:$@.in
	chmod a+x $@
	cp $@ ../download/bin
ff-get-dep:ff-get-dep.in ../config.status
	../config.status  --file=$@:$@.in
	chmod a+x $@
	-if [ -d ../download/bin ] ;then cp $@ ../download/bin; fi
WHERE_LIBRARY-download:ff-pkg-download FORCE  WHERE_LIBRARY-config WHERE_LIBRARY
	@./ff-pkg-download >$@-new
	@diff $@-new $@  || (cp $@-new $@ ;touch WHERE_LIBRARY)
WHERE_LIBRARY:
	touch $@
FORCE: ;
freefem++.pref:
	echo loadpath = \"./\" >freefem++.pref
install-exec-local:: load_compile WHERE_LIBRARY
	$(mkinstalldirs) -m 755 $(DESTDIR)$(ff_prefix_dir)/lib
	$(mkinstalldirs) -m 755 $(DESTDIR)$(ff_prefix_dir)/include
	$(mkinstalldirs) -m 755 $(DESTDIR)$(ff_prefix_dir)/etc
	$(INSTALL_DATA)  clapack.h ppmimg.h  bmo.hpp msh3.hpp pcm.hpp  include/*   $(DESTDIR)$(ff_prefix_dir)/include
	$(INSTALL)  -m 555 $(LIST_COMPILE) $(DESTDIR)$(ff_prefix_dir)/lib
	$(INSTALL)  -m 555 WHERE_LIBRARY-config WHERE_LIBRARY  $(DESTDIR)$(ff_prefix_dir)/lib
	for i in  WHERE_LIBRARY-config WHERE_LIBRARY WHERE_LIBRARY-download; do \
	  sed <$$i >$(DESTDIR)$(ff_prefix_dir)/lib/$$i 's#$(abs_top_builddir)/download#$(ff_prefix_dir)#' ;\
	 done
	echo loadpath += \"./\"  >$(DESTDIR)$(ff_prefix_dir)/etc/freefem++.pref
	echo loadpath += \"$(ff_prefix_dir)/lib\"  >>$(DESTDIR)$(ff_prefix_dir)/etc/freefem++.pref
	echo includepath += \"$(ff_prefix_dir)/idp\"  >>$(DESTDIR)$(ff_prefix_dir)/etc/freefem++.pref
	$(INSTALL_SCRIPT) ff-c++  $(DESTDIR)${bindir}
	$(INSTALL_SCRIPT) ff-pkg-download  $(DESTDIR)${bindir}
	$(INSTALL_SCRIPT) ff-get-dep  $(DESTDIR)${bindir}
##	$(DESTDIR)${bindir}/ff-pkg-download $(DESTDIR) >$(DESTDIR)$(ff_prefix_dir)/lib/WHERE_LIBRARY-download
	-for i in $(LIST_COMPILE_PKG); do \
	 if [ -f $$i ] ; then 	$(INSTALL)  -m 555 $$i $(DESTDIR)$(ff_prefix_dir)/lib; fi; done




# FFCS: add tags for files that are not specified to automake by a SOURCE directive (this tags file is automatically
# taken into account by automake when it sees it).

TAGS:
	etags *.?pp
