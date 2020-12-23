#include "nativo.hpp"

//Implementação da classe Nativo

Nativo::Nativo(){}

Nativo::Nativo(string bioma): bioma(bioma){}

Nativo::~Nativo(){}

string Nativo::getBioma(){
	return this->bioma;
}

void Nativo::setBioma(string bioma){
	this->bioma = bioma;
}
