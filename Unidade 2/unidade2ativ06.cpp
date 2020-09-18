/*ALUNO: SILAS JOÃO BEZERRA SOARES - 119210904
  LISTA: 2º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 06
  SIMULAÇÃO DE ACESSO A CONTA BANCÁRIA / conta: 10997 / conta: 10998
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//criando a classe conta bancária
class ContaBancaria {
  private:
    string nome;
    int conta;
    float saldo;
  public:
     //metodos
     void set_nome(string);
     void set_conta(int);
     void set_saldo(float);
     string get_nome();
     int get_conta();
     float get_saldo();
     void deposito();
     void saque();
     void preencher(string, float, int);
     void exibir();
     void menu();
};

void ContaBancaria::preencher(string nome, float saldo, int conta){
  //preenchendo os atributos com as contas de cada usuário
  this->nome = nome;
  this->saldo = saldo;
  this->conta = conta;
}

//metodos set/get
void ContaBancaria::set_nome(string nome){
  this->nome = nome;
}
void ContaBancaria::set_conta(int conta){
  this->conta = conta;
}
void ContaBancaria::set_saldo(float saldo){
  this->saldo = saldo;
}
string ContaBancaria::get_nome(){
  return nome;
}
int ContaBancaria::get_conta(){
  return conta;
}

float ContaBancaria::get_saldo(){
  return saldo;
}

void ContaBancaria::saque(){

  int id;
  float saque;
  cout << "Insira a quantia do saque: " << endl;
  cin >> saque;
  if(saque > saldo){
    cout << "Impossivel realizar o saque" << endl;
  }
  else if(saque < 0){
    cout << "Impossivel realizar o saque" << endl;
  }
  else{
    saldo = saldo - saque;
    cout << "Saque realizado com sucesso" << endl;
  }
}

void ContaBancaria::deposito(){

  float deposito;
  int id;
  cout << "insira a quantia do deposito" << endl;
  cin >> deposito;
  if(deposito < 0){
    cout << "Nao e possivel realizar depositos negativos" << endl;
  }
  else{
    saldo += deposito;
    cout << "Deposito realizado com sucesso" << endl;
  }
}

void ContaBancaria::exibir(){
  cout << fixed << setprecision(2);
  cout << "Seu saldo atual e: " << get_saldo() << " R$" << endl;
}

void ContaBancaria::menu(){

  int id;
  while(true){

      cout << "Bem-vindo " << get_nome() << endl;
      cout << "Insira a opcao que deseja realizar" << endl;
      cout << "------------------------------" << endl;
      cout << "(1) Depositar" << endl;
      cout << "(2) Sacar" << endl;
      cout << "(3) Consultar Saldo" << endl;
      cout << "(4) Encerrar O Software do Banco" << endl;
      cout << "------------------------------" << endl;
      cin >> id;

      if(id == 1){
        deposito();
      }
      else if(id == 2){
        saque();
      }
      else if(id == 3){
        exibir();
      }
      else if(id == 4){
        break;
    }
  }
}

int main(){
  ContaBancaria conta1, conta2;
  int t;
  //criando duas contas no programa principal
  conta1.preencher("Marcio", 20, 10997); //saldo 20 inicial conta: 10997
  conta2.preencher("Bruno", 30, 10998); // saldo 30 inicial conta: 10998

  cout << "Insira o numero da conta que deseja acessar: ";
  cin >> t;
  //condições para cada conta
  if(t == conta1.get_conta()){
    conta1.menu();
  }
  else if(t == conta2.get_conta()){
    conta2.menu();
  }
  else if(t != conta1.get_conta() && t != conta2.get_conta()){
    cout << "Usuario nao cadastrado no sistema tente novamente" << endl;
    return main();
  }
}
