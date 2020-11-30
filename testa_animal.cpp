#include <iostream>
#include "animal.hpp"

using namespace std;

int main(){
    Animal* m = new Animal();
    
    Reptil* lagarto = new Reptil("Lipito", ReptilDomestico, "femea", 3, "parcial", "escamas");

    Mamifero* boto = new Mamifero("Pink", MamiferoDomestico, "femea", 10, false, "carnivoro", "aquático");

    Ave* pardal = new Ave("Pasquale", AveDomestico, "macho", 1, "verde", true);

    Anfibio* sapo = new Anfibio("Caco", AnfibioDomestico, "macho", 4, "completa", "ureia");

    //teste da classe Animal
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


    //teste da classe Ave
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