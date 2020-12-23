#pragma once

#include "mamifero.hpp"
#include "nativo.hpp"
#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;

//Declaraçao da classe MamiferoNativo

class MamiferoNativo: public Mamifero, Nativo{
protected:
    string criadouro;
    vector<shared_ptr<MamiferoNativo>> mamiferonativo;
public:
    MamiferoNativo();
    MamiferoNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, string bioma, string criadouro);
    ~MamiferoNativo();
    string getCriadouro();
    void setCriadouro(string criadouro);
    vector<shared_ptr<MamiferoNativo>>getMamiferoNativo();
    
    void criarMamiferoNativo();
    void removeMamiferoNativo(string nome);
    void inserirMamiferoNativo(shared_ptr<MamiferoNativo> novo);
    void listarMamiferoNativo();
    void gravaMamiferoNativo();
    void lerMamiferoNativo();
    friend ostream& operator<< (ostream &o, MamiferoNativo& mamiferonativo);
    friend istream& operator>> (istream &i, MamiferoNativo& mamiferonativo);
};
