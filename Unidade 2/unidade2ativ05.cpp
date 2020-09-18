/*ALUNO: SILAS JOÃO BEZERRA SOARES - 119210904
  LISTA: 2º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 05
  CÁLCULO DO IMC E CATEGORIA DO USUÁRIO UTILIZANDO CLASSES
*/
#include <iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

//criando a classe pessoa
class Pessoa {

  private:

    string sexo;
    int idade;
    string nome;
    float peso;
    float altura;

  public:
      //metodos
      void set_nome(string);
      string get_nome();
      void set_idade(int);
      int get_idade();
      void set_sexo(int);
      string get_sexo();
      void set_peso(float);
      float get_peso();
      void set_altura(float);
      float get_altura();
      string categoria();
      float calcimc();

};

//função calcula imc
float Pessoa::calcimc(){
  return peso / (pow(altura,2));
}

//função seleciona categoria do usuário
string Pessoa::categoria(){
  string resp;
  if(calcimc() <= 18.5){
    resp = "abaixo do peso normal";
  }
  else if(calcimc() > 18.5 && calcimc() <= 25){
    resp = "no Peso Normal";
  }
  else if(calcimc() > 25 && calcimc() <= 30){
    resp = "acima do peso normal";
  }
  else if(calcimc() > 30){
    resp = "na Obesidade";
  }
return resp;
}

//função recebe Nome do usuário
void Pessoa::set_nome(string nome){
  (this->nome) = nome;
}

string Pessoa::get_nome(){
  return nome;
}
//função recebe altura do usuario
void Pessoa::set_altura(float altura){
    this->altura = altura;
}

float Pessoa::get_altura(){
  return altura;
}
//função recebe peso do usuário
void Pessoa::set_peso(float peso){
    this->peso = peso;
}

float Pessoa::get_peso(){
    return peso;
}
//função recebe idade do usuário
void Pessoa::set_idade(int idade){
  this->idade = idade;
}

int Pessoa::get_idade(){
  return idade;
}
//função seleciona sexo do usuário
void Pessoa::set_sexo(int operacao){

  if(operacao == 1){
    sexo = "Masculino";
  }
  else if(operacao == 2){
    sexo = "Feminino";
  }

}

string Pessoa::get_sexo(){
  return sexo;
}

int main() {

  Pessoa p1;
  string nome;
  float peso, altura;
  int op, idade, sexo;

  while(true){

    cout << "insira seu primeiro nome: ";
    cin >> nome;
    cout << "Insira a sua idade: ";
    cin >> idade;
    cout << "Digite (1) para Masculino ou (2) para Feminino: ";
    cin >> sexo;
    //verifica se o sexo está correto
    while(sexo != 1 && sexo != 2){
        cout << "Valor invalido, insira 1 para masculino ou 2 para feminino" << endl;
        cin >> sexo;
    }

    cout << "Insira o seu peso: ";
    cin >> peso;
    cout << "Insira sua altura: ";
    cin >> altura;

    cout << fixed << setprecision(2);

    //passando os metodos
    p1.set_nome(nome);
    p1.set_idade(idade);
    p1.set_sexo(sexo);
    p1.set_peso(peso);
    p1.set_altura(altura);

    cout << "Seu imc e: " << p1.calcimc() << endl;

    cout << p1.get_nome() << " seu sexo e " << p1.get_sexo() << " voce possui " << p1.get_idade() << " anos" << " e voce esta " << p1.categoria() << endl;

    cout << "Deseja realizar uma nova consulta ? (1) SIM (2) NAO" << endl;
    cin >> op;

    while(op != 1 && op != 2){
        cout << "Valor invalido, insira 1 para nova consulta ou 2 para encerrar" << endl;
        cin >> op;
    }

    if(op == 1){
      return main();
    }
    else if(op == 2){
      break;
    }
  }
}
