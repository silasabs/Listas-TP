//Criando o prot�tipo da classe
#ifndef Rational_F
#define Rational_F
//criando a classe Rational
class Rational{
  private:
    int num, den;
  public:
    Rational();
    bool verifica(Rational, Rational);
    void set_fracao(int, int);
    void multiplica(Rational, Rational);
    void div(Rational, Rational);
    //metotos que imprimem a fração no formato a / b para inteiro ou ponto flutuante
    void imprimifloat();
    void imprimirinteiro();
    //metodos sets
    int get_numerador();
    int get_denominador();
};
#endif
