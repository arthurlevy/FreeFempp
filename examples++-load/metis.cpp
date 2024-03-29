// SUMMARY  :   add interface with partionning library scotch 
// USAGE    : LGPL      
// ORG      : LJLL Universite Pierre et Marie Curie, Paris,  FRANCE 
// AUTHOR   : F. Hecht
// E-MAIL   : F. Hecht <hecht@ljll.math.upmc.fr>
//  date : 2009 ????

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

//   for automatic  compilation with ff-c++
//ff-c++-LIBRARY-dep:   metis
//ff-c++-cpp-dep: 
//  

#include <ff++.hpp>
#include <cmath>
typedef KNM<double> * pRnm;
typedef KN<double> * pRn;
typedef string * pstring;
extern "C" {
#include <metis.h>
}

#ifdef  METIS_VER_MAJOR 
//  METIS_PartMeshDual(&ne, &nn, elmnts, &etype, &numflag, &nparts, &edgecut, epart, npart);
extern "C" {
real_t libmetis__ComputeElementBalance(idx_t ne, idx_t nparts, idx_t *where); 
}
#else 
typedef idxtype idx_t ;
#endif
template<class Mesh,int NO>
KN<long> * partmetis(Stack s,KN<long> * const & part,Mesh * const & pTh,long const & lparts)
{
    ffassert(pTh);
    const Mesh & Th(*pTh);
    int nt=Th.nt,nv=Th.nv;
    int nve = Mesh::Rd::d+1;
    
    KN<idx_t> eptr(nt+1),elmnts(nve*nt), epart(nt), npart(nv);
    for(int k=0,i=0;k<nt;++k)
      {
	eptr[k]=i;
	for(int j=0;j<nve;j++)
	  elmnts[i++] = Th(k,j);
	eptr[k+1]=i;
      }
    int numflag=0;
    int nparts=lparts;
    int edgecut;
    int etype =nve-2; // triangle or tet .  change FH fevr 2010 
    idx_t ncommon = 1; 
#ifdef  METIS_VER_MAJOR 
    if(NO==0)
      METIS_PartMeshNodal(&nt, &nv, eptr, (idx_t *) elmnts,  0,0, &nparts, 0,0, &edgecut, (idx_t  *) epart, (idx_t  *) npart);
    else
      METIS_PartMeshDual(&nt, &nv, eptr, (idx_t *) elmnts , 0,0, &ncommon,  &nparts, 0,0, &edgecut, (idx_t  *) epart,(idx_t  *)  npart);
    if(verbosity)
      printf("  --metisOA: %d-way Edge-Cut: %7d, Balance: %5.2f Nodal=0/Dual %d\n", nparts, nve, libmetis__ComputeElementBalance(nt, nparts, epart),NO);
#else
    if(NO==0)
     METIS_PartMeshNodal(&nt, &nv, elmnts, &etype , &numflag, &nparts, &edgecut, epart, npart);
    else
     METIS_PartMeshDual(&nt, &nv, elmnts, &etype , &numflag, &nparts, &edgecut, epart, npart);
    if(verbosity)
      printf("  --metis: %d-way Edge-Cut: %7d, Balance: %5.2f Nodal=0/Dual %d\n", nparts, nve, ComputeElementBalance(nt, nparts, epart),NO);
#endif 
    part->resize(nt);
    *part=epart;
    return part;
}
KN<long> * partmetisd(Stack s,KN<long> * const & part,Mesh * const & pTh,long const & lparts)
{
    ffassert(pTh);
    const Mesh & Th(*pTh);
    int nt=Th.nt,nv=Th.nv;
    int nve = Mesh::Element::NbV;
    
    KN<idx_t> elmnts(nve*nt), epart(nt), npart(nv);
    for(int k=0,i=0;k<nt;++k)
	for(int j=0;j<nve;j++)
	    elmnts[i++] = Th(k,j);
    int numflag=0;
    int nparts=lparts;
    int edgecut;
    int etype =nve-2; // triangle
#ifdef  METIS_VER_MAJOR    
    printf("  %d-way Edge-Cut: %7d, Balance: %5.2f\n", nparts, nve, libmetis__ComputeElementBalance(nt, nparts, epart));
#else
    printf("  %d-way Edge-Cut: %7d, Balance: %5.2f\n", nparts, nve, ComputeElementBalance(nt, nparts, epart));
#endif
    part->resize(nt);
    *part=epart;
    return part;
}
class Init { public:
    Init();
};
// E_F_StackF0F0

LOADINIT(Init);
Init::Init(){
  if(verbosity && mpirank == 0) 
  cout << " lood: init metis  " << endl;
  Global.Add("metisnodal","(",new OneOperator3_<KN<long> *,KN<long> *,Mesh *,long , E_F_stackF0F0F0_<KN<long> *,KN<long> *,Mesh *,long> >(&partmetis<Mesh,0>));
  Global.Add("metisdual","(",new OneOperator3_<KN<long> *,KN<long> *,Mesh *,long , E_F_stackF0F0F0_<KN<long> *,KN<long> *,Mesh *,long> >(&partmetis<Mesh,1>));
    Global.Add("metisnodal","(",new OneOperator3_<KN<long> *,KN<long> *,Mesh3 *,long , E_F_stackF0F0F0_<KN<long> *,KN<long> *,Mesh3 *,long> >(&partmetis<Mesh3,0>));
    Global.Add("metisdual","(",new OneOperator3_<KN<long> *,KN<long> *,Mesh3 *,long , E_F_stackF0F0F0_<KN<long> *,KN<long> *,Mesh3 *,long> >(&partmetis<Mesh3,1>));
    
}
