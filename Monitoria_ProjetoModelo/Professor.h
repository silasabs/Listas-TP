//Classe Derivada
#ifndef PROFESSORF_H
#define PROFESSORF_H
#include <iostream>
#include <fstream>
#include "Aluno.h"
using namespace std;

class Professor : public Aluno {
	private:
		string disciplina, departamento;
	public:
		//costrutor padrão
		Professor();
		//sobrecarga do construtor padrão
		Professor(string, string, string, string);
		//gerenciamento de arquivos
		void gerenciamentoArquivo(ofstream&);
		void imprimeDados();
		//setters
		void setDisciplina(string);
		void setDepartamento(string);
		
		//getters
		string getDisciplina();
		string getDepartamento();
		
		
		~Professor();
		
};

#endif // PROFESSOR_H