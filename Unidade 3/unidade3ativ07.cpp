/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 3º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 07
  SIMULAÇÃO DE FUNÇÕES DE UMA TELEVISÃO UTILIZANDO CONSTRUTOR E CLASSES
*/
#include<iostream>
#include<locale>
#include<cstdlib>
using namespace std;
//criando a classe Televisao
class Televisao{
  private:
    int control_som, control_canal;
  public:
    Televisao();
    bool aumentaSom();
    bool diminuiSom();
    bool aumentaCanal();
    bool diminuiCanal();
    bool set_troca(int);
    int get_som();
    int get_canal();
};
//construtor inicializa o atributo control_som e control_canal
Televisao::Televisao(){
  control_som = 50; //som máximo da tv = 100
  control_canal = 5; //canais suportados pela tv = 10
}

//Controle de volumes
//Se o volume for 100 não a possibilidade de aumentar
bool Televisao::aumentaSom(){
  if(control_som == 100){
    return false;
  }
  else{
    this->control_som += 1;
    return true;
  }
}
//Se o volume for 0 não a possibilidade de abaixar o volume
bool Televisao::diminuiSom(){
  if(control_som == 0){
    return false;
  }
  else{
    this->control_som -= 1;
    return true;
  }
}

//retorna volume atual
int Televisao::get_som(){
  return control_som;
}

//controle dos canais somando uma unidade
bool Televisao::aumentaCanal(){
  if(control_canal == 10){
    return false;
  }
  else {
    this->control_canal = control_canal + 1;
    return true;
  }
}
//subtrai uma unidade para chegar ao canal anterior
bool Televisao::diminuiCanal(){
  if(control_canal == 1){
    return false;
  }
  else {
    this->control_canal -= 1;
    return true;
  }
}

//troca de canal de acordo com o usuário em um intervalo de 1 a 10
bool Televisao::set_troca(int canal){
  if(canal > 10 || canal < 1){
    return false;
  }
  else if(canal >= 1 && canal <=10){
    this->control_canal = canal;
    return true;
  }
}
//retorna canal atual
int Televisao::get_canal(){
  return control_canal;
}

int main(){
  Televisao tv;
  int op, c;

  //suporte a caracteres especiais
  setlocale(LC_ALL, "Portuguese");

  while (true) {

  //menu de acesso ao usuário
  cout << "CONTROLE" << endl;
  cout << "(1) Aumentar o volume" << endl;
  cout << "(2) Diminuir o volume" << endl;
  cout << "(3) Passar de canal" << endl;
  cout << "(4) Voltar ao canal anterior" << endl;
  cout << "(5) Trocar de canal" << endl;
  cout << "(6) Status Canal/Volume" << endl;
  cout << "(7) Desligar TV" << endl;
  cin >> op;

  //limpa a tela para melhor visualização do usuário
  system("cls");

    if(op == 1){
      if(tv.aumentaSom() == false){
        cout << "O volume ja está no máximo" << endl;
      }
      else {
          cout << "Volume : " << tv.get_som() << endl;
        }
    }

    if(op == 2){
      if(tv.diminuiSom() == false){
        cout << "O volume ja está no mínimo" << endl;
      }
      else {
          cout << "Volume : " << tv.get_som() << endl;
        }
    }

    if(op == 3){
      if(tv.aumentaCanal() == false){
        cout << "Não foi possivel passar para o próximo canal" << endl;
      }
      else {
          cout << "Canal Atual: " << tv.get_canal() << endl;
        }
    }

    if(op == 4){
      if(tv.diminuiCanal() == false){
        cout << "Não foi possível voltar ao canal anterior" << endl;
      }
      else {
          cout << "Canal Atual: " << tv.get_canal() << endl;
        }
    }

    if(op == 5){
      cout << "Insira o canal que deseja acessar: ";
      cin >> c;
      if(tv.set_troca(c) == false){
        cout << "Não foi possível acessar o canal" << endl;
      }
      else {
          cout << "Canal Atual: " << tv.get_canal() << endl;
        }
      }
    if(op == 6){
      cout << "Volume: " << tv.get_som() << " Canal: " << tv.get_canal() << endl;
    }
    if(op == 7) break;
  }
}
