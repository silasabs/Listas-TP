#ifndef ProdutoX
#define ProdutoX
class Produto{
    
    string nome;
    double preco;
    int estoque;
    
    public:
        Produto(string = " ", double = 0.0, int = 0);
};
#endif