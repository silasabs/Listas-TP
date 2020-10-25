/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 6º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 18
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUNÇÃO IMPLEMENTAR UM SISTEMA DE COBRANÇA DE IMPOSTOS DE UMA EMPRESA DE MEDIO E PEQUENO PORTE,
  SENDO A DE PEQUENO PORTE VINCULADO AO SIMPLES ONDE E VERIFICADO SE ELA FAZ PARTE OU NÃO E CALCULANDO O IMPOSTO DA MESMA
  UTILIZANDO INTERFACE E IMPLEMENTAÇÃO, E HERANÇA.
*/
#include<iostream>
#include<string>
#include<clocale>
#include<iomanip>
using namespace std;
#include"MediaEmpresa.cpp"
#include"PequenaEmpresa.cpp"

int main(){
	int op, ir = 480.200;
	//inicializa as empresas
	PequenaEmpresa empresa("Micron", "02145870000", ir);
	MediaEmpresa empresa2("Ceitec - S.A", "021458700011", ir);
	
	setlocale(LC_ALL, "Portuguese");
	cout << "Insira (1) para porte pequeno ou (2) para porte médio: ";
	cin >> op;
	//verificação 
	while(op != 1 && op != 2){
		cout << "Opção invalida tente novamente: ";
		cin >> op;
	}
	
	switch(op){
		
		case 1:
			cout << "Sua Empresa faz parte do SIMPLES : (1) Sim (2) Não" << endl;
			cout << ">>> ";
			cin >> op;
			while(op != 1 && op != 2){
				cout << "Opção invalida tente novamente: ";
				cin >> op;
			}
			empresa.calcSimples(op);
			empresa.imprimeDados();
			break;
		
		case 2:
			empresa2.imprimeDadosM();
			break;
		
		default:
			cout << "Opção invalida !" << endl;
			break;
	}
}