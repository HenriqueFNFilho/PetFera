#pragma once

#include "reptil.hpp"
#include "domestico.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe ReptilDomestico

class ReptilDomestico: public Reptil, Domestico{
protected:
    string dono;
    vector<shared_ptr<ReptilDomestico>>reptildomestico;
public:
    ReptilDomestico();
    ReptilDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, bool vacinado, string dono);
    ~ReptilDomestico();
    string getDono();
    void setDono(string dono);
    vector<shared_ptr<ReptilDomestico>>getReptilDomestico();
    void criarReptilDomestico();
    void removeReptilDomestico(string nome);
    void inserirReptilDomestico(shared_ptr<ReptilDomestico> novo);
    void listarReptilDomestico();
    void gravaReptilDomestico();
    void lerReptilDomestico();
    friend ostream& operator<< (ostream &o, ReptilDomestico& reptildomestico);
    friend istream& operator>> (istream &i, ReptilDomestico& reptildomestico);
};