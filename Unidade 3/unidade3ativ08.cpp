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
    void set_inicializa(int, int);
    bool entra();
    bool sai();
    bool subir();
    bool desce();
    int get_andar();
    int get_pessoa();
    int get_totalAndar();
    int get_capacidade();
};

//construtor inicializa os atributos
Elevador::Elevador(){
  andarAtual = 0; //começa no terreo
  capacidade = 0;
  andaresTotal = 0;
  pessoasAtual = 0;
}

void Elevador::set_inicializa(int capacidadeT, int andarT){
  this->capacidade = capacidadeT;
  this->andaresTotal = andarT;
}

bool Elevador::entra(){
  if(pessoasAtual == capacidade){
    return false;
  }
  else if(pessoasAtual < capacidade){
    this->pessoasAtual += 1;
    return true;
  }
}

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

int Elevador::get_andar(){
  return andarAtual;
}

int Elevador::get_pessoa(){
  return pessoasAtual;
}

int Elevador::get_totalAndar(){
  return andaresTotal;
}

int Elevador::get_capacidade(){
  return capacidade;
}

int main(){
    Elevador elevador;
    int var, var2, op, id;
    //suporte a caracteres especiais
    setlocale(LC_ALL, "portuguese");

    cout << "----- Configuração do Elevador -----" << endl;
    cout << "Insira a capacidade total de pessoas no elevador:" << endl;
    cin >> var;
    cout << "Insira os andares do edifício: " << endl;
    cin >> var2;
    //capacidade e andar total
    elevador.set_inicializa(var, var2);
    cout << "Seu edifício possui: " << elevador.get_totalAndar() << " Andares" << " e seu elevador tem suporte a: " << elevador.get_capacidade() << " Pessoas" << endl;

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
