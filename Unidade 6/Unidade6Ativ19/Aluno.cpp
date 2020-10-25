#include "Aluno.h"

Aluno::Aluno(string nome, string email, int idade, string numMatricula, string curso) : Usuario(nome, email, idade){
	this->numMatricula = numMatricula;
	this->curso = curso;
}

//imprimi dados do Aluno
void Aluno::imprimeDadosAluno(){
	cout << "Nome: " << getNome() << endl;
	cout << "Idade: " << getIdade() << endl;
	cout << "Email: " << getEmail() << endl;
	cout << "Numero de Matricula: " << numMatricula << endl;
	cout << "Curso: " << curso << endl;
}