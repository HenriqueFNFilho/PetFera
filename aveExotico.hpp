#pragma once

#include "exotico.hpp"
#include "ave.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe AveExotico

class AveExotico: public Ave, Exotico{
protected:
    string legalizado;
    vector<shared_ptr<AveExotico>>aveexotico;
public:
    AveExotico();
    AveExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, string origem, string legalizado);
    ~AveExotico();
    string getLegalizado();
    void setLegalizado(string legalizado);
    vector<shared_ptr<AveExotico>>getAveExotico();

    void criarAveExotico();
    void removeAveExotico(string nome);
    void inserirAveExotico(shared_ptr<AveExotico> novo);
    void listarAveExotico();
    void gravaAveExotico();
    void lerAveExotico();
    friend ostream& operator<< (ostream &o, AveExotico& aveexotico);
    friend istream& operator>> (istream &i, AveExotico& aveexotico);
};