EXTRA_DIST=launchff++.cpp
LDADD2 = $(ARPACKLIBS) $(UMFPACKLIBS)  $(BLASLIBS) $(G2CLIB)
# remark the libff.dll  was  splited in 6 because  ld trap
#  to much routine => memory fault in ld
#  but now I see thant the couple allocation/delete
#  must be make in same .dll file under windows
#  is impossible to manage with the template generation
#  so one .dll (this work with gcc version 3.4.4 (cygming special) (gdc 0.12, using dmd 0.125))
#   change the entry points mymain to mainff 
# to be compatibile with bamg. 
# 

FF_OBJ0 = CodeAlloc.o AFunction2.o  CheckPtr.o lex.o  global.o environment.o load.o 
FF_OBJ_AC = array_complex.o
FF_OBJ_AR = array_real.o
FF_OBJ_AL = array_long.o
FF_OBJ1 = AFunction.o   InitFunct.o strversionnumber.o  mt19937ar.o string_def.o 
FF_OBJ2 = BamgFreeFem.o  Drawing.o Element_P2h.o Element_RT.o FESpace.o FQuadTree.o InitFunct.o Mesh2.o MeshDraw.o MeshGeom.o MeshQuad.o MeshRead.o MeshWrite.o Meshio.o Metric.o QuadTree.o QuadratureFormular.o R2.o SetOfE4.o eigenvalue.o fem.o gibbs.o  lgalgo.o lgfem.o lgmat.o lgmesh.o  mshptg.o problem.o DefColor.o lgmesh3.o  P012_2d.o P012_3d.o  FESpacen.o ../libMesh/chrono.o  ../libMesh/libmesh3.o  ../libMesh/memory.o ../libMesh/eigenv.o  ../libMesh/libmesh5.o  Mesh1dn.o Mesh2dn.o Mesh3dn.o GQuadTree.o glumesh2D.o UMFPack_Solver.o  splitsimplex.o 
FF_OBJIDE = FreeFem___cs-cs.o FreeFem___cs-commands.o FreeFem___cs-draw.o FreeFem___cs-strversionnumber.o FreeFem___cs-socket.o FreeFem___cs-threads.o FreeFem___cs-hl_yacc.o FreeFem___cs-hl_lex.o FreeFem___cs-highlight.o FreeFem___cs-spawn.o FreeFem___cs-editor.o FreeFem___cs-server.o    windres.o

FFD_OBJ0 = $(patsubst %.o,../fflib/%.o,$(FF_OBJ0))
FFD_OBJ_AC = $(patsubst %.o,../fflib/%.o,$(FF_OBJ_AC))
FFD_OBJ_AL = $(patsubst %.o,../fflib/%.o,$(FF_OBJ_AL))
FFD_OBJ_AR = $(patsubst %.o,../fflib/%.o,$(FF_OBJ_AR))
FFD_OBJ1 = $(patsubst %.o,../fflib/%.o,$(FF_OBJ1))
FFD_OBJ2 = $(patsubst %.o,../fflib/%.o,$(FF_OBJ2))
FFD_OBJIDE = $(patsubst %.o,../ide/%.o,$(FF_OBJIDE))
FFD_OBJLMSH = $(patsubst %.o,../ide/%.o,$(FF_OBJLMSH))

LIBS_FF = libff.dll FreeFem++-api.dll




all-local: $(WIN32DLLTARGET) 
	-for i in $(LDADD2) ; do case $$i in  *.dll) echo cp -p $$i .; cp -p $$i . ;;	  esac ; done
	echo done
win32-dll-target: FreeFem++.exe FreeFem++-nw.exe  bamg.exe cvmsh2.exe  launchff++.exe ff-c++ $(MPIPROG)
	echo "on a fini"

libff.dll: $(FFD_OBJ0) $(FFD_OBJ_AR) $(FFD_OBJ_AC) $(FFD_OBJ_AL) $(FFD_OBJ1) $(FFD_OBJ2) ../lglib/lg.tab.o	\
		FreeFem++-api.dll
	$(CXX) $(GCCNOCYGWIN)  -shared  -Wl,--enable-auto-import $^  -o $@ $(LDADD2)


FreeFem++-nw.exe: ../nw/sansrgraph.o ../nw/parallelempi-empty.o ../lglib/mymain.o $(LIBS_FF)
	$(CXX)   $(GCCNOCYGWIN) libff.dll $^ -o $@  -lcomdlg32
FreeFem++.exe: ../nw/sansrgraph.o    ../nw/parallelempi-empty.o ../lglib/mymain.o $(LIBS_FF)
	$(CXX)   $(GCCNOCYGWIN) libff.dll $^ -o $@  -lcomdlg32
FreeFem++-mpi.exe:	../nw/sansrgraph.o ../mpi/parallelempi.o   ../lglib/mymain.o $(LIBS_FF)
	$(MPICXX)   $(GCCNOCYGWIN) libff.dll $^ -o $@  -lcomdlg32 $(MPI_LIB)
bamg.exe:  libff.dll $(LIBS_FF)
	$(CXX)   $(GCCNOCYGWIN) ../bamg/bamg.o  -Wl,--enable-auto-import $^ -o $@ 
cvmsh2.exe:  $(LIBS_FF)
	$(CXX)   $(GCCNOCYGWIN)  -Wl,--enable-auto-import ../bamg/cvmsh2.o  $^ -o $@ 
drawbdmesh.exe:../std/Pcrgraph.o  ../bamg/drawbdmesh.o $(LIBS_FF)
	$(CXX)   $(GCCNOCYGWIN) -mwindows  -Wl,--enable-auto-import  $^ -o $@ 
launchff++.exe:launchff++.cpp
	$(CXX) $(GCCNOCYGWIN) launchff++.cpp -o launchff++.exe

ff-c++:../../examples++-load/load.link.in
	../../config.status  --file=ff-c++:$<
	chmod a+x ff-c++
install-exec-local:: install-exec-local--$(WIN32DLLTARGET)

install-exec-local--win32-dll-target::
	$(INSTALL_SCRIPT) launchff++.exe FreeFem++.exe FreeFem++-nw.exe  bamg.exe cvmsh2.exe  ff-c++ $(MPIPROG) $(DESTDIR)${bindir} 
	$(INSTALL_SCRIPT) *.dll   $(DESTDIR)${bindir} 
install-exec-local--::


# FFCS: create a separate DLL for ffapi so that it can be changed when running FreeFem++ or FFCS
FreeFem++-api.dll:../nw/ffapi.o
	$(CXX) $(GCCNOCYGWIN) -shared -Wl,--enable-auto-import $< -o $@

# FFCS: automake does not clean the exes automatically because they are not built automatically.
clean-local::
	-rm *.exe
