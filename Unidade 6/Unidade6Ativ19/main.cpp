/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 6� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 19
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA ARMAZENA DADOS REALTIVOS AOS USU�RIOS DE UM LABORAT�RIO, UTILIZANDO INTERFACE E IMPLEMENTA��O E HERAN�A
*/
#include<iostream>
#include<string>
#include<clocale>
using namespace std;
#include"Aluno.cpp"
#include"Professor.cpp"
#include"Usuario.cpp"

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	Aluno aluno("Silas Jo�o", "silas.soares@ee.ufcg.br", 20, "119210904", "Engenharia El�trica");
	Professor professor("Marcus Salerno de Aquino", "salerno.ufcg@gmail.com", 58, "Computa��o", 303);
	int op;
		
	//intera��o com o usu�rio
	cout << "Quem est� usando o Lab - Insira (1) Para Aluno ou (2) Para Professor" << endl;
	cin >> op;
	
	switch (op)
	{
	case 1:
		cout << "---------- Dados do Aluno ----------" << endl;
		//imprime todos os dados do usu�rio
		aluno.imprimeDadosAluno();
		break;
	
	case 2:
		cout << "---------- Dados do Professor ----------" << endl;
		//imprime todos os dados do usu�rio
		professor.imprimeDadosProfessor();
		break;
	
	default:
		cout << "op��o invalida !" << endl;
		return main();
		break;
	}
}