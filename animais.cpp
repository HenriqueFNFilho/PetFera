#include "animais.hpp"

Animais::Animais(){
    this->nome = "Null";
}

Animais::Animais(string nome):nome(nome){}

Animais::~Animais(){}

string Animais::getNome(){
    return this->nome;
}
void Animais::setNome(string nome){
    this->nome = nome;
}
string Animais::getClasse(){
    return this->classe;
}
void Animais::setClasse(string classe){
    this->classe = classe;
}
string Animais::getGenero(){
    return this->genero;
}
void Animais::setGenero(string genero){
    this->genero = genero;
}
int Animais::getIdade(){
    return this->idade;
}
void Animais::setIdade(int idade){
    this->idade = idade;
}
