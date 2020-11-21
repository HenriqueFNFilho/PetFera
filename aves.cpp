#include "animais.hpp"
#include "aves.hpp"

Aves::Aves(string nome, string classe, string genero, int idade, string cor, bool voando): Animais(nome, classe, genero, idade), cor(cor), voando(voando){}


Aves::~Aves(){}

string Aves::getCor(){
    return this->cor;
}
void Aves::setCor(string cor){
    this->cor = cor;
}
bool Aves::getVoando(){
    return this->voando;
}
void Aves::setVoando(bool voando){
    this->voando = voando;
}