//criando o prototipo da classe derivada
#ifndef Velho_H
#define Velho_H
#include "Imovel.h"

//herdando Imovel
class Velho: public Imovel{
	 	
	private:
		int taxav;
	public:
		Velho(double, string);
		void setVelho(int, double);
		void setVelhoR(double);
		double getVelho() const;
		void setEnderecoV(string);
		string getEnderecoV() const;
};

#endif