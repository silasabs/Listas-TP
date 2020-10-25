/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 6º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 19
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA ARMAZENA DADOS REALTIVOS AOS USUÁRIOS DE UM LABORATÓRIO, UTILIZANDO INTERFACE E IMPLEMENTAÇÃO E HERANÇA
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
	Aluno aluno("Silas João", "silas.soares@ee.ufcg.br", 20, "119210904", "Engenharia Elétrica");
	Professor professor("Marcus Salerno de Aquino", "salerno.ufcg@gmail.com", 58, "Computação", 303);
	int op;
		
	//interação com o usuário
	cout << "Quem está usando o Lab - Insira (1) Para Aluno ou (2) Para Professor" << endl;
	cin >> op;
	
	switch (op)
	{
	case 1:
		cout << "---------- Dados do Aluno ----------" << endl;
		//imprime todos os dados do usuário
		aluno.imprimeDadosAluno();
		break;
	
	case 2:
		cout << "---------- Dados do Professor ----------" << endl;
		//imprime todos os dados do usuário
		professor.imprimeDadosProfessor();
		break;
	
	default:
		cout << "opção invalida !" << endl;
		return main();
		break;
	}
}