#include "animais.hpp"
#include "mamiferos.hpp"

Mamiferos::Mamiferos(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas): Animais(nome, classe, genero, idade), amamentando(amamentando), dieta(dieta), patas(patas){}


Mamiferos::~Mamiferos(){}

bool Mamiferos::getAmamentando(){
    return this->amamentando;
}
void Mamiferos::setAmamentando(bool amamentando){
    this->amamentando = amamentando;
}
string Mamiferos::getDieta(){
    return this->dieta;
}
void Mamiferos::setDieta(string dieta){
    this->dieta = dieta;
}
string Mamiferos::getPatas(){
    return this->patas = patas;
}
void Mamiferos::setPatas(string patas){
    this->patas = patas;
}