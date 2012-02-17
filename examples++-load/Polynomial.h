//
//  Polynomial.h
//  DelaunayFlip
//
//  Created by Jean-Marie Mirebeau on 30/07/11.
//  Copyright 2011 UPMC. All rights reserved.
//

#ifndef Polynomial_h
#define Polynomial_h

#include "BasicMath.h"
#include "math.h"
#include "float.h"
#include "RZ.h"
#include <complex>

//Basic polynomial class, for low degrees. Root finding up to degree 4.

template<unsigned int deg, class ring> 
class Polynomial : vector_space<Polynomial<deg,ring>,double>, equality_comparable<Polynomial<deg,ring> >
//boost::additive<Polynomial<deg, ring>,
//boost::multiplicative<Polynomial<deg,ring>, ring,
//boost::equality_comparable<Polynomial<deg,ring>
//> > >
{
    ring coefs[deg+1];
public:
    //constructor
    Polynomial(){for(int i=0; i<=deg; i++) coefs[i]=0;}
    explicit Polynomial(const ring c[deg+1], bool timesBinomial=false); 
    
    //access to members
    ring & operator[](int pos)       {assert_msg(0<=pos && pos <=deg, "Polynomial::[] error : out of bounds"); return coefs[pos];}
    ring   operator[](int pos) const {assert_msg(0<=pos && pos <=deg, "Polynomial::[] error : out of bounds"); return coefs[pos];}
    unsigned int getDeg(){return deg;} //may not coincide with the actual degree of the polynomial
    int degree(){int i; for(i=deg; i>=0 && coefs[i]==0; --i) ; return i;} 
    int degree_inv(){int i; for(i=0; i<=deg; ++i) if(coefs[i]!=0) return i; return -1;} 
    const ring * getCoefs() const {return coefs;}
    ring * getCoefs(){return coefs;}
    
    //operators as a vector space over ring (field?)
    Polynomial &operator *=(ring r) {for(int i=0; i<=deg; i++) coefs[i]*=r; return *this;}
    Polynomial &operator /=(ring r) {assert_msg(r!=ring(0), "Polynomial:: division by zero"); return operator*=(ring(1)/r);}
    Polynomial &operator +=(const Polynomial &P){for(int i=0; i<=deg; ++i) coefs[i]+=P.coefs[i]; return *this;}
    Polynomial &operator -=(const Polynomial &P){for(int i=0; i<=deg; ++i) coefs[i]-=P.coefs[i]; return *this;}
    Polynomial  operator -() const {Polynomial P; return P-=*this;}
    bool operator==(const Polynomial &P) const {for(int i=0; i<=deg; ++i) if(coefs[i]!=P.coefs[i]) return false; return true;}
    
    //evaluation
    ring operator()(ring t) const {ring res=coefs[deg]; for(int i=deg-1; i>=0; --i) res=res*t+coefs[i]; return res;}
    ring deriv(ring t) const {ring res=deg*coefs[deg]; for(int i=deg-1; i>=1; --i) res=res*t+i*coefs[i]; return res;}
    Polynomial translated(ring r) const; //returns P(t+r)
    Polynomial normalized(ring &translation) const; //unitary dominant coefficient, zero next coefficient
    bool isNormalized() const {return  coefs[deg]==ring(1) && (deg==0 || coefs[deg-1]==ring(0));}
    
    int roots(ring r[deg]) const; //roots are counted with multiplicity
    bool isZero(){for(int i=0; i<=deg; ++i) if(coefs[i]!=0) return false; return true;}
    Polynomial<deg-1, double> deriv(){Polynomial<deg-1,double> P; for(int i=1; i<=deg; ++i) P[i-1]=i*coefs[i]; return P;}
};

//print
template<unsigned int deg, class ring>
ostream & operator << (ostream &f, Polynomial<deg, ring> P){for(int i=0; i<=deg; ++i) {f<<P[i]; if(i<deg) f<<" ";} return f;}

template<unsigned int deg, class ring>
ostream_math operator << (ostream_math f, Polynomial<deg, ring> P){
    if(f.format!=Mathematica) f.os << P; 
    else {
        int d=P.degree_inv();
        if(d==-1) f<<"0";
        else for(int i=d; i<=deg; ++i) {
            if(i>d && P[i]>0) f<<"+";
            if(P[i]!=0){
                if(P[i]==ring(1)) {
                    if(i==0) f<<P[i];
                    else if(i==1) f<<"t";
                    else f<<"t^"<<i;
                    continue;
                }
                if(P[i]==ring(-1)) {
                    if(i==0) f<<P[i];
                    else if(i==1) f<<"-t";
                    else f<<"-t^"<<i;
                    continue;
                }
                f<<P[i];
                if(i>0) f<<"*t";
                if(i>1) f<<"^"<<i;
            }
        }
    }
    return f;
}

//constructor
template<unsigned int deg, class ring>
Polynomial<deg,ring>::Polynomial(const ring c[deg+1], bool timesBinomial){
    for(int i=0; i<=deg; i++) coefs[i]=c[i];
    if(timesBinomial){
        ring fact=1;
        for(int i=1; i<=deg; i++) {
            fact*=i;
            coefs[i]/=fact; coefs[deg-i]/=fact;
        }
        for(int i=0; i<=deg; i++) coefs[i]*=fact;
    }
}

//conversion
template<unsigned int deg> Polynomial<deg, complex<double> > PolynomialRealToComplex(const Polynomial<deg,double> &P){
    Polynomial<deg, complex<double> > Q; for(int i=0; i<=deg; i++) Q[i]=complex<double>(P[i]); return Q;}

template<unsigned int deg1, unsigned int deg2, class ring> Polynomial<deg1+deg2, ring> operator*(const Polynomial<deg1, ring> &P, const Polynomial<deg2, ring> &Q){
    Polynomial<deg1+deg2, ring> R;
    for(int i=0; i<=deg1; i++) for(int j=0; j<=deg2; j++) R[i+j]+=P[i]*Q[j];
    return R;
}

//roots
//class template partial specialization does not allow a unified formulation (or I miss something), which would be useful for degrees 0 and 1.
template<> int Polynomial<0, double>          ::roots(         double r[0]) const {if(coefs[0]==0)  return INT_MAX; return 0;}
template<> int Polynomial<0, complex<double> >::roots(complex<double> r[0]) const {if(coefs[0]==0.) return INT_MAX; return 0;}

template<> int Polynomial<1, complex<double> >::roots(complex<double> r[1]) const {    
    if(coefs[1]==0.) return Polynomial<0, complex<double> >(coefs).roots(r);
    r[0]=-coefs[0]/coefs[1]; return 1;}
template<> int Polynomial<1, double >::roots(double r[1]) const {    
    if(coefs[1]==0.) return Polynomial<0, double >(coefs).roots(r);
    r[0]=-coefs[0]/coefs[1]; return 1;}

template<>
int Polynomial<2, complex<double> >::roots(complex<double> r[2]) const {
    if(coefs[2]==0.) return Polynomial<1, complex<double> >(coefs).roots(r);
    const complex<double> b=coefs[1]/2.;
    const complex<double> sdelta=sqrt(square(b)-coefs[0]*coefs[2]);
    r[0]=(-b+sdelta)/coefs[2]; r[1]=(-b-sdelta)/coefs[2];
    return 2;
}

template<>
int Polynomial<2,double>::roots(double r[2]) const {
    if(coefs[2]==0.) return Polynomial<1,double>(coefs).roots(r);
    const double b=coefs[1]/2;
    const double delta=square(b)-coefs[0]*coefs[2];
    if(delta<0) return 0;
    const double sdelta=sqrt(delta);
    r[0]=(-b+sdelta)/coefs[2]; r[1]=(-b-sdelta)/coefs[2];
    return 2;
}

template<> //Cardan's method
int Polynomial<3, complex<double> >::roots(complex<double> r[3]) const {
    if(coefs[3]==0.) return Polynomial<2, complex<double> >(coefs).roots(r);
    if(!isNormalized()) {
        complex<double> t; 
        Polynomial<3, complex<double> > P=normalized(t); 
        int res = P.roots(r);
        for(int i=0; i<3; i++) r[i]+=t;
        return res;
    }
    const complex<double> p=coefs[1], q=coefs[0];
    Polynomial<2, complex<double> > P; P[0]=-cube(p)/27.; P[1]=q; P[2]=1;
    complex<double> r2[2]; P.roots(r2);
    const complex<double> u=pow(r2[0], 1./3.);
    const complex<double> j(-1./2., sqrt(3.)/2.), j2(-1./2., -sqrt(3.)/2.); //cubic roots of unity    
    if(u==0.){
        const complex<double> v=pow(r2[1], 1./3.);
        r[0]=v; r[1]=v*j2; r[2]=v*j; 
        return 3;
    }
    const complex<double> v=-p/(3.*u); 
    r[0]=u+v; r[1]=u*j+v*j2; r[2]=u*j2+v*j;
    return 3;
}

template<>
int Polynomial<3,double>::roots(double r[3]) const {
    if(coefs[3]==0.) return Polynomial<2,double>(coefs).roots(r);
    if(!isNormalized()) {
        double t; 
        Polynomial<3,double> P=normalized(t); 
        int res = P.roots(r);
        for(int i=0; i<3; i++) r[i]+=t;
        return res;
    }
    const double p=coefs[1], q=coefs[0]; 
    const double disc=4*cube(p)+27*square(q);
    Polynomial<2,double> P; P[0]=-cube(p)/27; P[1]=q; P[2]=1;
    if(disc>0){ //only one real root. The second degree equation has two distinct roots.
        double r2[2]; P.roots(r2);
        const double u=sqrt3(r2[0]);
        if(u==0) r[0]=sqrt3(r2[1]); 
        else r[0]=u-p/(3*u);
        return 1;
    } else if(disc==0) {//degenerate case, three real roots
        double r2[2]; P.roots(r2);
        const double u=sqrt3(r2[0]);
        r[0]=2*u; r[1]=-u; r[2]=-u;
        return 3;
    }
    Polynomial<2,complex<double> > Pc=PolynomialRealToComplex(P);
    complex<double> r2[2]; Pc.roots(r2);
    const complex<double> u=pow(r2[0], 1./3.);
    const complex<double> j(-1./2., sqrt(3.)/2.), j2(-1./2., -sqrt(3.)/2.); //cubic roots of unity    
    if(u==0.){r[0]=0; r[1]=0; r[2]=0; return 3;} //not supposed to happen
    const complex<double> v=-p/(3.*u); 
    r[0]=(u+v).real(); r[1]=(u*j+v*j2).real(); r[2]=(u*j2+v*j).real();
    return 3;
}

template<> //Ferrari's method
int Polynomial<4, complex<double> >::roots(complex<double> r[4]) const {
    if(coefs[4]==0.) return Polynomial<3, complex<double> >(coefs).roots(r);
    if(!isNormalized()) {
        complex<double> t; 
        Polynomial<4, complex<double> > P=normalized(t); 
        int res = P.roots(r);
        for(int i=0; i<4; i++) r[i]+=t;
        return res;
    }
    const complex<double> a=coefs[2], b=coefs[1], c=coefs[0];
    Polynomial<3, complex<double> > P; P[0]=b*b-4.*a*c; P[1]=8.*c; P[2]=4.*a; P[3]=-8.;
    P.roots(r); const complex<double> lambda=r[0];
    const complex<double> p=sqrt(2.*lambda-a); const complex<double> q= (p==0. ? sqrt(lambda*lambda-c) : -b/(2.*p));
    Polynomial<2, complex<double> > R,S;
    R[0]=lambda-q; R[1]=-p; R[2]=1; 
    S[0]=lambda+q; S[1]= p; S[2]=1;
    R.roots(r); S.roots(r+2);
    return 4;
}

template<> //Ferrari's method
int Polynomial<4,double>::roots(double r[4]) const {
    if(coefs[4]==0.) return Polynomial<3,double>(coefs).roots(r);
    if(!isNormalized()) {
        double t; 
        Polynomial<4,double> P=normalized(t); 
        int res = P.roots(r);
        for(int i=0; i<4; i++) r[i]+=t;
        return res;
    }
    
    const double a=coefs[2], b=coefs[1], c=coefs[0];
    Polynomial<3,double> P; P[0]=b*b-4.*a*c; P[1]=8.*c; P[2]=4.*a; P[3]=-8.;
    double lambda; 
    if(P.roots(r)==1) lambda=r[0];
    else lambda= r[1]>r[2] ? (r[0]>r[1]? r[0]:r[1]) : (r[0]>r[2]? r[0]:r[1]); 
    
    //cout << "lambda : " << lambda << endl;
    //cout << "2*lambda-a : " << 2.*lambda-a << endl;
    
    const double p=sqrt(max(2.*lambda-a,0.)); //const double q= (p==0. ? sqrt(lambda*lambda-c) : -b/(2.*p));
    double q=sqrt(max(lambda*lambda-c,0.)); if(p*q*b>0) q*=-1;
    
    //cout << p << "; " << q << endl;
    //cout << "l^2-c : " << lambda*lambda-c << endl;
    
    Polynomial<2,double> R,S;
    R[0]=lambda-q; R[1]=-p; R[2]=1; 
    S[0]=lambda+q; S[1]= p; S[2]=1;     
    
    //coutMath << R << "; " << S << endl;
    
    int n=R.roots(r); 
    n+=S.roots(r+n);
    return n;
}

template<unsigned int deg, class ring> Polynomial<deg,ring> Polynomial<deg,ring>::translated(ring r) const {
    Polynomial<deg,ring> P(*this);
    for(int i=0; i<=deg; i++){
        ring binom=1; {ring pow=r; for(int k=i+1; k<=deg; ++k, pow*=r) {binom*=ring(k)/ring(k-i); P[i]+=coefs[k]*binom*pow;}} // #@! syntax
    }
    return P;
}

template<unsigned int deg, class ring> Polynomial<deg,ring> Polynomial<deg,ring>::normalized(ring &translation) const {
    Polynomial<deg,ring> P(*this);
    if(P[deg]!=ring(0)) {P/=P[deg]; P[deg]=ring(1);} //just to be sure
    if(deg>0 && P[deg-1]!=ring(0)) {translation=-P[deg-1]/ring(deg); P=P.translated(translation); P[deg-1]=ring(0);} //idem
    else translation=0;
    return P;
}

template<unsigned int deg, class ring> Polynomial<2*deg, ring> appSym3Pol(sym3 m, Polynomial<deg, ring> P, Polynomial<deg,ring> Q, Polynomial<deg,ring> R){
    Polynomial<deg, ring> 
    U=m.xx*P+m.xy*Q+m.zx*R, 
    V=m.xy*P+m.yy*Q+m.yz*R, 
    W=m.zx*P+m.yz*Q+m.zz*R;
    return P*U+Q*V+R*W;
}
/*
 cout << "n3 " << P.roots(r) << endl;
 coutMath << "*this " << *this << endl;
 cout << "diff " << 2*lambda-a << ", " << lambda << ", " << a << endl; 
 Polynomial SQ; SQ[0]=lambda*lambda-c; SQ[1]=-b; SQ[2]=2*lambda-a; coutMath << "SQ : " << SQ << endl;
 coutMath << "R : " << R << endl;
 coutMath << "S : " << S << endl;
 coutMath << "R*S : " << R*S << endl;
 
 
 Polynomial<2,double> P;
 coutMath<<P<<endl;
 P[1]=2;
 coutMath << P << endl;
 Polynomial<2,double> Q=P.translated(2);
 coutMath<<Q<<endl;
 
 P[2]=1; P[1]=0;
 coutMath << P << " " << P.translated(0.5) << " " << (P+Q)<<endl;
 cout << P.translated(0.5)<<endl;
 
 double r[4];
 cout << Q.roots(r) << " " << r[0] << endl;
 
 cout << P.roots(r) << " " << r[0] <<" "<< r[1] << endl;
 
 Polynomial<1, double> T; T[1]=1;
 Polynomial<1, double> Un; Un[0]=1;
 coutMath << T << " " << T*T << endl;
 
 coutMath << (T-2*Un) << endl;
 
 cout << ((T-2*Un)*(T-3*Un)).roots(r) << endl;
 cout << r[0] << " " << r[1] << endl;
 
 cout << ((T-5*Un)*(T-3*Un)*(T-4*Un)).roots(r) << endl;
 cout << r[0] << " " << r[1] << " " << r[2] << endl;
 
 cout << (T*T+Un*Un).roots(r) << endl;
 cout << ((T-6*Un)*(T*T+Un*Un)).roots(r) << endl;
 cout << r[0] << endl;
 
 cout << "roots fourth degree" << endl;
 
 cout << ((T*T+Un*Un)*(T*T+3*Un*Un)).roots(r) << endl <<endl;
 cout << ((T*T-Un*Un)*(T*T+3*Un*Un)).roots(r) << endl;
 cout << r[0] << " " << r[1] << endl << endl;
 
 cout << ((T*T-Un*Un)*(T*T-3*Un*Un)).roots(r) << endl;
 cout << r[0] << " " << r[1] << " " << r[2] << " " << r[3] << endl << endl;
 */

#endif
