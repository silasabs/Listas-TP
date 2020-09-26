//criando o protótipo da classe
#ifndef Relogio_R
#define Relogio_R
//criando a classe Relogio
class Relogio{

    private:
        int hora, minuto, segundo;

    public:
        Relogio();
        void setHora(int, int, int);
        void avanca();
        void getHora(int &, int &, int &);
};
#endif