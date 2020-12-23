#pragma once

#include <iostream>

using namespace std;

//Declaraçao da classe Domestico

class Domestico{
protected:
    bool vacinado;
public:
    Domestico();
    Domestico(bool vacinado);
    ~Domestico();
    bool getVacinado();
    void setVacinado(bool vacinado);
};


