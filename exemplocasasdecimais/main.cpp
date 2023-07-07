#include <iostream>
#include "l_interval.hpp"

using namespace std;
using namespace cxsc;
int main() {
  l_interval a(3);// aqui foi criado o intervalo a = [3,3]
  l_interval b,c,d;// primeiro criamos 4 variaveis do tipo long l_interval

  //agora vamos atribuir valores a cada um deles:


    a = 3;// esses comandos criam intervalos pontuais [3;3]

  "[1,5]" >> b; //esse comando cria o intervalo [1,5] e armazena na variavel b

  c = b/2;//cria o intervalo [0.5,2.5] e armazena na variavel c

  d = c & b; //realiza a operação de interseção entre os intervalos [0.5,2.5] e [1,5] que resulta no intervalo [1,2.5] e armazena na variavel d

  //para modificar o número de casas decimais utilizados, o cxsc tem variaveis e comando especificos, se estiver sendo utilizadas variaveis do tipo real ou interval temos:
  cout << SetPrecision(16,13);

  //Para trabalharmos com variaveis do tipo long, usamos primeiro a variavel global :

  stagprec = 10;//definimos a precisão das variaveis para 160 casas decimais
  // e podemos usar o próprio stagprec para definir a precisão da saida, para isso usamos o comando:
  SetDotPrecision(stagprec*16, stagprec*16 - 3);

  //a partir de agora caso seja feita uma impressão no console ela terá todas as casas decimais pré-definidas:

  cout << "[1,5] / [3,3] = "<< a/b << "\n";
  /*
  Resultado:
  [1,5] / [3,3] = [0.333333333333333333,1.6666666666666666666]
    */
  return 0;

}
