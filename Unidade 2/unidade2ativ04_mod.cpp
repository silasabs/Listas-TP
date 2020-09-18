/*ALUNO: SILAS JOÃO BEZERRA SOARES
  LISTA: 2º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 04
  CÁLCULO DA ÁREA, PERÍMETRO, LARGURA E ALTURA DE UM RETÂNGULO E VERIFICAÇÃO DA EXISTÊNCIA DE UM QUADRADO.
*/
#include<iostream>
#include<cmath>
using namespace std;

//criando a class retangulo
class Retangulo{

	int pix,piy,psx, psy;
	bool checar(int,int,int,int);

  public:
  //metodos
  void setValores(int, int, int, int);
  int comprimento();
  int largura();
  int perimetro();
  int area();
  bool ehquadrado();

};

//checa se todos os valores estão no primeiro quadrante
bool Retangulo::checar(int pix,int piy,int psx, int psy){
  if((pix >= 0 && pix <= 15) && (piy >= 0 && piy <= 15) && (psx >= 0 && psx <= 15) && (psy >= 0 && psy <= 15)){
	  return true;
  }
  else {
	  return false;
  }
}

//atribuindo os valores verdadeiros
void Retangulo::setValores(int pix,int piy,int psx, int psy){

  do{
    cout << "Coordenada x1: ";
    cin >> pix;
    cout << "Coordenada x2: ";
    cin >> psx;
    cout << "Coordenada y1: ";
    cin >> piy;
    cout << "Coordenada y2: ";
    cin >> psy;
    if(checar(pix, piy, psx, psy) == false){
      cout << "Os valores devem ser entre 0 e 15" << endl;
    }
  }while(!checar(pix, piy, psx, psy));

  this->pix = pix;
	this->piy = piy;
	this->psx = psx;
	this->psy = psy;

}

int Retangulo::comprimento(){
  //definindo o maior lado do retangulo
  if(abs(piy - psy) > abs(pix - psx)){
    return abs(piy - psy);
  }
  else return abs(pix - psx);
}
//define largura
int Retangulo::largura(){
  //definindo a largura
  if(abs(piy - psy) > abs(pix - psx)){
    return abs(pix - psx);
  }
  else return abs(piy - psy);
}
//função calcula perimetro
int Retangulo::perimetro(){
  return (2 * (comprimento() + largura()));
}
//função calcula area
int Retangulo::area(){
  return (comprimento() * largura());
}
//função verifica se e quadrado
bool Retangulo::ehquadrado(){
  return (comprimento() == largura());
}

int main(){
	Retangulo r;
	int x1, x2, y1, y2;
	cout << "insira as coordenadas do seu retangulo" << endl;

	r.setValores(x1, y1, x2, y2);

	//verifica se e quadrado
	for(int i = 0; i < 1; i++){
		if(r.ehquadrado() == true){
			cout << "Os valores formam um quadrado" << endl;
			break;
		}
		//resultado
		cout << "O comprimento do retangulo e: " << r.comprimento() << endl;
		cout << "A largura do retangulo e: " << r.largura() << endl;
		cout << "O perimetro do retangulo e: " << r.perimetro() << endl;
		cout << "A area do retangulo e: " << r.area() << endl;
	}
}
