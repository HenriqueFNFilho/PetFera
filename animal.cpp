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






Exotico::Exotico(bool exotico):exotico(exotico){}

Exotico::~Exotico(){}

bool Exotico::getExotico(){
	return this->exotico;
}

void Exotico::setExotico(bool exotico){
	this->exotico = exotico;
}


Nativo::Nativo(bool nativo): nativo(nativo){}

Nativo::~Nativo(){}

bool Nativo::getNativo(){
	return this->nativo;
}

void Nativo::setNativo(bool Nativo){
	this->nativo = nativo;
}


Domestico::Domestico(bool domestico): domestico(domestico){}

Domestico::~Domestico(){}

bool Domestico::getDomestico(){
	return this->domestico;
}

void Domestico::setDomestico(bool domestico){
	this->domestico = domestico;
}


AnfibioExotico::AnfibioExotico(bool exotico, bool anfibioExotico):Exotico(exotico), anfibioExotico(anfibioExotico){}

bool AnfibioExotico::getAnfibioExotico(){
	return this->anfibioExotico;
}

void AnfibioExotico::setAnfibioExotico(bool anfibioExotico){
	this->anfibioExotico = anfibioExotico;
}



AnfibioNativo::AnfibioNativo(bool nativo, bool anfibioNativo): Nativo(nativo), anfibioNativo(anfibioNativo){}

bool AnfibioNativo::getAnfibioNativo(){
	return this->anfibioNativo;
}

void AnfibioNativo::setAnfibioNativo(bool anfibioNativo){
	this->anfibioNativo = anfibioNativo;
}



AnfibioDomestico::AnfibioDomestico(bool domestico, bool anfibioDomestico):Domestico(domestico), anfibioDomestico(anfibioDomestico){}

bool AnfibioDomestico::getAnfibioDomestico(){
	return this->anfibioDomestico;
}

void AnfibioDomestico::setAnfibioDomestico(bool anfibioDomestico){
	this->anfibioDomestico = anfibioDomestico;
}



ReptilExotico::ReptilExotico(bool exotico, bool reptilExotico):Exotico(exotico), reptilExotico(reptilExotico){}

bool ReptilExotico::getReptilExotico(){
	return this->reptilExotico;
}

void ReptilExotico::setReptilExotico(bool reptilExotico){
	this->reptilExotico = reptilExotico;
}



ReptilNativo::ReptilNativo(bool nativo, bool reptilNativo):Nativo(nativo), reptilNativo(reptilNativo){}

bool ReptilNativo::getReptilNativo(){
	return this->reptilNativo;
}

void ReptilNativo::setReptilNativo(bool reptilNativo){
	this->reptilNativo = reptilNativo;
}



ReptilDomestico::ReptilDomestico(bool domestico, bool reptilDomestico):Domestico(domestico), reptilDomestico(reptilDomestico){}

bool ReptilDomestico::getReptilDomestico(){
	return this->reptilDomestico;
}

void ReptilDomestico::setReptilDomestico(bool reptilDomestico){
	this->reptilDomestico = reptilDomestico;
}



AveExotico::AveExotico(bool exotico, bool aveExotico):Exotico(exotico), aveExotico(aveExotico){}

bool AveExotico::getAveExotico(){
	return this->aveExotico;
}

void AveExotico::setAveExotico(bool aveExotico){
	this->aveExotico = aveExotico;
}



AveNativo::AveNativo(bool nativo, bool aveNativo):Nativo(nativo), aveNativo(aveNativo){}

bool AveNativo::getAveNativo(){
	return this->aveNativo;
}

void AveNativo::setAveNativo(bool aveNativo){
	this->aveNativo = aveNativo;
}



AveDomestico::AveDomestico(bool domestico, bool aveDomestico):Domestico(domestico), aveDomestico(aveDomestico){}

bool AveDomestico::getAveDomestico(){
	return this-aveDomestico;
}

void AveDomestico::setAveDomestico(bool aveDomestico){
	this->aveDomestico = aveDomestico;
}


MamiferoExotico::MamiferoExotico(bool exotico, bool mamiferoExotico):Exotico(exotico), mamiferoExotico(mamiferoExotico){}

bool MamiferoExotico::getMamiferoExotico(){
	return this->mamiferoExotico;
}

void MamiferoExotico::setMamiferoExotico(bool mamiferoExotico){
	this->mamiferoExotico = mamiferoExotico;
}



MamiferoNativo::MamiferoNativo(bool nativo, bool mamiferoNativo):Nativo(nativo), mamiferoNativo(mamiferoNativo){}

bool MamiferoNativo::getMamiferoNativo(){
	return this->mamiferoNativo;
}

void MamiferoNativo::setMamiferoNativo(bool mamiferoNativo){
	this->mamiferoNativo = mamiferoNativo;
}


MamiferoDomestico::MamiferoDomestico(bool domestico, bool mamiferoDomestico):Domestico(domestico), mamiferoDomestico(mamiferoDomestico){}

bool MamiferoDomestico::getMamiferoDomestico(){
	return this->mamiferoDomestico;
}

void MamiferoDomestico::setMamiferoDomestico(bool mamiferoDomestico){
	this->mamiferoDomestico = mamiferoDomestico;
}


