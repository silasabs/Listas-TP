//Prototipação da classe
#ifndef arcondicionado_H
#define arcondicionado_H
//criando a classe arcondicionado
class arcondicionado{

private:
    float tempAmbiente;
    float potencia;

public:
    arcondicionado();
    bool setAmbiente(float);
    bool setPotencia(int);
    float getTemp();
};
#endif