#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

long double f(long double x){
    return (long double)-1;
}
long double uexat(long double x){
    return x - (pow(x,(long double)2))/2;
}
int main() {
    ofstream erroArq,interacoes;
    erroArq.open("erro.txt");
    interacoes.open("interações");

    clock_t start,end;
    start = clock();
    int n = 34;
    int numerointeracoes = 10000;
    cout << setprecision(16);
    long double u[n];
    long double uold[n];
    long double x[n];
    long double b[n];
    long double h,B,A;
    long double tol = 0.0000000001;
    A = 0;
    B = 1;
    h = (B - A)/(long double)(n-1);
    long double a[n][n];

    for(int i = 0; i<n;i++){
        for(int j = 1; j<=n;j++){
            if(i == j){
                a[i][j] = -2;
            }else if(j == i - 1 || j == i + 1){
                a[i][j] = 1;
            }else{
                a[i][j] = 0;
            }
        }
        if(i == 0){
            a[i][i] = 1;
            a[i][i+1] = 0;
        }
        if(i== n-1){
            a[i][i] = 1;
            a[i][i-1] = 0;
        }
        u[i] = 0;
        uold[i] = 0;
        x[i] = (i) * h;
        b[i] = h*h * f(x[i]);
        if(i ==n-1 || i == 0)
            b[i] = 0;
    }

    u[n-1] = (long double)0.5;
    for(int interacao = 1;interacao <= numerointeracoes;interacao++) {
        long double e[n];
        long double erro;
        erro = 0;

        for (int i = 1; i < n-1; i++) {
            uold[i] = u[i];
            u[i] = b[i] / a[i][i];
            for (int j = 0; j < n; j++) {
                if(j < i){
                    u[i] -= (uold[j] * a[i][j])/ a[i][i];
                }
                if(j > i){
                    u[i] -= (u[j] * a[i][j])/ a[i][i];
                }
            }

            e[i]=uexat(x[i])-u[i];
            erro+=pow(e[i],(long double)2);
        }
        erro = sqrt(erro);//Imprimir erro em arquivo
        cout << fixed;
        cout << erro<<"\n";
        erroArq << setprecision(15)<<fixed << erro<<"\n";
        interacoes << interacao<<"\n";
        if(erro < tol){

            cout << interacao << "\n";
            break;
        }
    }

    for(int i = 0; i < n; i++){
        cout << u[i]<< endl;}
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;
}
