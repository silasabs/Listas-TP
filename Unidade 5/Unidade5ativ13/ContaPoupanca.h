//Prototipação da classe
#ifndef ContaPoupanca_H
#define COntaPoupanca_H
//criando a classe ContaDePoupanca
class ContaDePoupanca{
   
    private:
        double saldoDaPoupanca;
        static double taxaDeJurosAnual;
    public:
        ContaDePoupanca();
        void calculeRendimentoMensal();
        void static modifiqueTaxaDeJuros(double);
        void setSaldo(double);
        double getSaldo() const;
};

#endif