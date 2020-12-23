#include "exotico.hpp"


//Implementação da classe Exotico

Exotico::Exotico(){}

Exotico::Exotico(string origem):origem(origem){}

Exotico::~Exotico(){}

string Exotico::getOrigem(){
	return this->origem;
}

void Exotico::setOrigem(string origem){
	this->origem = origem;
}