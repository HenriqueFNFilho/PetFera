#include <iostream>

#include "petfera.hpp"

using namespace std;

int main()
{
	Petfera Petfera;
	Petfera.setNome("Pet Fera");
	Petfera.setId("Pet Fera RN");

	Animais* pato = new Animais();
	pato->setNome("Pato Donald");
	pato->setClasse("Mamifero");
	pato->setGenero("Masculino");
	pato->setIdade(4);

	Petfera.addAnimais(pato);

	Animais* cachorro = new Animais();
	cachorro->setNome("Pluto de Mickey");
	cachorro->setClasse("Mamifero");
	cachorro->setGenero("Masculino");
	cachorro->setIdade(5);

	Petfera.addAnimais(cachorro);

	Animais* rato = new Animais();
	rato->setNome("Jerry M");
	rato->setClasse("Mamifero");
	rato->setGenero("Masculino");
	rato->setIdade(6);

	Petfera.addAnimais(rato);

	cout << Petfera.getId() << " - " << Petfera.getCadastrados() 
			<< "/" << CAPACIDADE_MAX << endl;
	Petfera.listarAnimais(); 

	Petfera.remAnimais("Jerry M");

	cout << Petfera.getId() << " - " << Petfera.getCadastrados() 
			<< "/" << CAPACIDADE_MAX << endl;
	Petfera.listarAnimais();

	return 0;
}
