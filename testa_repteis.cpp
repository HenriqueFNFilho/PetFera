#include "repteis.hpp"
#include "animais.hpp"

#include<iostream>

using namespace std;

int main(){
    Repteis* lagarto = new Repteis("Lipito", "reptil", "femea", 3, "completa", "escamas");
    
    cout << "Nome: " << lagarto->getNome() << endl << "Sexo: " << lagarto->getGenero() << endl << "Tipo de pele: " << lagarto->getTipopele() << endl;

    return 0;
}