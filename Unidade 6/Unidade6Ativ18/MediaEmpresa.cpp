#include"MediaEmpresa.h"

MediaEmpresa::MediaEmpresa(string nome, string cgc, double impostoM) : Empresa(nome, cgc){
	this->impostoM = impostoM;
}

double MediaEmpresa::getImposto() const{
	return impostoM;
}
//imprime dados da empresa
void MediaEmpresa::imprimeDadosM(){
	cout << "Nome da Empresa: " << getNome() << endl;
	cout << "CGC da Empresa: " << getCGC() << endl;
	cout << fixed << setprecision(3);
	cout << "Imposto Total a pagar: " << getImposto() << endl;
}