/*ALUNO: SILAS JOÃO BEZERRA SOARES
  MATRÍCULA: 119210904
  LISTA: 5º UNIDADE - Laboratório Virtual de Programação
  Nº DA QUESTÃO: 14
  Compilador: Falcon C++ Plataforma: Windows
  ESSE PROGRAMA TEM COMO FUNÇÃO CRIAR UMA EMPRESA COM O REGISTRO DO SEU NOME E CNPJ, 
  FAZER O CONTROLE DE FUNCIONÁRIOS DA EMPRESA, E CADASTROS DO MESMO E BENEFICIAR DEPARTAMENTOS
  COM BÔNOS NO SALÁRIO MENSAL, UTILIZANDO INTERFACE E IMPLEMENTAÇÃO E MEMBROS ESTÁTICOS.
*/
#include"kernel.cpp"
#include<clocale>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    Empresa empresa;
    Funcionario func;
    string nomeE, nome, cnpj, data;
    double salario, porcent;
    int tam, departamento, op;

	//suporte a caracteres especiais
    setlocale(LC_ALL, "Portuguese");
    
	//criando empresa
    cout << "Insira o nome da sua empresa: ";
    getline(cin, nomeE);
    cout << "Insira o CNPJ: ";
    cin >> cnpj;
    cout << "Insira a quantidade de funcionarios: ";
    cin >> tam;
    empresa.setStart(nomeE, cnpj, tam);
    cout << "A empresa foi criada !" << endl;
    empresa.setSize(tam);
    
    while (true)
    {

        //menu de acesso ao usuario
        cout << "1) Cadastrar Funcionário" << endl;
        cout << "2) Imprimir folha de pagamento" << endl;
        cout << "3) Aumento de salário por Departamento" << endl;
        cout << "4) Sair" << endl;
        cin >> op;

        system("cls");

        switch (op)
        {
        case 1:
                //questionario
                cout << "Insira o nome do funcionário: ";
                cin.ignore();
                getline(cin, nome);
                func.setNome(nome);
                cout << "Insira a data de admissão [dd / mm / y]: ";
                cin >> data;
                func.setData(data);
                cout << "Insira o salário: ";
                cin >> salario;
                func.setSalario(salario);
                cout << "Informe o Departamento: ";
                cin >> departamento;
                func.setDepartamento(departamento);

                if(empresa.cadFuncionario(func) == true){
                    cout << "Funcionário Cadastrado !" << endl;
                }
                else
                {
                    cout << "A empresa alcancou o valor máximo de funcionários" << endl;
                }
                break;

        case 2:
            empresa.imprimiFolha();
            break;
        
        case 3:
            cout << "Informe o departamento: ";
            cin >> departamento;
            cout << "Informe a porcentagem do aumento: ";
            cin >> porcent;
            if(empresa.Aumento(departamento, porcent) == true)
			{
				cout << "Credito Debitado" << endl;
			}
			else{
				cout << "Departamento não encontrado" << endl;
			}
            
            break;

        case 4:
            break;

        default:
            cout << "Valor invalido !" << endl;
            break;
        }
        if(op == 4) break;
		system("pause");
        system("cls");
    }
}
