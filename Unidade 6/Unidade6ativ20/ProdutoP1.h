#ifndef Produto1X
#define Produto1X
#include"Produto.cpp"
class Produto1 : public Produto{

    double desconto;
    int estoqueP1, estoqueU1;
    string nomeP1;

    public:
        Produto1(string = " ", double = 0.0, int = 0, int = 0);
		bool descontoP1();
		void calc(double);
        void imprime();
        double getPrecoP1() const;
        int getEstoqueLim() const;
        int getEstoque() const;
};
#endif