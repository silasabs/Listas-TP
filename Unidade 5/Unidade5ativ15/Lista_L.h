//Criando o protótipo da classe
#ifndef Lista_L
#define Lista_L

#include<iostream>
using namespace std;
#include<string>

class Nome{

private:
    vector<string> lista;
    int sz;

public:
    //construtor
	Nome(int = 0);
    void setLista(int);
    void inserir(string);
    void printLista();
    bool verifica();
    //destrutor
	~Nome();
};
#endif