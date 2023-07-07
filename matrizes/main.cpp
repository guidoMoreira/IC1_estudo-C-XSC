#include <iostream>
#include "cmatrix.hpp"

using namespace std;
using namespace cxsc;



int main()
 {
    int n;
    cout << "Please enter the matrix dimension n: ";
    cin  >> n;

    cmatrix A(n,n), B(n,n);   // Dynamic allocation of A, B
    cdotprecision accu;       // Allows exact computation of dotproducts
    cout << "Digite os elementos da matriz A: ";
    cin >> A;//Exemplo para n = 3: (1,0) (2,0) (3,0) (4,0) (5,0) (6,0) (7,0) (8,0) (10,0)
    cout << "Digite os elementos da matriz B: ";
    cin >> B;//Exemplo para n = 3: (10,0) (11,0) (12,0) (13,0) (14,0) (15,0) (16,0) (17,0) (19,0)
    accu = 0.0;               // Clear accumulator

    for (int i=1; i<=n; i++) {
            accumulate(accu, A[i], B[Col(i)]);
            cout << accu << endl;
    }
    // A[i] and B[Col(i)] are subarrays of type rvector.

    // The exact result stored in the complex dotprecision variable accu
    // is rounded to the nearest complex floating point number:
    complex result = rnd(accu);

    cout << SetPrecision(12,6) << RndNext << Dec;
    cout << "Trace of product matrix: " << result << endl;
    return 0;
 }