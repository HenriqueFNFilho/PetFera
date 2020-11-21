#include "animais.hpp"
#include "aves.hpp"

#include<iostream>

using namespace std;

int main(){
    Aves* pardal = new Aves("Pasquale", "ave", "macho", 1, "verde", true);

    cout << "A ave se chama: " << pardal->getNome() << endl << "é: " << pardal->getCor() <<endl;
    if(pardal->getVoando() == true){
        cout << "Ave se encontra apta a voar!" << endl;
    }
    else if(pardal->getVoando() == false) {
        cout << "Ave ainda não está apta para voar" << endl;
    }
    return 0;
}