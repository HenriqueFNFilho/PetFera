#ifndef _VETERINARIOS_
#define _VETERINARIOS_

#include "profissionais.hpp"

class Veterinarios: public Profissionais{
private:
    string especialidade;                //especialização em mamíferos, répteis, anfíbios, ou aves
    string formacao;                     //graduação, mestrado, doutorado
public:
    Veterinarios(int id, string nome, int idade, string genero, string especialidade, string formacao);
    ~Veterinarios();
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    string getFormacao();
    void setFormacao(string formacao);
};

#endif