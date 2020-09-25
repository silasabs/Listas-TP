#include <iostream>
#include "arcondicionado.h"

//construtor
arcondicionado::arcondicionado(){
    tempAmbiente = 0;
    potencia = -1.8; //primeira potência -1.8C
}
//metodo que recebe temperatura ambiente
bool arcondicionado::setAmbiente(float temp){
    if (temp <= 0.0){
        return false;
    }
    else{
        this->tempAmbiente = temp;
        return true;
    }
}
//metodo seleciona a potencia e calcula nova temperatura ambiente
bool arcondicionado::setPotencia(int p){
    //verifica intervalo entre potências [1,10]
    if (p <= 0 || p > 10){
        return false;
    }
    else{
        this->tempAmbiente += (potencia * p);
        return true;
    }
}
//metodo retorna temperatura ambiente atual
float arcondicionado::getTemp(){
    return tempAmbiente;
}