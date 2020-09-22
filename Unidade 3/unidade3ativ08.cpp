/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 3º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 08
  SIMULAÇÃO DE UM ELEVADOR UTILIZANDO CONSTRUTOR E CLASSES
*/
#include<iostream>
#include<clocale>
#include<cstdlib>
using namespace std;
//criando a classe Elevador
class Elevador{
  private:
    int andarAtual, capacidade, andaresTotal, pessoasAtual;
  public:
    Elevador();
    bool entra();
    bool sai();
    bool subir();
    bool desce();
    int get_andar();
    int get_pessoa();
};

//construtor inicializa os atributos
Elevador::Elevador(){
  andarAtual = 0; //começa no terreo
  capacidade = 5;
  andaresTotal = 10;
  pessoasAtual = 0;
}

//controle de entrada
bool Elevador::entra(){
  if(pessoasAtual == capacidade){
    return false;
  }
  else if(pessoasAtual < capacidade){
    this->pessoasAtual += 1;
    return true;
  }
}
//controle de saída
bool Elevador::sai(){
  if(pessoasAtual == 0){
    return false;
  }
  else{
    this->pessoasAtual -= 1;
    return true;
  }
}

//controla a subida
bool Elevador::subir(){
  if(andarAtual == andaresTotal){
    return false;
  }
  else{
    this->andarAtual += 1;
    return true;
  }
}
//controla a descida
bool Elevador::desce(){
  if(andarAtual == 0){
    return false;
  }
  else{
    this->andarAtual -= 1;
    return true;
  }
}
//metodos get
int Elevador::get_andar(){
  return andarAtual;
}

int Elevador::get_pessoa(){
  return pessoasAtual;
}

int main(){
    Elevador elevador;
    int var, var2, op, id;
    //suporte a caracteres especiais
    setlocale(LC_ALL, "Portuguese");

    //suponhamos que ao aperta subir ou descer alguém esteja no elevador então começamos a contar com uma pessoa
    elevador.entra();

    while(true){

    cout << "Prescione 1 para subir 2 para descer ou 3 Para Encerrar" << endl;
    cout << "(1) Subir" << endl;
    cout << "(2) Descer" << endl;
    cout << "(3) Encerrar Atividade do Elevador" << endl;
    cin >> op;
    //limpa tela para melhor vizualização do usuário
    system("cls");
    //checagem de valores
    while(op != 1 && op != 2 && op != 3){
      cout << "Opcão invalida tente novamente:" << endl;
      cin >> op;
    }
    //subida
    if(op == 1){
      if(elevador.subir() == false){
        cout << "você ja está no ultimo andar" << endl;
      }
      else{
        cout << "Andar atual: " << elevador.get_andar() << endl;
      }
      cout << "Alguém vai entrar ou sair do elevador: (1) Sair (2) Entrar (3) Não" << endl;
      cin >> id;
      //checagem dos valores
      while(id != 1 && id != 2 && id != 3){
        cout << "Valor invalido insira novamente: " << endl;
        cin >> id;
      }

      if(id == 1){
        if(elevador.sai() == false){
          cout << "Não a ninguem no elevador" << endl;
        }
        else{
          cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
        }
      }
      if(id == 2){
        if(elevador.entra() == false){
          cout << "O elevador está cheio" << endl;
        }
        else{
          cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
        }
      }
      if(id == 3){
        cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
      }
    }
    //descida
    if(op == 2){
      if(elevador.desce() == false){
        cout << "Você está no terreo" << endl;
      }
      else {
        if(elevador.get_andar() > 0){
          cout << "Andar atual: " << elevador.get_andar() << endl;
        }
        else if(elevador.get_andar() == 0){
          cout << "Terreo: " << elevador.get_andar() << endl;
        }
      }
      cout << "Alguém vai entrar ou sair do elevador: (1) Sair (2) Entrar (3) Não" << endl;
      cin >> id;

      //checagem dos valores
      while(id != 1 && id != 2 && id != 3){
        cout << "Valor invalido insira novamente: " << endl;
        cin >> id;
      }

      if(id == 1){
        if(elevador.sai() == false){
          cout << "Não a ninguém no elevador" << endl;
        }
        else{
          cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
        }
      }
      if(id == 2){
        if(elevador.entra() == false){
          cout << "O elevador está cheio" << endl;
        }
        else{
          cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
        }
      }
      if(id == 3){
        cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
      }
    }
    if(op == 3){
      cout << "Insira (0) Para que todas as pessoas saiam do elevador" << endl;
      cin >> id;
      while(id != 0){
        cout << "Opcão invalida tente novamente: ";
        cin >> id;
      }
      if(id == 0){
        while (elevador.sai() == true) {
          elevador.sai();
        }
        cout << "Total de pessoas no elevador: " << elevador.get_pessoa() << endl;
        cout << "Evacuação Concluída" << endl;
        break;
      }
    }
  }
}
