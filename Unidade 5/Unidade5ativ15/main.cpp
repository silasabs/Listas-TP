/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 5º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 15
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA ADICIONA O NOME DE PESSOAS A UMA LISTA DE TAMANHO DEFINIDO PELO USUÁRIO, 
  PODENDO SER IMPRESSA A QUALQUER MOMENTO POR ESTÁ COM ALOCAÇÃO DINÂMICA, ESSE PROGRAMA 
  SE UTILIZA DA BIBLIOTECA VECTOR COM ALOCAÇÃO DINÂMICA POR DEFAULT E COM A BIBLIOTECA 
  ALGORITHM PARA ORDENAÇÃO DAS STRINGS, ASSIM PODEMOS OTIMIZAR E CRIAR ALGORITMOS MENORES, 
  UTILIZANDO INTERFACE E IMPLEMENTAÇÃO.
*/
#include <iostream>
#include <cstdlib>
#include <clocale>
#include <string>
#include "Lista.cpp"
using namespace std;

int main()
{
    Nome li;
    int id, t;
    string n;

    setlocale(LC_ALL, "Portuguese");
    cout << "Insira o Tamanho da sua lista: ";
    cin >> t;
    li.setLista(t);

    while(true)
    {
        cout << "(1) Inserir Nome na lista" << endl;
        cout << "(2) Imprimir Lista" << endl;
        cout << "(3) Sair" << endl;

        cin >> id;
        
        system("cls");
        
        switch (id)
        {
        case 1:
            //verifica se o tamano da lista esta cheia
            if (li.verifica() == true)
            {
                cout << "Insira o nome da pessoa: " << endl;
                cin.ignore();
				getline(cin, n);
                li.inserir(n);
            }
            
			else
            {
                cout << "A lista está cheia" << endl;
            }
            break;

        case 2:
            cout << "Lista de pessoas em ordem alfabetica" << endl;
            cout << "================" << endl;
            li.printLista();
			break;

        case 3:
            break;
        
        default:
            cout << "Opção invalida !" << endl;
        }
		if(id == 3) break;
    }
}
