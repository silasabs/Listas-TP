#include"Relogio_R.h"
//construtor
Relogio::Relogio(){
    hora = minuto = segundo = 0;
}
//metodo que adiciona valores ao relógio
void Relogio::setHora(int h, int m, int s){
    this->hora = h;
    this->minuto = m;
    this->segundo = s;
}
// retornar o horário atual, através de 3 variáveis passadas por referência
void Relogio::getHora(int &h, int &m, int &s){
    h = hora;
    m = minuto;
    s = segundo;
}

void Relogio::avanca(){
    //algoritmo para avançar as horas no relógio
    if (segundo < 59){
        segundo++;
    }
    else{
        segundo = 0;
        minuto++;
    }
    if (minuto > 59){
        minuto = 0;
        hora++;
    }
    else if (hora > 24){
        hora = 0;
    }
}
