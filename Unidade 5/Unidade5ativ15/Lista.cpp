//Especificação da classe
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Lista_L.h"
using namespace std;

//lista dinamicamente alocada no construtor de acordo com o parametro de tamanho
Nome::Nome(int sz)
{
    lista.resize(sz);
}
//recebe valor do tamanho da lista
void Nome::setLista(int size)
{
    this->sz = size;
}
//inserir novo nome na lista
void Nome::inserir(string nome)
{
    lista.push_back(nome);
}
//metodo que faz a ordenação para a impressao em ordem alfabéfica utilizando a função sort 
void Nome::printLista()
{
    for (int i = 0; i < lista.size(); i++)
    {
        sort(lista.begin(), lista.end());
        cout << lista[i] << endl;
    }
}
//metodo que verifica se a lista esta cheia
bool Nome::verifica(){
    for (int i = 0; i < sz; i++){
        if (lista.size() == sz){
            return false;
        }
        else
            return true;
    }
}
//destrutor
Nome::~Nome(){
    lista.clear();
}