#pragma once

#include "mamifero.hpp"
#include "exotico.hpp"
#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;

//Declaraçao da classe MamiferoExotico

class MamiferoExotico: public Mamifero, Exotico{
protected:
    string legalizado;
    vector<shared_ptr<MamiferoExotico>>mamiferoexotico;
public:
    MamiferoExotico();
    MamiferoExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, string origem, string legalizado);
    ~MamiferoExotico();
    string getLegalizado();
    void setLegalizado(string legalizado);
    vector<shared_ptr<MamiferoExotico>>getMamiferoExotico();
    
    void criarMamiferoExotico();
    void removeMamiferoExotico(string nome);
    void inserirMamiferoExotico(shared_ptr<MamiferoExotico> novo);
    void listarMamiferoExotico();
    void gravaMamiferoExotico();
    void lerMamiferoExotico();
    friend ostream& operator<< (ostream &o, MamiferoExotico& mamiferoexotico);
    friend istream& operator>> (istream &i, MamiferoExotico& mamiferoexotico);
};