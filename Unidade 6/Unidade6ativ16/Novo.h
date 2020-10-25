//criando o prototipo da classe derivada
#ifndef Novo_H
#define Novo_H
#include "Imovel.cpp"

//herdando Imovel
class Novo: public Imovel{
	 	
	private:
		int taxa;
	public:
		Novo(double, string);
		void setNovo(int, double);
		void setNovoR(double);
		double getNovo() const;
		void setEndereco(string);
		string getEndereco() const;
};

#endif