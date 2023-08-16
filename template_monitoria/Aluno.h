//Classe Base
#ifndef ALUNO_H
#define ALUNO_H
#include <fstream>
#include <string>

using namespace std;

class Aluno {
	private:
		string nome, matricula;
	public:
		//costrutor padrão
		Aluno();
		//sobrecarga do construtor padrão
		Aluno(string, string);
		//gerenciamento de arquivos
		virtual void gerenciamentoArquivo(ofstream&);
		virtual void imprimeDados();
		//setters
		void setNome(string);
		void setMatricula(string);
		
		//getters
		string getNome();
		string getMatricula();
		
		
		~Aluno();
		
};

#endif // ALUNO_H