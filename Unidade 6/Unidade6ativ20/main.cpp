#include<iostream>
#include<string>
#include<clocale>
#include<iomanip>
#include<cstdlib>
using namespace std;
#include"Produto1.cpp"
#include"Produto2.cpp"

int main(){

    int op;
	double descont;
	
    setlocale(LC_ALL, "Portuguese");
    
	//criando o primeiro produto com estoque maior que o padr�o
    Produto1 p1("Mochila", 65.00, 20, 21);
	//criando o segundo produto com estoque menor que o padr�o
    Produto2 p2("T�nis", 280.00, 30, 21);

    while(op != 3){
	 
		cout << "Insira um valor para acessar a informa��o de cada produto" << endl;
	    cout << "(1) Primeiro Produto " << endl;
	    cout << "(2) Segundo Produto " << endl;
	    cout << "(3) Sair" << endl;
	    cin >> op;
	    
		system("cls");
	
	    switch (op)
	    {
	    case 1:
	        if(p1.descontoP1() == true){
	            cout << "Entre com um desconto para o cliente" << endl;
	            cin >> descont;
	            p1.calc(descont);
	        }
	        else{
	            cout << "N�o ouve altera��o no pre�o do produto" << endl;
	        }
	        p1.imprime();
	        break;
	    
 	    case 2:
	    	 if(p2.descontoP2() == true){
	            cout << "Entre com um desconto para o cliente" << endl;
	            cin >> descont;
	            p2.calc2(descont);
	        }
	        else{
	            cout << "N�o ouve altera��o no pre�o do produto" << endl;
	        }
	        p2.imprime2();
	        break;
  		
		case 3:
			break;
		
	    default:
	        cout << "Op��o invalida !" << endl;
	        break;
	    }
	    system("pause");
	    system("cls");
	}
}