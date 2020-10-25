/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 6º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 16
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUNÇÃO RECEBER DOIS TIPOS DE IMÓVEL NOVO OU VELHO A ESCOLHA DO USUÁRIO
  E INSERIR SEU PREÇO QUE E CALCULADO POR UM PERCENTUAL FIXO OU DEFINIDO PELO USUÁRIO, UTILIZANDO 
  INTERFACE E IMPLEMENTAÇÃO E HERANÇA.
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
		cout << "Insira (1) para imóvel novo ou (2) para imovel velho" << endl;
		cin >> op;
	
		switch(op){
			
			case 1:
				cout << "Entre com o endereço:" << endl;
				cin.ignore();
				getline(cin, end);
				n.setEndereco(end);
				cout << "Entre com o preço do imovel: " << endl;
				cin >> preco;
			 	cout << "deseja mudar o valor da taxa ? (1 SIM) / (2 NÃO)" << endl;
			 	cin >> op;
			 	while(op != 1 && op != 2){
					 cout << "Opção invalida ! tente novamente" << endl;
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
					cout << "O endereço do imóvel eh: " << n.getEndereco() <<endl;
					cout << fixed << setprecision(2);
					cout << "O preço do imóvel eh: " << n.getNovo();
					cout << "Deseja rever o imóvel novamente ? (1 SIM) / (2 NÃO)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Opção invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				else if(op == 2){
					n.setNovoR(preco);
					cout << "O endereço do imóvel eh: " << n.getEndereco() <<endl; 
					cout << fixed << setprecision(2);
					cout << "O preço do imóvel eh: " << n.getNovo() << endl;
					cout << "Deseja rever o imóvel novamente ? (1 SIM) / (2 NÃO)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Opção invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				break;
			
			case 2:
				cout << "Entre com o endereço:" << endl;
				cin.ignore();
				getline(cin, end);
				v.setEnderecoV(end);
				cout << "Entre com o preço do imóvel: " << endl;
				cin >> preco;
			 	cout << "deseja mudar o valor da taxa ? (1 SIM) / (2 NÃO)" << endl;
			 	cin >> op;
			 	while(op != 1 && op != 2){
					 cout << "Opção invalida ! tente novamente" << endl;
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
					cout << "O endereço do imóvel eh: " << v.getEnderecoV() <<endl;
					cout << "O preço do imóvel eh: " << v.getVelho() << endl;
					cout << "Deseja rever o imóvel novamente ? (1 SIM) / (2 NÃO)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Opção invalida tente novamente: " << endl;
						cin >> id; 
					}
				}
				else if(op == 2){
					v.setVelhoR(preco);
					cout << "O endereço do imóvel eh: " << v.getEnderecoV() <<endl; 
					cout << "O preço do imóvel eh:" << v.getVelho() << endl;
					cout << "Deseja rever o imóvel novamente ? (1 SIM) / (2 NÃO)" << endl;
					cin >> id;
					if(id == 1){
						return main();
					}
					else if(id == 2){
						break;
					}
					while(id != 1 && id != 2){
						cout << "Opção invalida, tente novamente: " << endl;
						cin >> id; 
					}
				}	
				break;
			
			default:
				cout << "Opção invalida !" << endl;
				break;
		}
		if(id == 2) break;
		system("pause");
		system("cls");
	}
}