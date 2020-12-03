#include <iostream>
#include "profissional.hpp"
#include <vector>

using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
	Profissional* lista[20]; //upcasting
	// Tratador
	lista[0] = new Tratador(01,"Leleo Antonio",33,"masculino","alimentador");
	lista[1] = new Tratador(02,"Maria Joaquina",40,"feminino","lavador");
	lista[2] = new Tratador(03,"Joao Carrero",38,"masculino","alimentador");
	
	// Veterinario
	lista[3] = new Veterinario(04,"Carlos Luiz",39,"masculino","mamiferos","graduacao");
	lista[4] = new Veterinario(05,"Anita Nataly",49,"feminino","repteis","mestrado");
	
	for(int i=0; i<=4; i++){
		cout << lista[i]->getNome() << endl;
	}
	
	//criando um vetor da classe profissional
	vector<Profissional*> *profissional = new vector<Profissional*>;

	Profissional* tratador = new Tratador(06, "Bolsonaro", 67, "feminino", "limpador de fezes");
	Profissional* veterinario = new Veterinario(07, "Dilma", 68, "feminino", "equinos", "mestre");
	
	//pondo os dados na última posição do vetor
	profissional->push_back(tratador);
	profissional->push_back(veterinario);

	//testando o objeto tratador novamente
	tratador = new Tratador(8,"Doria",43,"masculino","tosador");

	profissional->push_back(tratador);

	//escrevento os nomes de cada posição do vetor (pode ser utilizado um for each, ou for comum mesmo)
	cout << profissional->at(0)->getNome() << endl;
	cout << profissional->at(1)->getNome() << endl;
	cout << profissional->at(2)->getNome() << endl;
	
	return 0;
}
