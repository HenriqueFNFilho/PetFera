#pragma once

#include "reptil.hpp"
#include "exotico.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;

//Declaraçao da classe ReptilExotico

class ReptilExotico: public Reptil, Exotico{
protected:
    string legalizado;
    vector<shared_ptr<ReptilExotico>>reptilexotico;
public:
    ReptilExotico();
    ReptilExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, string origem, string legalizado);
    ~ReptilExotico();
    string getLegalizado();
    void setLegalizado(string legalizado);
    vector<shared_ptr<ReptilExotico>>getReptilExotico();
    void criarReptilExotico();
    void removeReptilExotico(string nome);
    void inserirReptilExotico(shared_ptr<ReptilExotico> novo);
    void listarReptilExotico();
    void gravaReptilExotico();
    void lerReptilExotico();
    friend ostream& operator<< (ostream &o, ReptilExotico& reptilexotico);
    friend istream& operator>> (istream &i, ReptilExotico& reptilexotico);
};