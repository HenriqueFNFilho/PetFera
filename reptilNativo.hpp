#pragma once

#include "reptil.hpp"
#include "nativo.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe ReptilNativo

class ReptilNativo: public Reptil, Nativo{
protected:
    string criadouro;
    vector<shared_ptr<ReptilNativo>>reptilnativo;
public:
    ReptilNativo();
    ReptilNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, string bioma, string criadouro);
    ~ReptilNativo();
    string getCriadouro();
    void setCriadouro(string criadouro);
    vector<shared_ptr<ReptilNativo>>getReptilNativo();
    void criarReptilNativo();
    void removeReptilNativo(string nome);
    void inserirReptilNativo(shared_ptr<ReptilNativo> novo);
    void listarReptilNativo();
    void gravaReptilNativo();
    void lerReptilNativo();
    friend ostream& operator<< (ostream &o, ReptilNativo& reptilnativo);
    friend istream& operator>> (istream &i, ReptilNativo& reptilnativo);
};

