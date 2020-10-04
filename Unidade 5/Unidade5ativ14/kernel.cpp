#include"Funcionario.h"
#include"Empresa.h"
#include<iomanip>
#include<clocale>
#include<string>

int Empresa::dSize = 0;

//construtor aloca dinamicamente a lista de funcionario
Empresa::Empresa(int sz)
{
    lista = new Funcionario[sz];
}
//construtor default inicializa os atributos da classe Empresa
Empresa::Empresa()
{
    cnpj = nomeEmpresa = " ";
}
//cria a empresa
void Empresa::setStart(string nome, string tcnpj, int sz)
{
    this->nomeEmpresa = nome;
    this->cnpj = tcnpj;
    this->size = sz;
}
//Obtem o valor total de funcionários
void Empresa::setSize(int size)
{
    lista = (Funcionario *)new Funcionario[size];
    this->size = size;
}
// metodos get Empresa
string Empresa::getNomeEmpresa() const
{
    return nomeEmpresa;
}

string Empresa::getCnpj() const
{
    return cnpj;
}
//metodo que cadastra funcionario e verifica quantidade máxima suportada
bool Empresa::cadFuncionario(Funcionario f_cad)
{
    if(dSize == size){
        return false;
    }
    else
    {
        lista[dSize++] = f_cad;
        return true;
    }
}
//imprimi folha de Pagamento
void Empresa::imprimiFolha()
{

    cout << "CNPJ: " << getCnpj() << " Empresa: " << getNomeEmpresa() << endl;
    for (int i = 0; i < dSize; i++)
    {
		cout << fixed << setprecision(2);
        cout << "Nome: " << lista[i].getNome() << endl;
        cout << "Departamento: " << lista[i].getDepartamento() << endl;
        cout << "Salário: " << lista[i].getSalario() << endl;
        cout << "Data de admissão: " << lista[i].getData() << endl;
        cout << "===================================" << endl;
    }
}
//metodo acrescenta auemento ao departamento específico.
bool Empresa::Aumento(int d, double b)
{
    //converte em porcentagem
    double aux = b / 100;
    double aux2 = 0;
    bool resp = false;
    for (int i = 0; i < size; i++){
        if(lista[i].getDepartamento() == d){
			aux2 = lista[i].getSalario();
			aux2 += lista[i].getSalario() * aux;
			lista[i].setSalario(aux2);
			resp = true;
        }
    }
	return resp;
}

//destrutor
Empresa::~Empresa(){
	delete []lista;
}


//funcionario---------------------------------------------------------

//construtor default
Funcionario::Funcionario()
{
    nome = data = " ";
    departamento = 0;
    salario = 0.0;
}
// metodos set
void Funcionario::setNome(string nomeF)
{
    this->nome = nomeF;
}
void Funcionario::setData(string dat)
{
    this->data = dat;
}
void Funcionario::setSalario(double sald)
{
    this->salario = sald;
}
void Funcionario::setDepartamento(int dep)
{
    this->departamento = dep;
}
//metodos get
string Funcionario::getNome() const
{
    return nome;
}
string Funcionario::getData() const
{
    return data;
}
int Funcionario::getDepartamento() const
{
    return departamento;
}
double Funcionario::getSalario() const
{
    return salario;
}