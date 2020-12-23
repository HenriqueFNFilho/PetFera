#pragma once

#include "anfibio.hpp"
#include "domestico.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe AnfibioDomestico

class AnfibioDomestico: public Anfibio, Domestico{
protected:
    string dono;
    vector<shared_ptr<AnfibioDomestico>>anfibiodomestico;
public:
    AnfibioDomestico();
    AnfibioDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, bool vacinado, string dono);
    ~AnfibioDomestico();
    string getDono();
    void setDono(string dono);
    vector<shared_ptr<AnfibioDomestico>>getAnfibioDomestico();
    void criarAnfibioDomestico();
    void removeAnfibioDomestico(string nome);
    void inserirAnfibioDomestico(shared_ptr<AnfibioDomestico> novo);
    void listarAnfibioDomestico();
    void gravaAnfibioDomestico();
    void lerAnfibioDomestico();
    friend ostream& operator<< (ostream &o, AnfibioDomestico& anfibiodomestico);
    friend istream& operator>> (istream &i, AnfibioDomestico& anfibiodomestico);
};



