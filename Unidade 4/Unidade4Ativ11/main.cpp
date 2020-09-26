/*ALUNO: SILAS JO�O BEZERRA SOARES
  MATR�CULA: 119210904
  LISTA: 4� UNIDADE - Laborat�rio Virtual de Programa��o
  N� DA QUEST�O: 11
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA SIMULA REL�GIO, UTILIZANDO INTERFACE
  E IMPLEMENTA��O.
*/
#include<iostream>
#include<clocale>
#include<cstdlib>
#include<windows.h>
#include<iomanip>
#include "Relogio.cpp"
using namespace std;

int main(){
    
   Relogio h;
   int hora, minuto, segundo;
   //suporte a caracteres especiais 
   setlocale(LC_ALL, "Portuguese");

   cout << "Bem vindo ao Rel�gio Virtual" << endl;

   cout << "Insira a Hora: ";
   cin >> hora;
   
   while(hora < 0){
	   cout << "Hora invalida tente novamente: " << endl;
	   cin >> hora;
   }
   
   cout << "Insira os minutos: ";
   cin >> minuto;
   
   while(minuto < 0){
	   cout << "Minuto invalida tente novamente: " << endl;
	   cin >> minuto;
   }
   
   cout << "Insira os segundos: ";
   cin >> segundo;
   
   while(segundo < 0){
	   cout << "Minuto invalida tente novamente: " << endl;
	   cin >> segundo;
   }

   h.setHora(hora, minuto, segundo);

   while (true)
   {
       system("cls");
       h.avanca();
       h.getHora(hora, minuto, segundo);
       cout << "Hora Atual" << endl;
       cout << setfill('0') << setw(2) << hora << " : " << setw(2) << minuto << " : " << setw(2) << segundo;
       Sleep(1000);
   }
}