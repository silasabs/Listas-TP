//classe Base
#ifndef USUARIO_H
#define USUARIO_H

class Usuario{
	private:
		string nome, email;
		int idade;
	public:
		Usuario(string = " ", string = " ", int = 0);
		string getNome() const;
		int getIdade() const;
		string getEmail() const;
};
#endif