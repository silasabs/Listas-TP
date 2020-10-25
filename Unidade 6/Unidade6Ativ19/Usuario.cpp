#include "Usuario.h"
Usuario::Usuario(string n, string em, int id){
	nome = n;
	email = em;
	idade = id;
}

//metodos get
string Usuario::getNome()const{
	return nome;
}

string Usuario::getEmail()const{
	return email;
}

int Usuario::getIdade()const{
	return idade;
}