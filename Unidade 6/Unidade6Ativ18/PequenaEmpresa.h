//Classe derivada de Pequena Empresa
#ifndef PEQUENAEMPRESA_H
#define PEQUENAEMPRESA_H
#include"Empresa.cpp"

class PequenaEmpresa : public Empresa{
	private:
		double imposto, desconto;
		string flag;
	public:
		PequenaEmpresa(string = " ", string = " ", double = 0.0);
		void calcSimples(int);
		double getSimples() const;
		void imprimeDados();
		double getDesconto() const;
		string getFlag() const;
};
#endif