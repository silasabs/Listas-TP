//Criando o prototipo da classe Funcionario
#ifndef Funcionario_H
#define Funcionario_H
#include<iostream>
#include<string>
using namespace std;

class Funcionario
{
private:
    string nome, data;
    int departamento;
    double salario;

public:
    //costrutor
	Funcionario();
    //metodos 
	void setNome(string);
    void setData(string);
    void setDepartamento(int);
    void setSalario(double);
    string getNome() const;
    string getData() const;
    int getDepartamento() const;
    double getSalario() const;
};
#endif