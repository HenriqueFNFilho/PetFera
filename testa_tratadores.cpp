#include "profissionais.hpp"
#include "tratadores.hpp"

#include <iostream>

using namespace std;

int main(){
    Tratadores* t = new Tratadores(3223, "Joaquim", 27, "masculino", "limpador" );

    cout << "ID: " << t->getId() << endl << "Trabalha como: " << t->getHabilidade() << endl;

    return 0;
}