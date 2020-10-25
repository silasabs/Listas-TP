//classe que herda Usuario
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include"Usuario.h"
class Professor : public Usuario{
	private:
		string departamento;
		int numSala;
	public:
		Professor(string = " ", string = " ", int = 0, string = " ", int = 0);
		void imprimeDadosProfessor();
};
#endif
