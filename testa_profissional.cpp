#include <iostream>
#include "profissional.hpp"

using namespace std;

int main(){
    Profissional* p = new Profissional();

    Veterinario* v = new Veterinario(1313244, "Gustavo", 35, "masculino", "mamiferos", "mestrado");

    Tratador* t = new Tratador(3223, "Joaquim", 27, "masculino", "limpador" );


    //teste da classe Profissional
    p->criarProfissional();

    p->listarProfissional();



    //teste da classe Veterinario
    cout << "nome: " << v->getNome() << endl << "Formação: " << v->getFormacao() << endl;


    //teste da classe Tratador
    cout << "ID: " << t->getId() << endl << "Trabalha como: " << t->getHabilidade() << endl;


    return 0;
}