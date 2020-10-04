/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 5º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 13
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA CÁLCULA O RENDIMENTO MENSAL SOBRE A TAXA DE JUROS ANUAL E IMPRIMI O SALDO DOS CLIENTES, 
  UTILIZANDO INTERFACE E IMPLEMENTAÇÃO E MEMBROS STATIC.
*/
#include<iostream>
#include<clocale>
#include<iomanip>
#include "ContaPoupanca.cpp"
using namespace std;

int main(){
    ContaDePoupanca poupador1, poupador2, taxa;
    double t;
	int op;
	
    setlocale(LC_ALL, "Portuguese");
    cout << "Bem Vindo a conta Poupança " <<endl;
	
	//inicializa os saldos dos poupadores 
    poupador1.setSaldo(2000);
    poupador2.setSaldo(3000);
    
	cout << "Insira a taxa de juros: ";
    cin >> t;
    
	taxa.modifiqueTaxaDeJuros(t);
    poupador1.calculeRendimentoMensal();
    poupador2.calculeRendimentoMensal();
	    
    cout << fixed << setprecision(2);
    cout << "Saldo do poupador 1: " << poupador1.getSaldo() << endl;
    cout << "Saldo do poupador 2: " << poupador2.getSaldo() << endl;
    
    cout << "Deseja alterar os juros anuais e recalcular o saldo ? (1) Sim (2) Encerrar" << endl;
	cin >> op;
	   	
 	while(true){
		 
		 if(op == 1) return main(); 
		 
		 else if(op == 2) break;
		 
		 else if(op != 1 && op != 2){
			 while(op != 1 && op != 2){
				cout << "Opção invalida" << endl;
				cin >> op;
		    }
        }		 
    }
}