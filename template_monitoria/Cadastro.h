//Classe com os metodos principais.
#ifndef CADASTRO_H
#define CADASTRO_H

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include "Aluno.cpp"
#include "Professor.cpp"
using namespace std;


class Cadastro {
	private:
		vector<Aluno*> lista;
	public:
		//costrutor Padrão
		Cadastro();
		//Sobrecarga do Costrutor Padrão.
		Cadastro(vector<Aluno*>);
		
		//Metodos de classe
		void cadastrar(Aluno*);
		void consultarDados() const;
		//void remover();
		//void consultar() const;
		//void pesquisar() const;
		void lerArquivo(vector<string>);
		vector<string> split(string);
		void salvarArquivo(ofstream&);
		//void ordena();
		
		//Getters
		vector<Aluno*> getLista() const;	
};

#endif // CADASTRO_H