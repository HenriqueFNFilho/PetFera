#pragma once
#include<iostream>

using namespace std;

//Declaraçao da classe Exotico

class Exotico{
protected:
    string origem;   //país de origem
public:
    Exotico();
    Exotico(string origem);
    virtual ~Exotico() = 0;
    string getOrigem();
    void setOrigem(string origem);
};