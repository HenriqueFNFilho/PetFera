#ifndef _MAMIFEROS_
#define _MAMIFEROS_

#include "animais.hpp"

class Mamiferos: public Animais{
private:
    bool amamentando;              //em fase de amamentação
    string dieta;                  //carnivoro, onivoro, herbivoro
    string patas;                  //bipede, quadrupede
public:
    Mamiferos(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas);
    ~Mamiferos();
    bool getAmamentando();
    void setAmamentando(bool amamentando);
    string getDieta();
    void setDieta(string dieta);
    string getPatas();
    void setPatas(string patas);
};

#endif