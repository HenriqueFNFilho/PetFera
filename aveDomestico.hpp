#pragma once

#include "domestico.hpp"
#include "ave.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe AveDomestico

class AveDomestico: public Ave, Domestico{
protected:
    string dono;
    vector<shared_ptr<AveDomestico>>avedomestico;
public:
    AveDomestico();
    AveDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, bool vacinado, string dono);
    ~AveDomestico();
    string getDono();
    void setDono(string dono);
    vector<shared_ptr<AveDomestico>>getAveDomestico();

    void criarAveDomestico();
    void removeAveDomestico(string nome);
    void inserirAveDomestico(shared_ptr<AveDomestico> novo);
    void listarAveDomestico();
    void gravaAveDomestico();
    void lerAveDomestico();
    friend ostream& operator<< (ostream &o, AveDomestico& avedomestico);
    friend istream& operator>> (istream &i, AveDomestico& avedomestico);
};
