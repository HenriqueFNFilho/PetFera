#include "petfera.hpp"

#include<iostream>

using namespace std; 

Petfera::Petfera(){}

Petfera::Petfera(string nome, string id):nome(nome), id(id){}

Petfera::Petfera(string nome, string classe, string genero, int idade){}

Petfera::Petfera(string nome, string classe, string genero, int idade, string ecdise, string tipopele){}

Petfera::Petfera(string nome, string classe, string genero, int idade, string cor, bool voando){}

Petfera::Petfera(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas){}

Petfera::~Petfera(){}

string 
Petfera::getNome(){
	return this->nome;
}
void 
Petfera::setNome(string nome){
	this->nome = nome;
}
string 
Petfera::getId(){
	return this->id;
}
void 
Petfera::setId(string id){
	this->id = id;
}
int 
Petfera::getCadastrados(){
	return this->cadastrados;
}
void 
Petfera::listarAnimais(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->animais[i]->getNome() << endl;
	}
}
void 
Petfera::addAnimais(Animais* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->animais[this->cadastrados++] = novo;
	}
}
void 
Petfera::remAnimais(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (animais[i]->getNome() == nome) {
			Animais* tmp = animais[i];
			animais[i] = animais[i+1];
			animais[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete animais[this->cadastrados--];
	}
}
