#include "domestico.hpp"

//Implementação da classe Domestico

Domestico::Domestico(){}

Domestico::Domestico(bool vacinado): vacinado(vacinado){}

Domestico::~Domestico(){}

bool Domestico::getVacinado(){
	return this->vacinado;
}
