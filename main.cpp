#include <iostream>
#include "profissional.hpp"
#include "animal.hpp"
#include <vector>

using namespace std;


int main(int argc, char const *argv[])
{
	
	//criando um vetor da classe profissional
	vector<Profissional*> *profissional = new vector<Profissional*>;
	vector<Animal*> *animal = new vector<Animal*>;

	Profissional* tratador = new Tratador(06, "Bolsonaro", 67, "feminino", "limpador de fezes");
	Profissional* veterinario = new Veterinario(07, "Dilma", 68, "feminino", "equinos", "mestre");

	Animal* reptil = new Reptil("Shaokan",reptilDomestico,"feminino", 12, "4 meses", "escamas");
	Animal* anfibio = new Anfibio("Cururu",anfibioExotico,"masculino", 5, "2 meses", "escamas");
	Animal* ave = new Ave("Pegeotto",aveNativo,"feminino", 10, "Marron", true);
	Animal* mamifero = new Mamifero("Peppa",mamiferoDomestico,"feminino", 6, true, "Proteina", "4");
	
	//pondo os dados na última posição do vetor
	animal->push_back(reptil);
	animal->push_back(anfibio);
	animal->push_back(ave);
	animal->push_back(mamifero);
	
	//pondo os dados na última posição do vetor
	profissional->push_back(tratador);
	profissional->push_back(veterinario);

	//testando o objeto tratador novamente
	tratador = new Tratador(8,"Doria",43,"masculino","tosador");

	profissional->push_back(tratador);

	//listando os profissionais
	for(int i=0; i<3; i++){
		cout << profissional->at(i)->getNome() << endl;
	}
	cout << endl;

	//listando os animais
	for(int i=0; i<4; i++ ){
		cout << animal->at(i)->getNome() << endl;
	}
	
	//removendo um dos elementos de animal
	
	for(int i=0; i<4; i++){
		if(animal->at(i)->getNome()=="Pegeotto"){
			delete animal->at(i);
		}
	}
	cout << endl;

	//listando os animais após Pegeotto ser removido
	for(int i=0; i<4; i++ ){
		cout << animal->at(i)->getNome() << endl;
	}
	
	return 0;
}
