#include"Pessoa.h"
//construtor receber os parametros de nome e cpf
Pessoa::Pessoa(string nome, long int CPF){
    this->nome = nome;
    this->CPF = CPF;
}

void Pessoa::setNome(string name){
	this->nome = name;
}

void Pessoa::setCPF(long int cpf){
    this->CPF = cpf;
}

void Pessoa::imprimeNomeCPF(){
    cout << "Nome:............." << nome << endl;
    cout << "CPF:.............." << CPF << endl;
}
