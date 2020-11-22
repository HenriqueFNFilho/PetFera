#include "profissionais.hpp"
#include "veterinarios.hpp"

Veterinarios::Veterinarios(int id, string nome, int idade, string genero, string especialidade, string formacao): Profissionais(id, nome, idade, genero), especialidade(especialidade), formacao(formacao){}

Veterinarios::~Veterinarios(){}

string Veterinarios::getEspecialidade(){
    return this->especialidade;
}
void Veterinarios::setEspecialidade(string especialidade){
    this->especialidade = especialidade;
}
string Veterinarios::getFormacao(){
    return this->formacao;
}
void Veterinarios::setFormacao(string formacao){
    this->formacao = formacao;
}