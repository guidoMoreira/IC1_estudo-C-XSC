#include <iostream>
#include "l_rmatrix.hpp"
#include <iomanip>
#include "l_rmath.hpp"
#include <fstream>
using namespace std;
using namespace cxsc;

l_real f(l_real x){
    return (l_real)-1;
}
l_real uexat(l_real x){
    return x - (pow(x,(l_real)2))/2;
}
int main() {
    ofstream erroArq,interacoes;
    erroArq.open("erro.txt");
    interacoes.open("interações");

    l_real tol;
    tol = 1;
    tol /= 10000000000;
    clock_t start,end;
    start = clock();
    stagprec = 1;
    cout << SetDotPrecision(stagprec * 16, stagprec * 16) << RndNext;

    int n = 34;
    int numerointeracoes = 10000;
    l_rvector u(n);
    l_rvector uold(n);
    l_rvector x(n);
    l_rvector b(n);
    l_real h,B,A;
    A = 0;
    B = 1;
    h = (B - A)/(l_real)(n-1);
    l_rmatrix a(n,n);

    for(int i = 1; i<=n;i++){
        for(int j = 1; j<=n;j++){
            if(i == j){
                a[i][j] = -2;
            }else if(j == i - 1 || j == i + 1){
                a[i][j] = 1;
            }else{
                a[i][j] = 0;
            }
        }
        if(i == 1){
            a[i][i] = 1;
            a[i][i+1] = 0;
        }
        if(i== n){
            a[i][i] = 1;
            a[i][i-1] = 0;
        }
        u[i] = 0;
        uold[i] = u[i];
        x[i] = (i-1) * h;
        b[i] = h*h * f(x[i]);
        if(i ==n || i == 1)
            b[i] = 0;
    }
    u[n] = 0.5;
    for(int interacao = 1;interacao <= numerointeracoes;interacao++) {
        l_rvector e(n);
        l_real erro;
        erro = 0;

        for (int i = 2; i < n; i++) {
            uold[i]=u[i];
            u[i] = b[i] / a[i][i];
            for (int j = 1; j <= n; j++) {
                if(j < i){
                    u[i] -= (uold[j] * a[i][j])/ a[i][i];
                }
                if(j > i){
                    u[i] -= (u[j] * a[i][j])/ a[i][i];
                }

            }
            e[i]=uexat(x[i])-u[i];
            erro+=pow(e[i],(l_real)2);
        }
        erro = sqrt(erro);
        cout << erro<<"\n";
        cout <<SetDotPrecision(stagprec * 16, stagprec * 16) << RndNext<< erro<<"\n";
        erroArq <<SetDotPrecision(stagprec * 16, 16) << RndNext<<erro<<"\n";
        interacoes << interacao<<"\n";
        if(erro < tol){
            cout << interacao;
            break;
        }

    }
    for(int i = 1; i <= n; i++){
        cout << "u" << i <<":"<<u[i]<< endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
