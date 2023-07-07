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
    stagprec = 20;
    cout << SetDotPrecision(stagprec * 16, stagprec * 16) << RndNext;
    l_real tol;
    tol = 0;/*
    tol /= 10000000000;tol /= 10000000000;
    tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;
    tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;
    tol /= 1000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;tol /= 10000000000;
*/
cout << tol;

    clock_t start,end;
    start = clock();



    int n = 34;
    int numerointeracoes = 100000;
    l_rvector u(n);
    l_rvector x(n);
    l_rvector b(n);
    l_real h,B,A;
    A = 0;
    B = 1;
    h = (B - A)/(l_real)(n-1);
    l_rmatrix a(n,n);
    //l_real errofinal;
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
            u[i] = b[i] / a[i][i];
            for (int j = 1; j <= n; j++) {
                if(i != j){
                    u[i] -= (u[j] * a[i][j])/ a[i][i];
                }
            }
            e[i]=uexat(x[i])-u[i];
            erro+=pow(e[i],(l_real)2);
        }
        erro = sqrt(erro);
        cout <<SetDotPrecision(stagprec * 16, stagprec * 16-3) << RndNext<< erro<<"\n";
        erroArq <<SetDotPrecision(stagprec * 16, 16) << RndNext<<erro<<"\n";
        interacoes << interacao<<"\n";

        if(erro <= tol){
            cout <<'\n'<< interacao<< '\n';
            break;
        }
    //errofinal = erro;
    }
    cout <<SetDotPrecision(stagprec * 16, stagprec * 16) << RndNext;
    for(int i = 1; i <= n; i++){
        cout << "u" << i <<":"<<u[i]<< endl<< uexat(x[i])<<endl<<endl;
    }
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    //cout << errofinal;
    return 0;
}
