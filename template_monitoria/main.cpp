#include <iostream>
#include <stdlib.h>
#include <clocale>
#include <fstream>
#include <vector>
#include "Cadastro.cpp"
//#include "Professor.cpp"
using namespace std;
/*
void imprimeMenu();
ifstream : classe de fluxo para ler arquivos
ofstream : classe de fluxo para gravar em arquivos
*/
int main()

{
	
	string nomeA, matA, depart, disci;
	string input;
	
	Cadastro cadastro;
	//inserindo arquivo
	ifstream file("outfile.txt");
	
	vector<string> vetor;
	
	Aluno* ptr = NULL; //aloca todas as classes ponteiro de classe base.
	bool loop = true;
		
	setlocale(LC_ALL, "Portuguese");
	
	
	while (file >> input)
	{
		vetor.push_back(input);
	}
	
	//realiza leitura do arquivo
	cadastro.lerArquivo(vetor);
	
	file.close();
	
	while(loop)
	{      
		//imprimiMenu();   
		cout << "Projeto Exemplo" << endl;
		cout << "1 - Cadastrar" << endl;
		cout << "2 - Consultar Lista " << endl;
		cout << "3 - Pesquisar" << endl;
		cout << "4 - Remover" << endl;
		cout << "5 - Ordenar Lista" << endl;
		cout << "6 - Sair" << endl;   
	
		int op;
		cin >> op;
		system("cls");


		switch(op)
		{
			case 1:
			
				cout << "(2) - Aluno" << endl;
				cout << "(1) - Professor" << endl;
				cout << "insira uma opção" << endl;
				cin >> op;
				
				if(op == 1){
					
					Professor pro;
					
					cin.ignore();
					cout << "Insira seu Nome: " << endl;
					getline(cin, nomeA);
			   		cout << "Insira sua Matrícula: " << endl;
	  				cin >> matA;
			   		cout << "Insira sua disciplina: " << endl;
			   		cin >> disci;
			   		cout << "Insira seu departamento: " << endl;
			   		cin >> depart;
					
					pro.setNome(nomeA);
			   		pro.setMatricula(matA);
			   		pro.setDisciplina(disci);
			   		pro.setDepartamento(depart);
			   		
			   		ptr = new Professor(nomeA, matA, disci, depart);
			   		cadastro.cadastrar(ptr);
				
				   	cout << "Professor Cadastrado com Sucesso" << endl;
					
				}
				
				else if(op == 2){
					
					Aluno al;
		   		
					cout << "Insira seu Nome: " << endl;
			   		
					cin.ignore();
					getline(cin, nomeA);
			   		cout << "Insira sua Matrícula: " << endl;
	  				cin >> matA;
			   		
			   		al.setNome(nomeA);
			   		al.setMatricula(matA);
			   		
			   		ptr = new Aluno(nomeA, matA);
			   		cadastro.cadastrar(ptr);
					
					cout << "Aluno Cadastrado com Sucesso" << endl;
				
				}
	   			break;
		     	
		   	case 2:
		   		cout << "Lista ------------------" << endl;
				cadastro.consultarDados();
		   		break;
		   	
		   	case 3:
		   		
		   		break;
		   	
		   	case 4:
		   		
		   		break;
		   	
		   	case 5:
		   		
		   		break;
		   	
		   	case 6:
		   		loop = false;
		   		break;
		   	
		   	default:
		   		cout << "Opção invalida" << endl;
		   		break;
	   }
       system("pause");
	   system("cls");	
	}
	cout << "Salvando a lista em um arquivo..." << endl;
	//gera o arquivo
	ofstream ofile("outfile.txt");
	cadastro.salvarArquivo(ofile);
	ofile.close();
	cout << "Arquivo salvado com sucesso!" << endl;
	
	system("pause");
	system("cls");
	
	return 0;
}
/*
void imprimeMenu() {
	//Menu
	cout << "Projeto Exemplo" << endl;
	cout << "1 - Cadastrar" << endl;
	cout << "2 - Consultar" << endl;
	cout << "3 - Pesquisar" << endl;
	cout << "4 - Remover" << endl;
	cout << "5 - Ordenar Lista" << endl;
	cout << "6 - Sair" << endl;
}
*/