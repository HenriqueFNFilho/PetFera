#include <iostream>
#include "profissionais.hpp"

using namespace std;

int main(){
    Profissionais* p = new Profissionais();

    Veterinarios* v = new Veterinarios(1313244, "Gustavo", 35, "masculino", "mamiferos", "mestrado");

    Tratadores* t = new Tratadores(3223, "Joaquim", 27, "masculino", "limpador" );


    //teste da classe Profissionais
    p->setNome("Henrique Filho");

    cout << p->getNome() << endl;



    //teste da classe Veterinarios
    cout << "nome: " << v->getNome() << endl << "Formação: " << v->getFormacao() << endl;


    //teste da classe Tratadores
    cout << "ID: " << t->getId() << endl << "Trabalha como: " << t->getHabilidade() << endl;


    return 0;
}