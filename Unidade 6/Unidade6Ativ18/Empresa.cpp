//Especificações da Classe base
#include"Empresa.h"

Empresa::Empresa(string n, string cgct){
	nome = n;
	cgc = cgct;
}

string Empresa::getNome() const{
	return nome;
}

string Empresa::getCGC() const{
	return cgc;
}