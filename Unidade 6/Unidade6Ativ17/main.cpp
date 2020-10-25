/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 6º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 17
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUNÇÃO RECEBER OS DADOS DO EMPREGADO E IMPRIMIR CÁLCULAR SEU SALÁRIO LÍQUIDO
  E IMPRIMIR TODAS AS INFORMAÇÕES, UTILIZANDO INTERFACE E IMPLEMENTAÇÃO E HERANÇA.
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
    
    //formulário
    cout << "Entre com o nome do funcionário: ";
    getline(cin, nome);
    e.setNome(nome);
    cout << "Insira seu Cpf: ";
    cin >> tcpf;
    e.setCPF(tcpf);
    cout << "Insira seu numero de seção: ";
    cin >> numeroSec;
    e.setNumeroSecao(numeroSec);
    cout << "Insira a percentagem retida para o imposto de renda (IR): ";
    cin >> IR;
    e.setIR(IR);
    cout << "Insira o seu salário base: ";
    cin >> salario;
    e.setSalarioBase(salario);
    cout << endl;
    //imprimi todos os dados
	e.imprimeDados();
}