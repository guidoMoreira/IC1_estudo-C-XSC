#include <iostream>
#include "l_interval.hpp"

using namespace std;
using namespace cxsc;

l_interval pi(int n){
    l_interval a;
    l_interval Pi;
    l_interval b;
    l_interval help;
    help = 2;
    a = sqrt(help);
    b = 0;
    Pi = 2 + a;
    for(int i = 0; i < n; i++) {
        b = ((1 + b)* sqrt(a))/(a + b);
        a =  (sqrt(a) + (1 / sqrt(a)))/2;
        Pi = ((1 + a)* Pi * b)/(1 + b);
        cout << i << " " << Pi << "\n";
    }
    return Pi;
}

int main() {
    int x;
    stagprec = 20;


    cout << SetDotPrecision(stagprec * 16,stagprec * 16 -3);
    x = 100;
    cout << pi(x);
    return 0;
}
