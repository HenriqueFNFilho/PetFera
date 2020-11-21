#include "animais.hpp"
#include "mamiferos.hpp"

#include<iostream>

int main(){
    Mamiferos* boto = new Mamiferos("Pink", "mamifero", "femea", 10, false, "carnivoro", "aquático");

    cout << "Dieta: "<< boto->getDieta() << endl << "Patas: " << boto->getPatas() << endl;

    if(boto->getAmamentando() == true){
        cout << "Animal encontra-se amamentando!" << endl;
    }
    else if(boto->getAmamentando() == false){
        cout << "Animal não encontra-se amamentando" << endl;
    }

    return 0;
}