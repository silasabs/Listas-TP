//classe que herda Usuario
#ifndef ALUNO_H
#define ALUNO_H
#include"Usuario.h"
class Aluno : public Usuario{
	private:
		string numMatricula;
		string curso;
	public:
		//construtor
		Aluno(string = " ", string = " ", int = 0, string = " ", string = " ");
		void imprimeDadosAluno();
};
#endif