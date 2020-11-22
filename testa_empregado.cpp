#include "profissionais.hpp"
#include "veterinarios.hpp"
#include "tratadores.hpp"
#include "empregado.hpp"

#include <iostream>

using namespace std;

int main(){
    Empregado* funcionario = new Empregado(2132, "José", 20, "masculino", "mamiferos", "mestre", true);

    cout << "formação: " << funcionario->getFormacao << endl;

    return 0;
}