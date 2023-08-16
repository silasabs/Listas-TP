#include <iostream>
#include <string>
#include <fstream>
#include "Professor.h"
using namespace std;

inline Professor::Professor() {
	disciplina = departamento = " ";
}

inline Professor::Professor(string nome, string matricula, string disciplina, string departamento)
 : Aluno (nome, matricula){
	this->disciplina = disciplina;
	this->departamento = departamento;
}

inline void Professor::setDisciplina(string disciplina) {
	this->disciplina = disciplina;
}

inline void Professor::setDepartamento(string departamento) {
	this->departamento = departamento;
}

inline string Professor::getDisciplina(){
	return disciplina;
}

inline string Professor::getDepartamento(){
	return departamento;
}

inline void Professor::imprimeDados(){
	cout << "Nome .................: " << getNome() << endl;
	cout << "Matricula ............: " << getMatricula() << endl;
	cout << "Disciplina ...........: " << getDisciplina() << endl;
	cout << "Departamento .........: " << getDepartamento() << endl;
}

inline void Professor::gerenciamentoArquivo(ofstream& file) {
	file << "2,";
	file << getNome();
	file << "," << getMatricula();
	file << "," << getDisciplina();
	file << "," << getDepartamento();
	file << "," << endl;
}

inline Professor::~Professor() {
	
}