#include <iostream>
#include "l_rmatrix.hpp"
#include <iomanip>
using namespace std;
using namespace cxsc;

int main() {
    clock_t start,end;
    start = clock();

    stagprec = 1;// precisao de 8 * 16 -3  casas decimais
    cout << SetDotPrecision(stagprec * 16, stagprec * 16) << RndNext;

    int n = 3;
    int numerointeracoes = 300;

    l_rmatrix m(n,n+1);
    l_rvector x(n);
    x[1] = 0;x[2] = 0;x[3] = 0;
    m[1][1] = 10;
    m[1][2] = 2;
    m[1][3] = 1;
    m[1][4] = 7;

    m[2][1] = 1;
    m[2][2] = 5;
    m[2][3] = 1;
    m[2][4] = -8;

    m[3][1] = 2;
    m[3][2] = 3;
    m[3][3] = 10;
    m[3][4] = 6;

    l_rvector xold(n);
    for(int interacao = 1;interacao <= numerointeracoes;interacao++) {
        for (int i = 1; i <= n; i++) {
            xold[i] = x[i];
            x[i] = m[i][n+1] / m[i][i];
            for (int j = 1; j <= n; j++) {
                if (i != j) {
                    x[i] -= (x[j] * m[i][j])/ m[i][i];;
                }
            }
            cout << x[i] << ">\n";
        }
        int certo = 0;
        for(int i =1; i <= n;i++){
            if(x[i] == xold[i]){
                certo++;
            }
        }
        if(certo == n){
            cout << "interação final:" << interacao << endl;
            break;
        }

    }

    cout << "x1 = "<< x[1] << endl;
    cout << "x2 = "<< x[2]<< endl;
    cout << "x3 = "<< x[3]<< endl;

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
