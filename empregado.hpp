#ifndef _EMPREGADO_
#define _EMPREGADO_

#include "profissionais.hpp"
#include "tratadores.hpp"
#include "veterinarios.hpp"

class Empregado: public Profissionais, Tratadores, Veterinarios {
private:
    bool atuando;
public:
    Empregado(int id, string nome, int idade, string genero, string habilidade, bool atuando);
    Empregado(int id, string nome, int idade, string genero, string especialidade, string formacao, bool atuando);
    ~Empregado();
    bool getAtuando();
    void setAtuando(bool atuando);
};

#endif
