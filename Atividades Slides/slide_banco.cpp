#include <iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

//levando em consideração que os usuarios se encontram cadastrados e com saldo em conta 

struct banco{
  double saldo;
  double conta;
};

//cadastro dos usuarios no array usuarios[20] nº de contas de 1-20
void preencher(banco *d){
  for(int i = 0; i < 20; i++){
    d[i].conta = i+1;
  }
}
//preenche as contas dos usuários
void preecher_saldo(banco *d){
  for(int i = 0; i < 20; i++){
    d[i].saldo = rand()%10001;
  }
}

//função verifica conta do usuário
bool verificar(banco *b, int num){
  for(int i = 0; i < 20; i++){
    if(b[i].conta == num){
      return 1;
    }
  }
return 0;
}

//função atribui valor deposito na struct saldo com referencia no indice do array que representa a conta.
void depositar(banco *b, double deposit, int num){
  b[num-1].saldo += deposit;
}

//função mostra saldo
double saldo(banco *b, int num){
  double resp;
  resp = b[num-1].saldo;
  return resp;
}

void sacar(banco *b, double saque, int num){
  cout << fixed << setprecision(2);
  cout << "SALDO ATUAL R$: " << saldo(b,num) << endl;
  
  if(saque > b[num-1].saldo){
    cout << "O valor do saque e maior que o saldo" << endl;
  }
  else{
    //fazendo a operação do saque
    b[num-1].saldo -= saque;
    cout << endl;
    cout << "----------EXTRATO----------------" << endl;
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Seu saldo ATUAL agora e: " << saldo(b,num) << endl;
  }
}

int main() {
  struct banco usuarios[20];
  preencher(usuarios);
  preecher_saldo(usuarios);
  int id;
  
  while(true){
    
    cout << "Selecione a operação que deseja fazer" << endl;
    cout <<"------------------------------------------" << endl;
    cout << "(1) DEPOSITAR" << endl;
    cout << "(2) CONSULTAR SALDO" << endl;
    cout << "(3) SACAR" << endl;
    cout << "(4) SAIR" << endl;
    
    int op;
    cin >> op;
    
    if(op == 1){
      double deposito;
      cout << "insira o valor do deposito R$: " << endl;
      cin >> deposito;
      
      cout << "informe o número da conta" << endl;
      cin >> id;
      
      //verificando conta
      if(verificar(usuarios,id) == 1){
        depositar(usuarios,deposito,id);
        cout << "O deposito foi realizado" << endl;
      }
      else {
        cout << "Conta Invalida" << endl;
      break;
      }
    }
    if(op == 2){
      cout << "informe o número da conta" << endl;
      cin >> id;

      //verificando conta
      if(verificar(usuarios,id) == 1){
        cout << fixed << setprecision(2);
        cout << "SALDO R$: " << saldo(usuarios,id) << endl;
      }
      else {
        cout << "Conta Invalida" << endl;
      break;
      }
    }
    if(op == 3){
      
      cout << "informe o número da conta" << endl;
      cin >> id;
      
      //verificando conta
      if(verificar(usuarios,id) == 1){
        double saque;
        cout << "Insira a quantia do saque R$: " << endl;
        cin >> saque;
        sacar(usuarios,saque,id);
      }
      else {
        cout << "Conta Invalida" << endl;
      break;
      }
    }
    if(op == 4){
      break;
    }
  }
}