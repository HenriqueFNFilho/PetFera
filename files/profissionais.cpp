#include "profissionais.hpp"


//implementação da classe Profissionais

Profissionais::Profissionais(){
    this->nome = "Null";
}

Profissionais::Profissionais(int id, string nome, int idade, string genero):id(id), nome(nome), idade(idade), genero(genero){}

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


//implementação da classe Tratadores

Tratadores::Tratadores(int id, string nome, int idade, string genero, string habilidade): Profissionais(id, nome, idade, genero), habilidade(habilidade){}

Tratadores::~Tratadores(){}

string Tratadores::getHabilidade(){
    return this->habilidade;
}
void Tratadores::setHabilidade(string habilidade){
    this->habilidade = habilidade;
}



//implementação da classe Veterinarios

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
