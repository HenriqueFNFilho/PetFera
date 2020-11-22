#include <iostream>
#include "animais.hpp"

using namespace std;

int main(){
    Animais* m = new Animais();
    
    Repteis* lagarto = new Repteis("Lipito", "reptil", "femea", 3, "completa", "escamas");

    Mamiferos* boto = new Mamiferos("Pink", "mamifero", "femea", 10, false, "carnivoro", "aquático");

    Aves* pardal = new Aves("Pasquale", "ave", "macho", 1, "verde", true);

    Anfibios* sapo = new Anfibios("Caco", "Anfibio", "Macho", 2);

    //teste da classe Animais
    m->setNome("Bidu"); 

    cout << m->getNome() << endl;


    //teste da classe Répteis
    cout << "Nome: " << lagarto->getNome() << endl << "Sexo: " << lagarto->getGenero() << endl << "Tipo de pele: " << lagarto->getTipopele() << endl;

    
    //teste da classe Mamíferos
    cout << "Dieta: "<< boto->getDieta() << endl << "Patas: " << boto->getPatas() << endl;

    if(boto->getAmamentando() == true){
        cout << "Animal encontra-se amamentando!" << endl;
    }
    else if(boto->getAmamentando() == false){
        cout << "Animal não encontra-se amamentando" << endl;
    }


    //teste da classe Aves
    cout << "A ave se chama: " << pardal->getNome() << endl << "é: " << pardal->getCor() <<endl;
    if(pardal->getVoando() == true){
        cout << "Ave se encontra apta a voar!" << endl;
    }
    else if(pardal->getVoando() == false) {
        cout << "Ave ainda não está apta para voar" << endl;
    }



    //teste da classe Anfíbios
    sapo->setTrocapele("Parcial");
    sapo->setExcrecao("amoniotelico");

    cout << "Nome: " << sapo->getNome() << endl<< "Troca de Pele: " << sapo->getTrocapele() << endl;


    return 0;
}