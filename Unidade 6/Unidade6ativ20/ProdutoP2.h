#ifndef Produto2X
#define Produto2X
#include"Produto.h"
class Produto2 : public Produto{

    double desconto2;
    int estoqueP2, estoqueU2;
    string nomeP2;

    public:
        Produto2(string = " ", double = 0.0, int = 0, int = 0);
        bool descontoP2();
        void calc2(double);
		void imprime2();
        double getPrecoP2() const;
        int getEstoqueLim2() const;
        int getEstoque2() const;
        
};
#endif