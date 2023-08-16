#include <iostream>
#include <string>
#include <vector>
#include<fstream>
#include "Cadastro.h"
using namespace std;

inline Cadastro::Cadastro() {
	
}

inline Cadastro::Cadastro(vector<Aluno*> lista)
{
	this->lista = lista;
}

inline void Cadastro::cadastrar(Aluno* pessoa)
{
	lista.push_back(pessoa);
}

inline vector<Aluno*> Cadastro::getLista() const
{
	return lista;
}

inline void Cadastro::consultarDados() const {
	for(int i = 0; i < lista.size(); i++) {				
		lista[i]->imprimeDados();
		system("pause");
		system("cls");
	}
}

inline void Cadastro::salvarArquivo(ofstream& file) {
	for (int i = 0; i < lista.size(); i++) {
		lista[i]->gerenciamentoArquivo(file);
	}
}

// format "x,xxx,xxx,xxx"
inline vector<string> Cadastro::split(string str)
{
	string aux;
	char c;
	vector<string> vetor;
	
	for (int i = 0; i < str.size(); i++) {
		c = str[i];
		if (c == ',') {
			
			vetor.push_back(aux);
			aux = "";
		}
		else {
			aux += c;
		}
	}
	
	return vetor;
	
}

inline void Cadastro::lerArquivo(vector<string> vetor)
{
	Aluno* ptrAluno;
	vector<string> vetorAux;
	
	for (int i = 0; i < vetor.size(); i++) {
		
		string str = vetor[i];
		
		vetorAux = split(str);
		
		if (vetorAux[0] == "1"){
			ptrAluno = new Aluno(vetorAux[1], vetorAux[2]);
		}
		
		else {
			ptrAluno = new Professor(vetorAux[1], vetorAux[2], vetorAux[3], vetorAux[4]);
		}
		
		this->lista.push_back(ptrAluno);
	}
}