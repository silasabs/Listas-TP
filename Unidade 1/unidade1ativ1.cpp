/*ALUNO: SILAS JOÃO BEZERRA SOARES
  LISTA: 1º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 01
  CÁLCULO DA DISTÂNCIA ENTRE DOIS PONTOS
*/
#include<iostream>
#include<math.h>
using namespace std;

//criando a estrutura ponto
	struct Ponto
	{
		int x, y;

	};

int main(){

  double dist;
  struct Ponto p1, p2;
  cout << "insira as coodenadas do primeiro ponto (x,y)" << endl;
  cin >> p1.x >> p1.y;
  cout << "insira as coodenadas do segundo ponto (x,y)" << endl;
  cin >> p2.x >> p2.y;

  dist = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
  cout << "Distância: " << dist << endl;

}
