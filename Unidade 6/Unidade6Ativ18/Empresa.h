//Classe Base
#ifndef EMPRESA_H
#define EMPRESA_H

class Empresa{
	private:
		string nome;
		string cgc;
	public: 
		Empresa(string = " ", string = " ");
		string getNome() const;
		string getCGC() const;
};
#endif