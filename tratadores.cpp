#include "profissionais.hpp"
#include "tratadores.hpp"


Tratadores::Tratadores(int id, string nome, int idade, string genero, string habilidade): Profissionais(id, nome, idade, genero), habilidade(habilidade){}

Tratadores::~Tratadores(){}

string Tratadores::getHabilidade(){
    return this->habilidade;
}
void Tratadores::setHabilidade(string habilidade){
    this->habilidade = habilidade;
}