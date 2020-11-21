#include "anfibios.hpp"
#include "animais.hpp"

#include <iostream>

using namespace std;

Anfibios::Anfibios(string nome, string classe, string genero, int idade): Animais(nome, classe, genero, idade){}

Anfibios::~Anfibios()
{
}

string Anfibios::getTrocapele(){
    return this->trocapele;
}
void Anfibios::setTrocapele(string trocapele){
    this->trocapele = trocapele;
}
string Anfibios::getExcrecao(){
    return this->excrecao;
}
void Anfibios::setExcrecao(string excrecao){
    this->excrecao = excrecao;
}