#ifndef _PETFERA_
#define _PETFERA_

#include "animais.hpp"
#include "profissionais.hpp"

#define CAPACIDADE_MAX 30 

class Petfera: public Animais, Profissionais{
private:
	string nome;
	string id;
	Animais* animais[CAPACIDADE_MAX];
	int cadastrados = 0;
public:
	Petfera();
	Petfera(string nome, string id);
	Petfera(string nome, string classe, string genero, int idade);
	Petfera(string nome, string classe, string genero, int idade, string ecdise, string tipopele);
	Petfera(string nome, string classe, string genero, int idade, string cor, bool voando);
	Petfera(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas);
	~Petfera();
	string getNome();
	void setNome(string nome);
	string getId();
	void setId(string id);
	int getCadastrados();
	void addAnimais(Animais* novo);
	void remAnimais(string nome);
	void listarAnimais();
};

#endif
