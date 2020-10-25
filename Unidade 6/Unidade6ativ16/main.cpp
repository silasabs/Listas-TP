/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 6� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 16
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUN��O RECEBER DOIS TIPOS DE IM�VEL NOVO OU VELHO A ESCOLHA DO USU�RIO
  E INSERIR SEU PRE�O QUE E CALCULADO POR UM PERCENTUAL FIXO OU DEFINIDO PELO USU�RIO, UTILIZANDO 
  INTERFACE E IMPLEMENTA��O E HERAN�A.
*/
#include<iostream>
#include<string>
#include<clocale>
#include<iomanip>
#include<cstdlib>
using namespace std;
#include "Novo.cpp"
#include "Velho.cpp"

int main(){
	int op, id, taxa;
	double preco;
	string end;
	Novo n(preco, end);
	Velho v(preco, end);
	
	setlocale(LC_ALL, "Portuguese");
	
	while(true){
		cout << "Insira (1) para im�vel novo ou (2) para imovel velho" << endl;
		cin >> op;
	
		switch(op){
			
			case 1:
				cout << "Entre com o endere�o:" << endl;
				cin.ignore();
				getline(cin, end);
				n.setEndereco(end);
				cout << "Entre com o pre�o do imovel: " << endl;
				cin >> preco;
			 	cout << "deseja mudar o valor da taxa ? (1 SIM) / (2 N�O)" << endl;
			 	cin >> op;
			 	while(op != 1 && op != 2){
					 cout << "Op��o invalida ! tente novamente" << endl;
					 cin >> op;
				 }
				if(op == 1){
					cout << "Insira o valor da taxa: " << endl;
					cin >> taxa;
					while(taxa < 0){
						cout << "Valor invalido ! tente novamente: " << endl;
						cin >> taxa;
					}
					n.setNovo(taxa, preco);
					cout << "O endere�o do im�vel eh: " << n.getEndereco() <<endl;
					cout << fixed << setprecision(2);
					cout << "O pre�o do im�vel eh: " << n.getNovo();
					cout << "Deseja rever o im�vel novamente ? (1 SIM) / (2 N�O)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Op��o invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				else if(op == 2){
					n.setNovoR(preco);
					cout << "O endere�o do im�vel eh: " << n.getEndereco() <<endl; 
					cout << fixed << setprecision(2);
					cout << "O pre�o do im�vel eh: " << n.getNovo() << endl;
					cout << "Deseja rever o im�vel novamente ? (1 SIM) / (2 N�O)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Op��o invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				break;
			
			case 2:
				cout << "Entre com o endere�o:" << endl;
				cin.ignore();
				getline(cin, end);
				v.setEnderecoV(end);
				cout << "Entre com o pre�o do im�vel: " << endl;
				cin >> preco;
			 	cout << "deseja mudar o valor da taxa ? (1 SIM) / (2 N�O)" << endl;
			 	cin >> op;
			 	while(op != 1 && op != 2){
					 cout << "Op��o invalida ! tente novamente" << endl;
					 cin >> op;
				}
				if(op == 1){
					cout << "Insira o valor da taxa: " << endl;
					cin >> taxa;
					while(taxa < 0){
						cout << "Valor invalido ! tente novamente: " << endl;
						cin >> taxa;
					}
					v.setVelho(taxa, preco);
					cout << "O endere�o do im�vel eh: " << v.getEnderecoV() <<endl;
					cout << "O pre�o do im�vel eh: " << v.getVelho() << endl;
					cout << "Deseja rever o im�vel novamente ? (1 SIM) / (2 N�O)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Op��o invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				else if(op == 2){
					v.setVelhoR(preco);
					cout << "O endere�o do im�vel eh: " << v.getEnderecoV() <<endl; 
					cout << "O pre�o do im�vel eh:" << v.getVelho() << endl;
					cout << "Deseja rever o im�vel novamente ? (1 SIM) / (2 N�O)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Op��o invalida, tente novamente: " << endl;
						cin >> id; 
					}
				}	
				break;
			
			default:
				cout << "Op��o invalida !" << endl;
				break;
		}
		if(id == 2) break;
		system("pause");
		system("cls");
	}
}