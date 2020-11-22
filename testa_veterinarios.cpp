#include "profissionais.hpp"
#include "veterinarios.hpp"

#include <iostream>

using namespace std;

int main(){
    Veterinarios* v = new Veterinarios(1313244, "Gustavo", 35, "masculino", "mamiferos", "mestrado");

    cout << "nome: " << v->getNome() << endl << "Formação: " << v->getFormacao() << endl;

    return 0;
}