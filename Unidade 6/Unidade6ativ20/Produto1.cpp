#include"ProdutoP1.h"

Produto1::Produto1(string nomeP1, double desconto, int estoqueP1, int estoqueU1) : Produto(nomeP1, desconto, estoqueP1){
    this->nomeP1 = nomeP1;
    this->estoqueP1 = estoqueP1;
    this->desconto = desconto;
    this->estoqueU1 = estoqueU1; 
}
//função que calcula desconto pelo lojista
void Produto1::calc(double c){
	double d = (desconto * c) / 100;
	desconto -= d;
}
//verifica estoque
bool Produto1::descontoP1(){
    if(estoqueU1 > estoqueP1){
 	    return true;
    }
    else if(estoqueU1 < estoqueP1){
        return false;
    }
return 0;
}
//metodos get
double Produto1::getPrecoP1() const{
    return desconto;
}

int Produto1::getEstoqueLim() const{
	return estoqueP1;
}

int Produto1::getEstoque() const{
	return estoqueU1;
}
//metodo de impressão
void Produto1::imprime(){
    cout << "Nome do Produto: " << nomeP1 << endl;
    cout << fixed << setprecision(2);
    cout << "Preço do produto: " << getPrecoP1() << " R$" << endl;
    cout << "Estoque Limite: " << getEstoqueLim() << endl;
    cout << "Estoque Atual: " << getEstoque() << endl;
}