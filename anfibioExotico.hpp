#pragma once

#include "anfibio.hpp"
#include "exotico.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;

class AnfibioExotico: public Anfibio, Exotico{
protected:
    string legalizado;
    vector<shared_ptr<AnfibioExotico>>anfibioexotico;
public:
    AnfibioExotico();
    AnfibioExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, string origem, string legalizado);
    ~AnfibioExotico();
    string getLegalizado();
    void setLegalizado(string legalizado);
    vector<shared_ptr<AnfibioExotico>>getAnfibioExotico();
    void criarAnfibioExotico();
    void removeAnfibioExotico(string nome);
    void inserirAnfibioExotico(shared_ptr<AnfibioExotico> novo);
    void listarAnfibioExotico();
    void gravaAnfibioExotico();
    void lerAnfibioExotico();
    friend ostream& operator<< (ostream &o, AnfibioExotico& anfibioexotico);
    friend istream& operator>> (istream &i, AnfibioExotico& anfibioexotico);
};
