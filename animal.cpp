#include "animal.hpp"
#include<iostream>



using namespace std;

//Implementação da classe Animal
Animal::Animal(){
    this->nome = "Null";
	this->tipo = tipo;
}

Animal::Animal(string nome, TipoDoAnimal tipo, string genero, int idade):nome(nome), tipo(tipo), genero(genero), idade(idade){}

Animal::~Animal(){}

string Animal::getNome() const{
    return this->nome;
}
void Animal::setNome(string nome){
    this->nome = nome;
}

string Animal::getGenero(){
    return this->genero;
}
void Animal::setGenero(string genero){
    this->genero = genero;
}
int Animal::getIdade(){
    return this->idade;
}
void Animal::setIdade(int idade){
    this->idade = idade;
}

TipoDoAnimal Animal::getTipo() {
	return this->tipo;
}




//Implementação da classe Anfibio

Anfibio::Anfibio(){}

Anfibio::Anfibio(string nome, TipoDoAnimal tipo, string genero, int idade, string trocapele, string excrecao): Animal(nome, tipo, genero, idade), trocapele(trocapele), excrecao(excrecao){}

Anfibio::~Anfibio()
{
}

string Anfibio::getTrocapele() const{
    return this->trocapele;
}
void Anfibio::setTrocapele(string trocapele){
    this->trocapele = trocapele;
}
string Anfibio::getExcrecao() const{
    return this->excrecao;
}
void Anfibio::setExcrecao(string excrecao){
    this->excrecao = excrecao;
}





//Implementação da classe Répteis

Reptil::Reptil(){}

Reptil::Reptil(string nome, TipoDoAnimal tipo,string genero, int idade, string ecdise, string tipopele): Animal(nome, tipo, genero, idade), ecdise(ecdise), tipopele(tipopele){}


Reptil::~Reptil()
{
}

string Reptil::getEcdise(){
    return this->ecdise;
}
void Reptil::setEcdise(string ecdise){
    this->ecdise = ecdise;
}
string Reptil::getTipopele(){
    return this->tipopele;
}
void Reptil::setTipopele(string tipopele){
    this->tipopele = tipopele;
}


//Implementação da classe Ave

Ave::Ave(){}

Ave::Ave(string nome, TipoDoAnimal tipo, string genero, int idade, string cor, bool voando): Animal(nome, tipo, genero, idade), cor(cor), voando(voando){}


Ave::~Ave(){}

string Ave::getCor(){
    return this->cor;
}
void Ave::setCor(string cor){
    this->cor = cor;
}
bool Ave::getVoando(){
    return this->voando;
}
void Ave::setVoando(bool voando){
    this->voando = voando;
}



//Implementação da classe Mamíferos

Mamifero::Mamifero(){}

Mamifero::Mamifero(string nome, TipoDoAnimal tipo, string genero, int idade, bool amamentando, string dieta, string patas): Animal(nome, tipo, genero, idade), amamentando(amamentando), dieta(dieta), patas(patas){}


Mamifero::~Mamifero(){}

bool Mamifero::getAmamentando(){
    return this->amamentando;
}
void Mamifero::setAmamentando(bool amamentando){
    this->amamentando = amamentando;
}
string Mamifero::getDieta(){
    return this->dieta;
}
void Mamifero::setDieta(string dieta){
    this->dieta = dieta;
}
string Mamifero::getPatas(){
    return this->patas = patas;
}
void Mamifero::setPatas(string patas){
    this->patas = patas;
}




//Implementação da classe Exotico

Exotico::Exotico(bool exotico):exotico(exotico){}

Exotico::~Exotico(){}

bool Exotico::getExotico(){
	return this->exotico;
}

void Exotico::setExotico(bool exotico){
	this->exotico = exotico;
}

//Implementação da classe Nativo

Nativo::Nativo(bool nativo): nativo(nativo){}

Nativo::~Nativo(){}

bool Nativo::getNativo(){
	return this->nativo;
}

void Nativo::setNativo(bool Nativo){
	this->nativo = nativo;
}


//Implementação da classe Domestico

Domestico::Domestico(bool domestico): domestico(domestico){}

Domestico::~Domestico(){}

bool Domestico::getDomestico(){
	return this->domestico;
}

void Domestico::setDomestico(bool domestico){
	this->domestico = domestico;
}



//Implementação da classe AnfibioExotico

AnfibioExotico::AnfibioExotico(bool exotico, bool anfibioExotico):Exotico(exotico), anfibioExotico(anfibioExotico){}

AnfibioExotico::~AnfibioExotico(){}

bool AnfibioExotico::getAnfibioExotico(){
	return this->anfibioExotico;
}

void AnfibioExotico::setAnfibioExotico(bool anfibioExotico){
	this->anfibioExotico = anfibioExotico;
}



//Implementação da classe AnfibioNativo

AnfibioNativo::AnfibioNativo(bool nativo, bool anfibioNativo): Nativo(nativo), anfibioNativo(anfibioNativo){}

AnfibioNativo::~AnfibioNativo(){}

bool AnfibioNativo::getAnfibioNativo(){
	return this->anfibioNativo;
}

void AnfibioNativo::setAnfibioNativo(bool anfibioNativo){
	this->anfibioNativo = anfibioNativo;
}




//Implementação da classe AnfibioDomestico

AnfibioDomestico::AnfibioDomestico(bool domestico, bool anfibioDomestico):Domestico(domestico), anfibioDomestico(anfibioDomestico){}

AnfibioDomestico::~AnfibioDomestico(){}

bool AnfibioDomestico::getAnfibioDomestico(){
	return this->anfibioDomestico;
}

void AnfibioDomestico::setAnfibioDomestico(bool anfibioDomestico){
	this->anfibioDomestico = anfibioDomestico;
}



//Implementação da classe ReptilExotico

ReptilExotico::ReptilExotico(bool exotico, bool reptilExotico):Exotico(exotico), reptilExotico(reptilExotico){}

ReptilExotico::~ReptilExotico(){}

bool ReptilExotico::getReptilExotico(){
	return this->reptilExotico;
}

void ReptilExotico::setReptilExotico(bool reptilExotico){
	this->reptilExotico = reptilExotico;
}




//Implementação da classe ReptilNativo

ReptilNativo::ReptilNativo(bool nativo, bool reptilNativo):Nativo(nativo), reptilNativo(reptilNativo){}

ReptilNativo::~ReptilNativo(){}

bool ReptilNativo::getReptilNativo(){
	return this->reptilNativo;
}

void ReptilNativo::setReptilNativo(bool reptilNativo){
	this->reptilNativo = reptilNativo;
}




//Implementação da classe ReptilDomestico

ReptilDomestico::ReptilDomestico(bool domestico, bool reptilDomestico):Domestico(domestico), reptilDomestico(reptilDomestico){}

ReptilDomestico::~ReptilDomestico(){}

bool ReptilDomestico::getReptilDomestico(){
	return this->reptilDomestico;
}

void ReptilDomestico::setReptilDomestico(bool reptilDomestico){
	this->reptilDomestico = reptilDomestico;
}




//Implementação da classe AveExotico

AveExotico::AveExotico(bool exotico, bool aveExotico):Exotico(exotico), aveExotico(aveExotico){}

AveExotico::~AveExotico(){}

bool AveExotico::getAveExotico(){
	return this->aveExotico;
}

void AveExotico::setAveExotico(bool aveExotico){
	this->aveExotico = aveExotico;
}



//Implementação da classe AveNativo

AveNativo::AveNativo(bool nativo, bool aveNativo):Nativo(nativo), aveNativo(aveNativo){}

AveNativo::~AveNativo(){}

bool AveNativo::getAveNativo(){
	return this->aveNativo;
}

void AveNativo::setAveNativo(bool aveNativo){
	this->aveNativo = aveNativo;
}




//Implementação da classe AveDomestico

AveDomestico::AveDomestico(bool domestico, bool aveDomestico):Domestico(domestico), aveDomestico(aveDomestico){}

AveDomestico::~AveDomestico(){}

bool AveDomestico::getAveDomestico(){
	return this-aveDomestico;
}

void AveDomestico::setAveDomestico(bool aveDomestico){
	this->aveDomestico = aveDomestico;
}




//Implementação da classe MamiferoExotico

MamiferoExotico::MamiferoExotico(bool exotico, bool mamiferoExotico):Exotico(exotico), mamiferoExotico(mamiferoExotico){}

MamiferoExotico::~MamiferoExotico(){}

bool MamiferoExotico::getMamiferoExotico(){
	return this->mamiferoExotico;
}

void MamiferoExotico::setMamiferoExotico(bool mamiferoExotico){
	this->mamiferoExotico = mamiferoExotico;
}




//Implementação da classe MamiferoNativo

MamiferoNativo::MamiferoNativo(bool nativo, bool mamiferoNativo):Nativo(nativo), mamiferoNativo(mamiferoNativo){}

MamiferoNativo::~MamiferoNativo(){}

bool MamiferoNativo::getMamiferoNativo(){
	return this->mamiferoNativo;
}

void MamiferoNativo::setMamiferoNativo(bool mamiferoNativo){
	this->mamiferoNativo = mamiferoNativo;
}




//Implementação da classe MamiferoDomestico

MamiferoDomestico::MamiferoDomestico(bool domestico, bool mamiferoDomestico):Domestico(domestico), mamiferoDomestico(mamiferoDomestico){}

MamiferoDomestico::~MamiferoDomestico(){}

bool MamiferoDomestico::getMamiferoDomestico(){
	return this->mamiferoDomestico;
}

void MamiferoDomestico::setMamiferoDomestico(bool mamiferoDomestico){
	this->mamiferoDomestico = mamiferoDomestico;
}


