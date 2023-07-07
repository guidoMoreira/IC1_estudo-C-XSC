#include <iostream>
#include "l_interval.hpp" // Pacote da aritmética intervalar
#include "l_imath.hpp" // Funções intervalares básicas
using namespace std;
using namespace cxsc;

int main(void)
{
    /*stagprec = 20;
    cout << SetDotPrecision(16*stagprec, 16*stagprec -3);
*/
    l_interval x,y;
    x = 1;
    y = 3;
   /* y = 1000000000000000000;
    x = 1;
    x/=(y*y*y*y*y*y*y*y*y*y*y*y*y*y*y*y*y*100);
    y = 1;
    l_interval z;
    z=10;;
    y/=z;*/
   x = (x | y);
    cout << x;

;
return 0;
}