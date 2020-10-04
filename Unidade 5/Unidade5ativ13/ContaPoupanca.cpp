
#include "ContaPoupanca.h"
//construtor
ContaDePoupanca::ContaDePoupanca(){
    saldoDaPoupanca = taxaDeJurosAnual = 0;
}

double ContaDePoupanca::taxaDeJurosAnual = 0;

//metodo que cálcula rendimento mensal
void ContaDePoupanca::calculeRendimentoMensal(){
    double rendimento = (saldoDaPoupanca * taxaDeJurosAnual) / 12;
    this->saldoDaPoupanca += rendimento;
}
//metodo que recebe e inicializa a taxa de juros anual 
void ContaDePoupanca::modifiqueTaxaDeJuros(double taxa){
    taxaDeJurosAnual = taxa / 100;
}
//metodo que recebe saldo
void ContaDePoupanca::setSaldo(double saldo){
    this->saldoDaPoupanca = saldo;
}
//retorna saldo da conta poupança
double ContaDePoupanca::getSaldo() const{
    return saldoDaPoupanca;
}