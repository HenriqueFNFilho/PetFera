#ifndef _REPTEIS_
#define _REPTEIS_

#include "animais.hpp"

class Repteis: public Animais{
private:
    string ecdise;               //troca completa de pele
    string tipopele;             //escama, placa dermica, casco
public:
    Repteis(string nome, string classe, string genero, int idade, string ecdise, string tipopele);
    ~Repteis();
    string getEcdise();
    void setEcdise(string ecdise);
    string getTipopele();
    void setTipopele(string tipopele);
};

#endif
