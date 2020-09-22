/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 4� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 10
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA REALIZA OPERA��ES COM FRA��ES DE ACORDO COM OS DADOS INFORMADOS PELO USU�RIO
  PODENDO RETORNA COMO RESPOSTA UMA FRA��O DE INTEIROS OU PONTO FLUTUANTE, UTILIZANDO INTERFACE
  E IMPLEMENTA��O.
*/
#include<iostream>
using std::cin;
#include<clocale>
#include<cstdlib>
#include "Rational.cpp"

int main(){
    Rational fr1, fr2, fr;
    int id, op, a, b;

    //suporte a caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira a primeira fra��o: " << endl;
    cout << "Numerador: ";
    cin >> a;
    cout << "Denominador: ";
    cin >> b;
    fr1.set_fracao(a, b);
    cout << "Insira a segunda fra��o: " << endl;
    cout << "Numerador: ";
    cin >> a;
    cout << "Denominador: ";
    cin >> b;
    fr2.set_fracao(a, b);

    //verifica se os denominadores n�o s�o zeros
    for(int i = 0; i < 1; i++){
      if(fr.verifica(fr1, fr2) == false){
        cout << "N�o ha divis�o por 0 tente novamente" << endl;
        return main();
      }
      else{
        cout << "Os dados inseridos s�o validos !" << endl;
      }
    }

    while(true){
    //menu de acesso ao usuário
    cout << "insira a op��o que deseja realizar" << endl;
    cout << "(1) Multiplica��o" << endl;
    cout << "(2) Divis�o" << endl;
    cout << "(3) Trocar os valores das fra��es" << endl;
    cout << "(4) Sair" << endl;
    cin >> id;

    //limpa a tela para melhor vizualização do usuário (Linux = ("clear"))
    system("cls");

    //verifica valor informado pelo usuário
    while(id != 1 && id != 2 && id != 3 && id != 4){
      cout << "Op��o invalida tente novamente: (1) Multiplicar (2) Dividir (3) Trocar Valores (4) Sair" << endl;
      cin >> id;
    }

    if(id == 4) break;

    if(id == 3) return main();

    cout << "Insira a forma que voc� deseja receber o resultado" << endl;
    cout << "(1) Inteiro (2) Ponto Flutuante" << endl;
    cin >> op;

    //verifica valor informado pelo usuário
    while(op != 1 && op != 2){
      cout << "Op��o invalida tente novamente: (1) inteiro (2) Ponto Flutuante" << endl;
      cin >> op;
    }

    if(op == 1){
      if(id == 1){
        fr.multiplica(fr1, fr2);
        fr.imprimirinteiro();
      }
      else if(id == 2){
        fr.div(fr1, fr2);
        fr.imprimirinteiro();
      }
    }
    else if(op == 2){
      if(id == 1){
        fr.multiplica(fr1, fr2);
        fr.imprimifloat();
      }
      else if(id == 2){
        fr.div(fr1, fr2);
        fr.imprimifloat();
      }
    }
  }
}
