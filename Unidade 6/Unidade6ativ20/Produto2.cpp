#include"ProdutoP2.h"
Produto2::Produto2(string nomeP2, double desconto2, int estoqueP2, int estoqueU2) : Produto(nomeP2, desconto2, estoqueP2){
    this->nomeP2 = nomeP2;
    this->estoqueP2 = estoqueP2;
    this->desconto2 = desconto2;
	this->estoqueU2 = estoqueU2;
}
//função cálcula preço final
void Produto2::calc2(double t){
	double d = (desconto2 * t) / 100;
	desconto2 -= d;
}
//função verifica estoque
bool Produto2::descontoP2(){
    if(estoqueU2 > estoqueU2){  
 	    return true;
    }
    else if(estoqueU2 < estoqueP2){
        return false;
    }
return 0;
}
//metodos gets
double Produto2::getPrecoP2() const{
    return desconto2;
}

int Produto2::getEstoqueLim2() const{
	return estoqueP2;
}

int Produto2::getEstoque2() const{
	return estoqueU2;
}
//metodo imprime
void Produto2::imprime2(){
    cout << "Nome do Produto: " << nomeP2 << endl;
    cout << fixed << setprecision(2);
    cout << "Preço do produto: " << getPrecoP2() << " R$" << endl;
    cout << "Limite de Estoque: " << getEstoqueLim2() << endl;
    cout << "Estoque Atual: " << getEstoque2() << endl;
}