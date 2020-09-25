//Prototipação da classe
#ifndef Comdicionador_H
#define Comdicionador_H
//criando a calsse comdicionador
class comdicionador{

private:
    float tempAmbiente;
    float potencia;

public:
    comdicionador();
    bool setAmbiente(float);
    bool setPotencia(int);
    float getTemp();
};
#endif