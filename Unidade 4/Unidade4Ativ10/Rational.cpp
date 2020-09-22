//Especifica��o da classe
#include<iostream>
using std::cout;
using std::endl;
#include<iomanip>
using std::fixed;
using std::setprecision;
#include "Rational_F.h"
//construtor inicializando numerador e denominador
Rational::Rational(){
  num = 1;
  den = 1;
}
//verifica se n�o a divis�o por 0 em nenhuma das fra��es
bool Rational::verifica(Rational n1, Rational n2){
  if(n1.den == 0 || n2.den == 0){
      return false;
  }
  else return true;
}
//adiciona os valores das fra��es
void Rational::set_fracao(int n1, int n2){
  this->num = n1;
  this->den = n2;
}
//fun��o que multiplica as fra��es
void Rational::multiplica(Rational f1, Rational f2){
  int numerador = f1.num * f2.num;
  int denominador = f1.den * f2.den;
  this->num = numerador;
  this->den = denominador;
}
//fun��o que dividi as fra��es
void Rational::div(Rational f1, Rational f2){
  int denominador = (f1.den)*(f2.num);;
  int numerador = (f1.num)*(f2.den);
  this->num = numerador;
  this->den = denominador;
}

//retorna denominador
int Rational::get_denominador(){
  return den;
}
//retorna numerador
int Rational::get_numerador(){
  return num;
}
//metodo para impressão no formato a / b
void Rational::imprimirinteiro(){
  //apresenta a fra��o com 2 casas decimais
  cout << fixed << setprecision(2);
  cout << "Resultado: " << get_numerador() << " / " << get_denominador() << endl;
}
//metodo para impress�o no formato a / b
void Rational::imprimifloat(){
  //apresenta a fra��o com 2 casas decimais
  cout << fixed << setprecision(2);
  cout << "Resultado: " << (double)get_numerador() << " / " << (double)get_denominador() << endl;
}
