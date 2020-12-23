#pragma once

#include <iostream>

using namespace std;


//Declaraçao da classe Nativo

class Nativo{
protected:
    string bioma;
public:
    Nativo();
    Nativo(string bioma);
    virtual ~Nativo() = 0;
    string getBioma();
    void setBioma(string bioma);
};
