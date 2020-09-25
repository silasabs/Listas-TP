/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 4� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 12
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA SIMULA UM AR-COMDICIONADO QUE CONTROLA A TEMPERATURA AMBIENTE
  DE ACORDO COM A POT�NCIA QUE SERA SELECIONADA PELO USU�RIO, UTILIZANDO INTERFACE
  E IMPLEMENTA��O.
*/
#include<iostream>
#include<clocale>
#include<iomanip>
#include "Comdicionador.cpp"
using namespace std;

int main()
{
    comdicionador c1, c2;
    float temp;
    int pot;
	
	//suporte a caracteres especiais 
    setlocale(LC_ALL, "Portuguese");
	
	//recebe o primeiro ar-comdicionado
    cout << "Insira a temperatura ambiente para o primeiro ar-comdicionado: ";
    cin >> temp;
    while (c1.setAmbiente(temp) == false){
        cout << "Temperatura ambiente invalida tente novamente: ";
        cin >> temp;
    }
    //recebe o terceiro ar-condicionado
    cout << "Insira a temperatura ambiente para o segundo ar-comdicionado: ";
    cin >> temp;
    while (c2.setAmbiente(temp) == false){
        cout << "Temperatura ambiente invalida tente novamente: ";
        cin >> temp;
    }
    
    cout << "Insira a pot�ncia que o primeiro ar-comdicionado deve operar: ";
    cin >> pot;
    while (c1.setPotencia(pot) == false){
        cout << "pot�ncia invalida entre com uma pot�ncia de 0 a 10: ";
        cin >> pot;
    }
    
	cout << "Insira a pot�ncia que o segundo ar-comdicionado deve operar: ";
    cin >> pot;
    while (c2.setPotencia(pot) == false){
        cout << "pot�ncia invalida entre com uma pot�ncia de 0 a 10: ";
        cin >> pot;
    }

    cout << fixed << setprecision(2);
    cout << "Nova temperatura ambiente informada pelo primeiro ar-comdicionado: " << c1.getTemp() << " C" << endl;
    cout << "Nova temperatura ambiente informada pelo segundo ar-comdicionado: " << c2.getTemp() << " C" << endl;

    return 0;
}