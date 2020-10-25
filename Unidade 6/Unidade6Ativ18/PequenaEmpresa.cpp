#include"PequenaEmpresa.h"

PequenaEmpresa::PequenaEmpresa(string nome, string cgc, double imposto) : Empresa(nome, cgc){
	this->imposto = imposto;
	flag = " ";
	desconto = 0.0;
}
//realiza o cálculo do imposto para empresa simples
void PequenaEmpresa::calcSimples(int id){
	if(id == 1){
		desconto = imposto - 0.7;
		flag = "SIM";
	}
	else if(id == 2){
		desconto = imposto - 0.5;
		flag = "NAO";
	}
}

double PequenaEmpresa::getSimples() const{
	return imposto;
}

string PequenaEmpresa::getFlag() const{
	return flag;
}

double PequenaEmpresa::getDesconto() const{
	return desconto;
}
//imprime os dados da empresa
void PequenaEmpresa::imprimeDados(){
	cout << "Faz parte do SIMPLES: " << getFlag() << endl;
	cout << "Nome da Empresa: " << getNome() << endl;
	cout << "CGC da Empresa: " << getCGC() << endl;
	cout << fixed << setprecision(3);
	cout << "Imposto: " << getSimples() << endl;
	cout << "Desconto Imposto Total a pagar: " << getDesconto() << endl;
}