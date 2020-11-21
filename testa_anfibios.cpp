#include "animais.hpp"
#include "anfibios.hpp"
#include <iostream>

using namespace std;

int main(){
    Anfibios* sapo = new Anfibios("Caco", "Anfibio", "Macho", 2);
    sapo->setTrocapele("Parcial");
    sapo->setExcrecao("amoniotelico");

    cout << "Nome: " << sapo->getNome() << endl<< "Troca de Pele: " << sapo->getTrocapele() << endl;
    return 0;
}