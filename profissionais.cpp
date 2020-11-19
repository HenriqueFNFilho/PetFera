#include "profissionais.hpp"

Profissionais::Profissionais(){
    this->nome = "Null";
}

Profissionais::Profissionais(int id, string nome):id(id), nome(nome){}

Profissionais::~Profissionais()
{
}

int Profissionais::getId(){
    return this->id;
}
void Profissionais::setId(int id){
    this->id = id;
}
string Profissionais::getNome(){
    return this->nome;
}
void Profissionais::setNome(string nome){
    this->nome = nome;
}
int Profissionais::getIdade(){
    return this->idade;
}
void Profissionais::setIdade(int idade){
    this->idade = idade;
}
string Profissionais::getGenero(){
    return this->genero;
}
void Profissionais::setGenero(string genero){
    this->genero = genero;
}
string Profissionais::getProfissao(){
    return this->profissao;
}
void Profissionais::setProfissao(string profissao){
    this->profissao = profissao;
}