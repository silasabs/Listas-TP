/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 6� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 17
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUN��O RECEBER OS DADOS DO EMPREGADO E IMPRIMIR C�LCULAR SEU SAL�RIO L�QUIDO
  E IMPRIMIR TODAS AS INFORMA��ES, UTILIZANDO INTERFACE E IMPLEMENTA��O E HERAN�A.
*/
#include<iostream>
#include<string>
#include<iomanip>
#include<clocale>
using namespace std;
#include"Pessoa.cpp"
#include"Empregado.cpp"

int main(){
    
    Empregado e;
    string nome;
    long int tcpf;
    int IR, numeroSec;
    double salario;
	
	//suporte a caracteres especiais 
    setlocale(LC_ALL, "Portuguese");
    
    //formul�rio
    cout << "Entre com o nome do funcion�rio: ";
    getline(cin, nome);
    e.setNome(nome);
    cout << "Insira seu Cpf: ";
    cin >> tcpf;
    e.setCPF(tcpf);
    cout << "Insira seu numero de se��o: ";
    cin >> numeroSec;
    e.setNumeroSecao(numeroSec);
    cout << "Insira a percentagem retida para o imposto de renda (IR): ";
    cin >> IR;
    e.setIR(IR);
    cout << "Insira o seu sal�rio base: ";
    cin >> salario;
    e.setSalarioBase(salario);
    cout << endl;
    //imprimi todos os dados
	e.imprimeDados();
}