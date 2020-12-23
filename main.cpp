#include<iostream>
#include <iomanip>
#include <memory>
#include "animal.hpp"
#include "profissional.hpp"
#include "mamifero.hpp"
#include "anfibio.hpp"
#include "reptil.hpp"
#include "ave.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "anfibioExotico.hpp"
#include "aveExotico.hpp"
#include "mamiferoExotico.hpp"
#include "reptilExotico.hpp"
#include "mamiferoNativo.hpp"
#include "anfibioNativo.hpp"
#include "aveNativo.hpp"
#include "reptilNativo.hpp"
#include "anfibioDomestico.hpp"
#include "aveDomestico.hpp"
#include "mamiferoDomestico.hpp"
#include "reptilDomestico.hpp"
#include "petfera.hpp"
#include <vector>

using namespace std;

int main(){
    Petfera* pf = new Petfera();
    pf->iniciaPrograma();





    /*
    // Declara um vetor de animais
	vector<shared_ptr<Animal>> animais;

	// Upcast: insere um anfibioexotico no vetor de animais
	animais.push_back(make_shared<AnfibioExotico>(1, anfibioExotico ,"Henrique", "masc", 36, "completa", "amonia", "afeganistao", "sim")); 
	// Downcast usando pronteiros inteligentes
	// Uso do casting dinâmico de ponteiros inteligentes!!! 
	shared_ptr<AnfibioExotico> aexZero = dynamic_pointer_cast<AnfibioExotico>(animais[0]);
	// Agora é possível alterar dados das classes derivadas
	aexZero->setNome("Hamilton");
	aexZero->setIdade(32);
	// Percorre a lista de animais
	for (auto& bicho : animais)
	{
		if (bicho->getTipo()==anfibioExotico) {
			// Faz o downcast
			shared_ptr<AnfibioExotico> aex = 
				dynamic_pointer_cast<AnfibioExotico>(bicho);
			// Imprime os dados gerais de um anfibioexotico
			string tipoStr = "";
			if (bicho->getTipo()==anfibioExotico) {
				tipoStr = "Anfibio exótico";
			}
			cout << "Esse animal é um " << tipoStr << " : "
				<< aex->getNome()
				<< " - " << aex->getGenero()
				<< " - " << aex->getIdade()
				<< " - " << aex->getLegalizado() << endl;
		}
		
	}
    */
    
    return 0;
}