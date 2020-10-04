//Criando o prototipo da classe Empresa
#ifndef Empresa_H
#define Empresa_H
#include<iostream>
#include<string>
using namespace std;

class Empresa
{
private:
    string cnpj, nomeEmpresa;
    Funcionario *lista;
    static int dSize;
    int size;

public:
    //construtor
	Empresa();
    Empresa(int);
    //metodos
    void setSize(int);
    void setStart(string, string, int);
    bool cadFuncionario(Funcionario);
    void imprimiFolha();
    bool Aumento(int, double);
    string getNomeEmpresa() const;
    string getCnpj() const;
    //destrutor
	~Empresa();
}; 
#endif