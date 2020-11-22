#ifndef _TRATADORES_
#define _TRATADORES_

#include "profissionais.hpp"

class Tratadores: public Profissionais{
private:
    string habilidade;               //alimentador, lavador, limpador (limpa os excrementos)
public:
    Tratadores(int id, string nome, int idade, string genero, string habilidade);
    ~Tratadores();
    string getHabilidade();
    void setHabilidade(string habilidade);
};

#endif