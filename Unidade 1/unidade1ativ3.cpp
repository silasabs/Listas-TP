/*ALUNO: SILAS JOÃO BEZERRA SOARES
  LISTA: 1º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 03
  CONVERTER TEMPERATURA DE CELCIUS PARA FAHRENHEIT OU DE FAHRENHEIT PARA CELCIUS
*/
#include<iostream>
#include<iomanip>
using namespace std;

//criando o union
union temperatura {
    float celcius;
    float fahrenheit;
};

//função que converte celcius para fahrenheit
float convcel(float temp){
    float eq = (temp * 9/5) + 32;
    return eq;

}

//função que converte fahrenheit para celcius
float convfa(float temp2){
    float eq2 = (temp2 - 32) * 5/9;
    return eq2;
}

int main(){

    float res1, res2;
    temperatura t1, t2;
    int id;
    
    cout << "Insira (1) para converter celcius para fahrenheit" << endl;
    cout << "Insira (2) para converter fahrenheit para celcius" << endl;
            
    cin >> id;
      
    if(id == 1){
        cout << "insira a temperatura em Celcius" << endl;
        cin >> t1.celcius;
        res1 = convcel(t1.celcius);
          
        //define quantas casas de precisão
        cout << fixed << setprecision(2);
        cout << "A temperatura de Celcius para Fahrenheit e: " << res1 << " F" << endl;
    }
    else if(id == 2){
        cout << "insira a temperatura em Fahrenheit" << endl;
        cin >> t2.fahrenheit;
        res2 = convfa(t2.fahrenheit);
        cout << fixed << setprecision(2);
        cout << "A temperatura de Fahrenheit para Celcius e: " << res2 << " C" << endl;
    }
return 0;
}