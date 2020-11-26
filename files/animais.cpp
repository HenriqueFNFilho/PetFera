#include "animais.hpp"
#include<iostream>

//Implementação da classe Animais

using namespace std;

Animais::Animais(){
    this->nome = "Null";
}

Animais::Animais(string nome, string classe, string genero, int idade):nome(nome), classe(classe), genero(genero), idade(idade){}

Animais::~Animais(){}

string Animais::getNome(){
    return this->nome;
}
void Animais::setNome(string nome){
    this->nome = nome;
}
string Animais::getClasse(){
    return this->classe;
}
void Animais::setClasse(string classe){
    this->classe = classe;
}
string Animais::getGenero(){
    return this->genero;
}
void Animais::setGenero(string genero){
    this->genero = genero;
}
int Animais::getIdade(){
    return this->idade;
}
void Animais::setIdade(int idade){
    this->idade = idade;
}

int 
Animais::getCadastrados(){
	return this->cadastrados;
}
void 
Animais::listarAnimais(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->animais[i]->getNome() << endl;
	}
}
void 
Animais::addAnimais(Animais* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->animais[this->cadastrados++] = novo;
	}
}
void 
Animais::remAnimais(string nome){
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



//Implementação da classe Anfibios

Anfibios::Anfibios(){}

Anfibios::Anfibios(string nome, string classe, string genero, int idade): Animais(nome, classe, genero, idade){}

Anfibios::~Anfibios()
{
}

string Anfibios::getTrocapele(){
    return this->trocapele;
}
void Anfibios::setTrocapele(string trocapele){
    this->trocapele = trocapele;
}
string Anfibios::getExcrecao(){
    return this->excrecao;
}
void Anfibios::setExcrecao(string excrecao){
    this->excrecao = excrecao;
}


int 
Anfibios::getCadastrados(){
	return this->cadastrados;
}
void 
Anfibios::listarAnfibios(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->anfibios[i]->getNome() << endl;
	}
}
void 
Anfibios::addAnfibios(Anfibios* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->anfibios[this->cadastrados++] = novo;
	}
}
void 
Anfibios::remAnfibios(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (anfibios[i]->getNome() == nome) {
			Anfibios* tmp = anfibios[i];
			anfibios[i] = anfibios[i+1];
			anfibios[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete anfibios[this->cadastrados--];
	}
}



//Implementação da classe Répteis

Repteis::Repteis(){}

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

int 
Repteis::getCadastrados(){
	return this->cadastrados;
}
void 
Repteis::listarRepteis(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->repteis[i]->getNome() << endl;
	}
}
void 
Repteis::addRepteis(Repteis* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->repteis[this->cadastrados++] = novo;
	}
}
void 
Repteis::remRepteis(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (repteis[i]->getNome() == nome) {
			Repteis* tmp = repteis[i];
			repteis[i] = repteis[i+1];
			repteis[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete repteis[this->cadastrados--];
	}
}



//Implementação da classe Aves

Aves::Aves(){}

Aves::Aves(string nome, string classe, string genero, int idade, string cor, bool voando): Animais(nome, classe, genero, idade), cor(cor), voando(voando){}


Aves::~Aves(){}

string Aves::getCor(){
    return this->cor;
}
void Aves::setCor(string cor){
    this->cor = cor;
}
bool Aves::getVoando(){
    return this->voando;
}
void Aves::setVoando(bool voando){
    this->voando = voando;
}

int 
Aves::getCadastrados(){
	return this->cadastrados;
}
void 
Aves::listarAves(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->aves[i]->getNome() << endl;
	}
}
void 
Aves::addAves(Aves* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->aves[this->cadastrados++] = novo;
	}
}
void 
Aves::remAves(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (aves[i]->getNome() == nome) {
			Aves* tmp = aves[i];
			aves[i] = aves[i+1];
			aves[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete aves[this->cadastrados--];
	}
}



//Implementação da classe Mamíferos

Mamiferos::Mamiferos(){}

Mamiferos::Mamiferos(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas): Animais(nome, classe, genero, idade), amamentando(amamentando), dieta(dieta), patas(patas){}


Mamiferos::~Mamiferos(){}

bool Mamiferos::getAmamentando(){
    return this->amamentando;
}
void Mamiferos::setAmamentando(bool amamentando){
    this->amamentando = amamentando;
}
string Mamiferos::getDieta(){
    return this->dieta;
}
void Mamiferos::setDieta(string dieta){
    this->dieta = dieta;
}
string Mamiferos::getPatas(){
    return this->patas = patas;
}
void Mamiferos::setPatas(string patas){
    this->patas = patas;
}

int 
Mamiferos::getCadastrados(){
	return this->cadastrados;
}
void 
Mamiferos::listarMamiferos(){
	for (int i = 0; i < this->cadastrados; ++i)
	{
		cout << this->mamiferos[i]->getNome() << endl;
	}
}
void 
Mamiferos::addMamiferos(Mamiferos* novo){
	if (this->cadastrados < CAPACIDADE_MAX) {
		this->mamiferos[this->cadastrados++] = novo;
	}
}
void 
Mamiferos::remMamiferos(string nome){
	bool encontrou = false;
	for (int i = 0; i < this->cadastrados; ++i)
	{
		if (mamiferos[i]->getNome() == nome) {
			Mamiferos* tmp = mamiferos[i];
			mamiferos[i] = mamiferos[i+1];
			mamiferos[i+1] = tmp;
			encontrou = true;
		}
	}
	if (encontrou) {
		delete mamiferos[this->cadastrados--];
	}
}
