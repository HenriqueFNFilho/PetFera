#include "profissionais.hpp"

#include<iostream>



using namespace std;


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
void 
Profissionais::listarProfissionais(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->profissionais[i]->getNome() << endl;
	}
}
void 
Profissionais::addProfissionais(Profissionais* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->profissionais[this->cadastrados++] = novo;
	}
}
void 
Profissionais::remProfissionais(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (profissionais[i]->getNome() == nome) {
			Profissionais* tmp = profissionais[i];
			profissionais[i] = profissionais[i+1];
			profissionais[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete profissionais[this->cadastrados--];
	}
}



//implementação da classe Tratadores

Tratadores::Tratadores(){}

Tratadores::Tratadores(int id, string nome, int idade, string genero, string habilidade): Profissionais(id, nome, idade, genero), habilidade(habilidade){}

Tratadores::~Tratadores(){}

string Tratadores::getHabilidade(){
    return this->habilidade;
}
void Tratadores::setHabilidade(string habilidade){
    this->habilidade = habilidade;
}
void 
Tratadores::listarTratadores(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->tratadores[i]->getNome() << endl;
	}
}
void 
Tratadores::addTratadores(Tratadores* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->tratadores[this->cadastrados++] = novo;
	}
}
void 
Tratadores::remTratadores(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (tratadores[i]->getNome() == nome) {
			Tratadores* tmp = tratadores[i];
			tratadores[i] = tratadores[i+1];
			tratadores[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete tratadores[this->cadastrados--];
	}
}




//implementação da classe Veterinarios

Veterinarios::Veterinarios(){}

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
void 
Veterinarios::listarVeterinarios(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->veterinarios[i]->getNome() << endl;
	}
}
void 
Veterinarios::addVeterinarios(Veterinarios* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->veterinarios[this->cadastrados++] = novo;
	}
}
void 
Veterinarios::remVeterinarios(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (veterinarios[i]->getNome() == nome) {
			Veterinarios* tmp = veterinarios[i];
			veterinarios[i] = veterinarios[i+1];
			veterinarios[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete veterinarios[this->cadastrados--];
	}
}
