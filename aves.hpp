#ifndef _AVES_
#define _AVES_

#include "animais.hpp"

class Aves: public Animais{
private:
    string cor;
    bool voando;
public:
    Aves(string nome, string classe, string genero, int idade, string cor, bool voando);
    ~Aves();
    string getCor();
    void setCor(string cor);
    bool getVoando();
    void setVoando(bool voando);
};


#endif
