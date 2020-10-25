#include"Empregado.h"
//construtor da classe derivada recebe os parametros da classe base e atributos da classe derivada
Empregado::Empregado(string nome, long int CPF, int numeroSecao, int IR, double salarioBase){
    this->numeroSecao = numeroSecao;
    this->IR = IR;
    this->salarioBase = salarioBase;
    setNome(nome);
    setCPF(CPF);
}

void Empregado::setNumeroSecao(int n){
    this->numeroSecao = n;
}

void Empregado::setIR(int n){
    this->IR = n;
}
//recebe o sal�rio e calcula o sal�rio l�quido 
void Empregado::setSalarioBase(double n){
    this->salarioBase = n;
    salarioBase = salarioBase * (1 - double(IR) / 100);
}
//imprimi todos os dados do empregado
void Empregado::imprimeDados(){
    imprimeNomeCPF();
    cout << "Numero de Se��o:.........." << numeroSecao << endl;
    cout << fixed << setprecision(2);
    cout << "Sal�rio Base:............." << salarioBase << endl;
}