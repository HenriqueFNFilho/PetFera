#include <iomanip>
#include "profissional.hpp"
#include<iostream>

using std::cin;
using std::cout;

using std::setfill;
using std::setw;


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
ostream& operator<< (ostream& o, Profissional& profissional){
    o << setfill (' ') << setw (10) << profissional.getId() << " | " 
		<< setfill ('.') << setw (50) << profissional.getNome() << " | " 
		<< setfill (' ') << setw (5) << profissional.getIdade()<< " | "
		<< setfill (' ') << setw (10) << profissional.getGenero();
	return o;
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
ostream& 
operator<< (ostream &o, Tratador& tratador){
	o << setfill (' ') << setw (10) << tratador.getId() << " | " 
		<< setfill ('.') << setw (50) << tratador.getNome() << " | " 
		<< setfill (' ') << setw (5) << tratador.getIdade() << " | "
		<< setfill (' ') << setw (10) << tratador.getGenero() << " | " 
		<< setfill (' ') << setw (50) << tratador.getHabilidade();
	return o;
}

void Tratador::criaTratador(){
	int i;
	string s;
	cout << "ID: ";
	cin >>  i;
	setId(i);
	cout << "Nome: ";
	cin >> s;
	setNome(s);
	cout << "Idade: ";
	cin >> i;
	setIdade(i);
	cout << "genero: ";
	cin >> s;
	setGenero(s);
	cout << "Habilida: ";
	cin >> s;

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
ostream& 
operator<< (ostream &o, Veterinario& veterinario){
	o << setfill (' ') << setw (10) << veterinario.getId() << " | " 
		<< setfill ('.') << setw (50) << veterinario.getNome() << " | " 
		<< setfill (' ') << setw (5) << veterinario.getIdade() << " | "
		<< setfill (' ') << setw (10) << veterinario.getGenero() << " | " 
		<< setfill (' ') << setw (50) << veterinario.getEspecialidade() <<" | " 
		<< setfill (' ') << setw (50) << veterinario.getFormacao();
	return o;
}
