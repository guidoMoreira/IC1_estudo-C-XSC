#include <iostream>
 #include "l_interval.hpp"         // long interval
 #include "l_imath.hpp"            // matematica para long interval
 #include "l_rmath.hpp"            // matematica para long real
 using namespace std;
 using namespace cxsc;

 l_interval f(const l_real& x)     // Function f
 {
    l_interval y(x);               // y is a thin interval initialized by x
    return sqrt(y) + (y+1)*cos(y); // Use multi-precision interval arithmetic
 }

 l_interval deriv(const l_interval& x) // Derivative function f'
 {
    return 1/(2*sqrt(x)) + cos(x) - (x+1)*sin(x);
 }

 bool criter(const l_interval& x)  // Computing: f(a)*f(b) < 0   and
 {                                 //            not 0 in f'([x])?
    return Sup( f(Inf(x))*f(Sup(x)) ) < 0.0  &&  !(0.0 <= deriv(x));
 }                                 // '<=' means 'element of'

 int main(void)
 {
    l_interval x, xOld;
    stagprec= 3; // Set precision of the staggered correction arithmetic
    x= l_interval(2,3);
    cout << "Starting interval is [2,3]" << endl;
    cout << SetDotPrecision(16*stagprec, 16*stagprec-3) << RndNext;
    // the long accumulator (i.e. a dotprecision variable)

    if (criter(x))
    {  // There is exactly one zero of f in the interval x
       do {
          xOld = x;
          cout << "Diameter of actual enclosure: " << real(diam(x)) << endl;
          x = (mid(x)-f(mid(x))/deriv(x)) & x; // Iteration formula
       } while (x != xOld);                    // &  means  intersection
       cout << "Final enclosure of the zero: " << x << endl;
    }
    else
       cout << "Criterion not satisfied!" << endl;
    return 0;
 }