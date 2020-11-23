#ifndef _PETFERA_
#define _PETFERA_

#include "animais.hpp"
#include "profissionais.hpp"

#define CAPACIDADE_MAX 30 

class Petfera {
private:
	string nome;
	string id;
	Animais* animais[CAPACIDADE_MAX];
	int cadastrados = 0;
public:
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
