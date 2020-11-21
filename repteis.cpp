#include "repteis.hpp"
#include "animais.hpp"

Repteis::Repteis(string nome, string classe,string genero, int idade, string ecdise, string tipopele): Animais(nome, classe, genero, idade), ecdise(ecdise), tipopele(tipopele){}


Repteis::~Repteis()
{
}

string Repteis::getEcdise(){
    return this->ecdise;
}
void Repteis::setEcdise(string ecdise){
    this->ecdise = ecdise;
}
string Repteis::getTipopele(){
    return this->tipopele;
}
void Repteis::setTipopele(string tipopele){
    this->tipopele = tipopele;
}
