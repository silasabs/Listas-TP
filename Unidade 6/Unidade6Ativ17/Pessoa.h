//criando o protótipo da classe principal
#ifndef Pessoa_H
#define Pessoa_H

class Pessoa{

    string nome;
    long int CPF;

public:
    Pessoa(string = " ", long int = 0);
    void setNome(string);
    void setCPF(long int);
    void imprimeNomeCPF();
};

#endif