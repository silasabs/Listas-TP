#include <iostream>
#include <locale>

using namespace std;

struct Fracao
{
	int numerador;
	int denominador;	
};

void simplificador(int, int);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	Fracao f1, f2;
	
	cout << "Primeira fra��o.\n\n"
		<< "Numerador: ";
	cin >> f1.numerador;
	cout << "Denominador: ";
	cin >> f1.denominador;
	
	cout << "\nSegunda fra��o.\n\n"
		<< "Numerador: ";
	cin >> f2.numerador;
	cout << "Denominador: ";
	cin >> f2.denominador;
	
	cout << "\nSoma: ";
	simplificador(((f1.numerador * f2.denominador) + (f2.numerador * f1.denominador)), (f1.denominador * f2.denominador));
	cout << "\nSubtra��o: ";
	simplificador(((f1.numerador * f2.denominador) - (f2.numerador * f1.denominador)), (f1.denominador * f2.denominador));
	cout << "\nMultiplica��o: ";
	simplificador((f1.numerador * f2.numerador), (f1.denominador * f2.denominador));
	cout << "\nDivis�o: ";
	simplificador((f1.numerador * f2.denominador), (f2.numerador * f1.denominador));
	
	return 0;
}

void simplificador(int num, int den)
{
	for(int i(100); i > 0; i--)
	{
		if(num % i == 0 && den % i == 0)
		{
			num /= i;
			den /= i;
		}
	}
	
	if(num == den)
		cout << 1 << endl;
	else if(num == 0 || den == 0)
		cout << 0 << endl;
	else
		cout << num << " / " << den << endl;
}
