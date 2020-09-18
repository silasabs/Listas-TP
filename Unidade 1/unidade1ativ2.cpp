/*ALUNO: SILAS JOÃO BEZERRA SOARES
  LISTA: 1º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 02
  MOSTRAR ENUMERAÇÃO DE CADA DISCIPLINA UTILIZANDO ENUM
*/
#include <iostream>
using namespace std;

//criando o enum com as constantes definidas
enum disciplinas {
linear = 1109049, fisica2 = 1108081, quimica = 1107212, tecnicasprogramacao = 1411161, expressaografica = 1113019
};

int main(){
	  
  enum disciplinas d[5] = {linear, fisica2, quimica, tecnicasprogramacao, expressaografica};
		
    cout << "Disciplinas RAE" << endl << "-------------------" << endl;
    //imprimindo os valores das variáveis enumeradas.
    for(int i = 0; i<5; i++){
			cout<< i+1 << " - " << d[i] << endl;
	}
return 0;
}