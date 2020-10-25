#include "Professor.h"

Professor::Professor(string nome, string email, int idade, string departamento, int numSala) : Usuario(nome, email, idade){
	this->departamento = departamento;
	this->numSala = numSala;
}

//metodo imprime dados
void Professor::imprimeDadosProfessor(){
	cout << "Nome: " << getNome() << endl;
	cout << "Idade: " << getIdade() << endl;
	cout << "Email: " << getEmail() << endl;
	cout << "Departamento: " << departamento << endl;
	cout << "Numero da sala: " << numSala << endl;
}