//Especificação da classe Novo
#include "Novo.h"
//passa os valores para o construtor da classe base
Novo::Novo(double preco, string endereco):Imovel(preco, endereco){
	this->preco = preco;
	this->endereco = endereco;
	taxa = 15;
}

//altera taxa caso o usuário solicite e calcula o preço
void Novo::setNovo(int t, double p){
	this->taxa = t;
	this->preco = p;
	preco = preco * (1 + double(taxa) / 100);
}

double Novo::getNovo() const{
	return preco;
}
//calcula preço com taxa fixa
void Novo::setNovoR(double p){
	this->preco = p;
	preco = preco * (1 + double(taxa) / 100);
}

void Novo::setEndereco(string s){
	this->endereco = s;
}

string Novo::getEndereco() const{
	return endereco;
}