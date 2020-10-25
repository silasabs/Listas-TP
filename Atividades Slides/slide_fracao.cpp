#include <iostream>
using namespace std;

struct fracao{
    int num, den;
};

//divisão por 0
void mmc0(fracao n1, fracao n2){
    
  for(int i = 0; i < 1; i++){
    if(n1.den == 0 || n2.den == 0){
      cout << "Não a divisão por 0" << endl;
      break;
    }
  }
}


//função mmc
fracao mmc(fracao n1, fracao n2){
  
  int mmc = (n1.den)*(n2.den);
  fracao resp1;
  
  if(n1.den == n2.den){
    resp1.den = n1.den;
    return resp1;
  }
  else {
    resp1.den = mmc;
    return resp1;
  }
  
}

//função soma
fracao soma(fracao n1, fracao n2){
  fracao resp2;
  int aux1 = ((n1.den)*(n2.num)) + ((n2.den)*(n1.num));
  resp2.num = aux1;
  return resp2;
}

//função Multiplicação
fracao multiplicar(fracao n1, fracao n2){
  fracao resp3;
  int aux1 = (n1.num)*(n2.num);
  resp3.num = aux1;
  return resp3;
}

//função subtração
fracao subtrair(fracao n1, fracao n2){
  fracao resp4;
  //ordem inversa da soma.
  int aux1 = ((n2.den)*(n1.num)) - ((n1.den)*(n2.num));
  resp4.num = aux1;
  return resp4;
}

//função divisão
fracao dividir(fracao n1, fracao n2){
  fracao resp5;
  int aux1 = (n1.num)*(n2.den);
  resp5.num = aux1;
  return resp5; 
}

//denominador da divisão
fracao denominadordiv(fracao n1, fracao n2){
  fracao resp6;
  int aux1 = (n1.den)*(n2.num);
  resp6.den = aux1;
  return resp6;
}

int main() {

  struct fracao num1, num2, n, d;
    
    int id;
    cout << "Insira a primeira fração: " << endl;
    cin >> num1.num;
    cin >> num1.den;
    cout << "Insira a segunda fração: " << endl;
    cin >> num2.num;
    cin >> num2.den;
    
    for(int i = 0; i < 1; i++){
      if(num1.den == 0 || num2.den == 0){
        mmc0(num1,num2);
        break;
      }
    
    //tabela de operações
    cout << "insira abaixo a operação que deseja fazer" << endl;
    
    cout << "(1) Soma " << endl;
    cout << "(2) Multiplicação " << endl;
    cout << "(3) Subtração " << endl;
    cout << "(4) Divisão " << endl;
    cout << "(5) Sair " << endl;
    cin >> id;
    }
    
    for(int i = 0; i < 1; i++){
    if(id == 1){
      d = soma(num1,num2);
      n = mmc(num1,num2);
      cout << "Fração: " << d.num << " / " << n.den << endl;
    }
    else if(id == 2){
      d = multiplicar(num1,num2);
      n = mmc(num1,num2);
      cout << "Fração: " << d.num << " / " << n.den << endl;
    }
    else if(id == 3){
      d = subtrair(num1,num2);
      n = mmc(num1,num2);
      cout << "Fração: " << d.num << " / " << n.den << endl;
    }
    else if(id == 4){
      d = dividir(num1,num2);
      n = denominadordiv(num1,num2);
      cout << "Fração: " << d.num << " / " << n.den << endl;
    }
    else if(id == 5){
      break;
    }
  }

return 0;  
}