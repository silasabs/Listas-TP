#include <iostream>
#include <string>
#include <fstream>
#include "Aluno.h"
using namespace std;

inline Aluno::Aluno() {
	nome = matricula = " ";
}

inline Aluno::Aluno(string nomes, string matriculas) {
	nome = nomes;
	matricula = matriculas;
}

inline void Aluno::setNome(string nomes) {
	this->nome = nomes;
}

inline void Aluno::setMatricula(string matriculas) {
	this->matricula = matriculas;
}

inline string Aluno::getNome(){
	return nome;
}

inline string Aluno::getMatricula(){
	return matricula;
}

inline void Aluno::imprimeDados() {
	cout << "Nome ...........: " << getNome() << endl;
	cout << "Matricula ......: " << getMatricula() << endl;
}

inline void Aluno::gerenciamentoArquivo(ofstream& file) {
	file << "1," << getNome() << "," << getMatricula() << "," << endl;
}

inline Aluno::~Aluno() {
	
}