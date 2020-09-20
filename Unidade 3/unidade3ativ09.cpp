/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 3º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 09
  ESSE PROGRAMA REALIZA OPERAÇÕES COM FRAÇÕES DE ACORDO COM OS DADOS INFORMADOS PELO USUÁRIO
  PODENDO RETORNA COMO RESPOSTA UMA FRAÇÃO DE INTEIROS OU PONTO FLUTUANTE, UTILIZANDO CLASSES E CONSTRUTOR
*/
#include<clocale>
#include<cstdlib>
#include<iomanip>
#include<iostream>
using namespace std;
//criando a classe Rational
class Rational{
  private:
    int num, den;
  public:
    Rational();
    bool verifica(Rational, Rational);
    void set_fracao(int, int);
    void multiplica(Rational, Rational);
    void div(Rational, Rational);
    //metotos que imprimem a fração no formato a / b para inteiro ou ponto flutuante
    void imprimifloat();
    void imprimirinteiro();
    //metodos gets
    int get_numerador();
    int get_denominador();
};
//construtor inicializando numerador e denominador
Rational::Rational(){
  num = 1;
  den = 1;
}
//verifica se não a divisão por 0 em nenhuma das frações
bool Rational::verifica(Rational n1, Rational n2){
  if(n1.den == 0 || n2.den == 0){
      return false;
  }
  else return true;
}
//adiciona os valores das frações
void Rational::set_fracao(int n1, int n2){
  this->num = n1;
  this->den = n2;
}
//função que multiplica as frações
void Rational::multiplica(Rational f1, Rational f2){
  int numerador = f1.num * f2.num;
  int denominador = f1.den * f2.den;
  this->num = numerador;
  this->den = denominador;
}
//função que dividi as frações
void Rational::div(Rational f1, Rational f2){
  int denominador = (f1.den)*(f2.num);;
  int numerador = (f1.num)*(f2.den);
  this->num = numerador;
  this->den = denominador;
}

//retorna denominador
int Rational::get_denominador(){
  return den;
}
//retorna numerador
int Rational::get_numerador(){
  return num;
}
//metodo para impressão no formato a / b
void Rational::imprimirinteiro(){
  //apresenta a fração com 2 casas decimais
  cout << fixed << setprecision(2);
  cout << "Resultado: " << get_numerador() << " / " << get_denominador() << endl;
}
//metodo para impressão no formato a / b
void Rational::imprimifloat(){
  //apresenta a fração com 2 casas decimais
  cout << fixed << setprecision(2);
  cout << "Resultado: " << (double)get_numerador() << " / " << (double)get_denominador() << endl;
}

int main(){
    Rational fr1, fr2, fr;
    int id, op, a, b;

    //suporte a caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    cout << "Insira a primeira fração: " << endl;
    cout << "Numerador: ";
    cin >> a;
    cout << "Denominador: ";
    cin >> b;
    fr1.set_fracao(a, b);
    cout << "Insira a segunda fração: " << endl;
    cout << "Numerador: ";
    cin >> a;
    cout << "Denominador: ";
    cin >> b;
    fr2.set_fracao(a, b);

    //verifica se os denominadores não são zeros
    for(int i = 0; i < 1; i++){
      if(fr.verifica(fr1, fr2) == false){
        cout << "Não ha divisão por 0 tente novamente" << endl;
        return main();
      }
      else{
        cout << "Os dados inseridos são validos !" << endl;
      }
    }

    while(true){
    //menu de acesso ao usuário
    cout << "insira a opção que deseja realizar" << endl;
    cout << "(1) Multiplicação" << endl;
    cout << "(2) Divisão" << endl;
    cout << "(3) Trocar os valores das frações" << endl;
    cout << "(4) Sair" << endl;
    cin >> id;

    //limpa a tela para melhor vizualização do usuário (Linux = ("clear"))
    system("cls");

    //verifica valor informado pelo usuário
    while(id != 1 && id != 2 && id != 3 && id != 4){
      cout << "Opção invalida tente novamente: (1) Multiplicar (2) Dividir (3) Trocar Valores (4) Sair" << endl;
      cin >> id;
    }

    if(id == 4) break;

    if(id == 3) return main();

    cout << "Insira a forma que você deseja receber o resultado" << endl;
    cout << "(1) Inteiro (2) Ponto Flutuante" << endl;
    cin >> op;

    //verifica valor informado pelo usuário
    while(op != 1 && op != 2){
      cout << "Opção invalida tente novamente: (1) inteiro (2) Ponto Flutuante" << endl;
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
