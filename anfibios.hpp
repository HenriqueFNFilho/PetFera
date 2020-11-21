#ifndef _ANFIBIOS_
#define _ANFIBIOS_

#include "animais.hpp"

using namespace std;

class Anfibios: public Animais{
private:
    string trocapele;              //troca de pele parcial
    string excrecao;                //excrementam ureia
public:
    Anfibios(string nome, string classe, string genero, int idade);
    ~Anfibios();
    string getTrocapele();
    void setTrocapele(string trocapele);
    string getExcrecao();
    void setExcrecao(string excrecao);
};

#endif

