//criando o protótipo da classe derivada empregado
#ifndef Empregado_H
#define Empregado_H

class Empregado : public Pessoa {

        int numeroSecao, IR;
        double salarioBase;

    public:
        Empregado(string = " ", long int = 0, int = 0, int = 0, double = 0.0);
        void setNumeroSecao(int);
        void setIR(int);
        void setSalarioBase(double);
        void imprimeDados();
};

#endif