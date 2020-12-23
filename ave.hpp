#pragma once
#include<iostream>
#include<vector>
#include "animal.hpp"
#include<memory>

//Declaraçao da classe Répteis

class Ave: public Animal{
protected:
    string cor;
    bool voando;
    vector<shared_ptr<Ave>>ave;
public:
    Ave();
    Ave(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando);
    virtual ~Ave() = 0;
    string getCor();
    void setCor(string cor);
    bool getVoando();
    void setVoando(bool voando);
    vector<shared_ptr<Ave>>getAve();
    //void criarAve();
    //void removeAve(string nome);
    //void inserirAve(shared_ptr<Ave> novo);
    //void listarAve();
    //void gravaAve();
    //void lerAve();
    //friend ostream& operator<< (ostream &o, Ave& ave);
    //friend istream& operator>> (istream &i, Ave& ave);
};