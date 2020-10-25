//Especificação da classe Novo
#include "Velho.h"

//passa os valores para o construtor da classe base
Velho::Velho(double preco, string endereco):Imovel(preco, endereco){
	this->preco = preco;
	this->endereco = endereco;
	taxav = 15;
}

//altera taxa caso o usuário solicite e calcula o preço
void Velho::setVelho(int t, double p){
	this->taxav = t;
	this->preco = p;
	preco = preco * (1 - double(taxav) / 100);
}

double Velho::getVelho() const{
	return preco;
}
//calcula preço com taxa fixa
void Velho::setVelhoR(double p){
	this->preco = p;
	preco = preco * (1 - double(taxav) / 100);
}

void Velho::setEnderecoV(string s){
	this->endereco = s;
}

string Velho::getEnderecoV() const{
	return endereco;
}