//Classe derivada de Empresa
#ifndef MEDIAEMPRESA_H
#define MEDIAEMPRESA_H
#include"Empresa.h"

class MediaEmpresa : public Empresa{
	private:
		double impostoM;
	public:
		MediaEmpresa(string = " ", string = " ", double = 0.0);
		double getImposto() const;
		void imprimeDadosM();
};
#endif