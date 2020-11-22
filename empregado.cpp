#include "profissionais.hpp"
#include "tratadores.hpp"
#include "veterinarios.hpp"
#include "empregado.hpp"


Empregado::Empregado(int id, string nome, int idade, string genero, string habilidade, bool atuando): Tratadores(id, nome, idade, genero, habilidade), atuando(atuando){}

Empregado::Empregado(int id, string nome, int idade, string genero, string especialidade, string formacao, bool atuando): Veterinarios(id, nome, idade, genero, especialidade, formacao), atuando(atuando){}


Empregado::~Empregado(){}

bool Empregado::getAtuando(){
    return this->atuando;
}

void Empregado::setAtuando(bool atuando){
    this->atuando = atuando;
}