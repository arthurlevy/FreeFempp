//
//  GeoDiff.h
//  FastMarching
//
//  Created by Jean-Marie Mirebeau on 21/10/11.
//  Copyright (c) 2011 UPMC. All rights reserved.
//

#ifndef FastMarching_GeoDiff_h
#define FastMarching_GeoDiff_h

#include "RZ.h"






class Plane {
public:
    const static int dim=2;
    typedef R2 Rd;
    typedef Z2 Zd;
    typedef sym2 symd;
    typedef Metric2 Metricd;
};


class Rectangle : Plane {
public:
    const int Card;
    const Z2 N;
    
    Rectangle(Z2 N_):N(N_),Card(N_.prod()){};
    
    bool inRange(int n){return 0<=n && n<=Card;}
    bool inRange(const Z2 &P){return 0<=P.x && P.x<N.x && 0<=P.y && P.y<N.y;}
    
    const Z2 operator [](int n){assert(inRange(n)); return Z2(n%N.x,n/N.x);}
    int operator [](const Z2 &P){assert(inRange(P)); return P.x+N.x*P.y;}
};

class Periodic_Rectangle : Rectangle {
public:
    static const int Boundary_Card = 0;
    //    Periodic_Rectangle(Z2 N_):Rectangle(N_){};

    int onBoundary(const Z2 &P){return 0;}
    const Z2 boundary(int n){assert(false); return Z2();}
};

class Bounded_Rectangle : Rectangle {
    const int Boundary_Card;
    
    Bounded_Rectangle(Z2 N_):Rectangle(N_),Boundary_Card(2*(N_.x+N_.y-2)){}
    
    int onBoundary(const Z2 &P);
    bool inBoundary_Range(int n){return 0<=n && n<=Boundary_Card;}
    const Z2 boundary(int n);
    
};

int Bounded_Rectangle::onBoundary(const Z2 &P){
    if(P.x*(N.x-P.x)*P.y*(N.y-P.y)) return 0; // NO !! -1
    if(P.y==0 && P.x<N.x-1) return 1;
    if(P.x==0) return 4;
    if(P.y==N.y-1) return 3;
    if(P.x==N.x-1) return 2;
    assert(false); return 0;
}

const Z2 Bounded_Rectangle::boundary(int n){
    assert(inBoundary_Range(n));
    if(n<N.x-1) return Z2(n,0);
    if(n<N.x+N.y-2) return Z2(N.x-1,n-N.x+1);
    if(n<2*N.x+N.y-3) return Z2(2*N.x+N.y-2-n,N.y-1);
    if(n<2*N.x+2*N.y-4) return Z2(0,2*N.x+2*N.y-4-n);
    assert(false); return Z2();
}
//template<int Nx, int Ny> const typename Rectangle<Nx,Ny>::Zd Rectangle<Nx,Ny>::N = Zd(Nx,Ny);

template<class Domain> class FMTest {
public:
    const Domain &domain;
    FMTest(const Domain &domain_):domain(domain_){};
    
};

class Space {
public:
    const static int dim=3;
    typedef R3 Rd;
    typedef Z3 Zd;
    typedef sym3 symd;
    typedef Metric3 Metricd;
};

class Brick : Space {
    
};

//template<Z3 N> class Tile {
    
//};

#endif
