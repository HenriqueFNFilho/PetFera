#include "profissional.hpp"


//implementação da classe Profissional

Profissional::Profissional(){
    this->nome = "Null";
}

Profissional::Profissional(int id, string nome, int idade, string genero):id(id), nome(nome), idade(idade), genero(genero){}

Profissional::~Profissional()
{
}

int Profissional::getId(){
    return this->id;
}
void Profissional::setId(int id){
    this->id = id;
}
string Profissional::getNome(){
    return this->nome;
}
void Profissional::setNome(string nome){
    this->nome = nome;
}
int Profissional::getIdade(){
    return this->idade;
}
void Profissional::setIdade(int idade){
    this->idade = idade;
}
string Profissional::getGenero(){
    return this->genero;
}
void Profissional::setGenero(string genero){
    this->genero = genero;
}


//implementação da classe Tratador

Tratador::Tratador(){}

Tratador::Tratador(int id, string nome, int idade, string genero, string habilidade): Profissional(id, nome, idade, genero), habilidade(habilidade){}

Tratador::~Tratador(){}

string Tratador::getHabilidade(){
    return this->habilidade;
}
void Tratador::setHabilidade(string habilidade){
    this->habilidade = habilidade;
}



//implementação da classe Veterinario

Veterinario::Veterinario(){}

Veterinario::Veterinario(int id, string nome, int idade, string genero, string especialidade, string formacao): Profissional(id, nome, idade, genero), especialidade(especialidade), formacao(formacao){}

Veterinario::~Veterinario(){}

string Veterinario::getEspecialidade(){
    return this->especialidade;
}
void Veterinario::setEspecialidade(string especialidade){
    this->especialidade = especialidade;
}
string Veterinario::getFormacao(){
    return this->formacao;
}
void Veterinario::setFormacao(string formacao){
    this->formacao = formacao;
}
