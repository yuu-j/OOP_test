# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<iomanip>
#include<cmath>
using namespace std;


double Cylinder :: SurfaceArea(){
    double ans=2*M_PI*radius*radius+2*M_PI*radius*height;
    return ans;
}

double Cylinder :: Volume(){
    double ans=M_PI*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans=2*M_PI*radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in>>cldr.radius>>cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out<<fixed<<"Circumference: "<<setprecision(3)<<cldr.Circumference()<<endl;
    out<<fixed<<"SurfaceArea: "<<setprecision(3)<<cldr.SurfaceArea()<<endl;
    out<<fixed<<"Volume: "<<setprecision(3)<<cldr.Volume()<<endl;
    return out;
}

# endif

