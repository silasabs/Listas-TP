/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 5� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 15
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA ADICIONA O NOME DE PESSOAS A UMA LISTA DE TAMANHO DEFINIDO PELO USU�RIO, 
  PODENDO SER IMPRESSA A QUALQUER MOMENTO POR EST� COM ALOCA��O DIN�MICA, ESSE PROGRAMA 
  SE UTILIZA DA BIBLIOTECA VECTOR COM ALOCA��O DIN�MICA POR DEFAULT E COM A BIBLIOTECA 
  ALGORITHM PARA ORDENA��O DAS STRINGS, ASSIM PODEMOS OTIMIZAR E CRIAR ALGORITMOS MENORES, 
  UTILIZANDO INTERFACE E IMPLEMENTA��O.
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
                cout << "A lista est� cheia" << endl;
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
            cout << "Op��o invalida !" << endl;
        }
		if(id == 3) break;
    }
}
