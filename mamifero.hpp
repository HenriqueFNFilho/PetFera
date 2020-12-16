#pragma once
#include<iostream>
#include<vector>
#include "animal.hpp"


//Declaraçao da classe Mamíferos

class Mamifero: public Animal{
protected:
    bool amamentando;              //em fase de amamentação
    string dieta;                  //carnivoro, onivoro, herbivoro
    string patas;                  //bipede, quadrupede
    vector<Mamifero*>mamifero;
public:
    Mamifero();
    Mamifero(int id, string nome, string genero, int idade, bool amamentando, string dieta, string patas);
    virtual ~Mamifero();
    bool getAmamentando();
    void setAmamentando(bool amamentando);
    string getDieta();
    void setDieta(string dieta);
    string getPatas();
    void setPatas(string patas);
    vector<Mamifero*>getMamifero();
    void criarMamifero();
    void removeMamifero(string nome);
    void inserirMamifero(Mamifero* novo);
    void listarMamifero();
};