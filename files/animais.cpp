#include "animais.hpp"

//Implementação da classe Animais

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


//Implementação da classe Anfibios

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


//Implementação da classe Répteis

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


//Implementação da classe Aves

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


//Implementação da classe Mamíferos

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