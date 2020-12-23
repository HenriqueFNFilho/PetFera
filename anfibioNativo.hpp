#pragma once

#include "anfibio.hpp"
#include "nativo.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe AnfibioNativo

class AnfibioNativo: public Anfibio, Nativo{
protected:
    string criadouro;
    vector<shared_ptr<AnfibioNativo>>anfibionativo;
public:
    AnfibioNativo();
    AnfibioNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, string bioma, string criadouro);
    ~AnfibioNativo();
    string getCriadouro();
    void setCriadouro(string criadouro);
    vector<shared_ptr<AnfibioNativo>>getAnfibioNativo();
    void criarAnfibioNativo();
    void removeAnfibioNativo(string nome);
    void inserirAnfibioNativo(shared_ptr<AnfibioNativo> novo);
    void listarAnfibioNativo();
    void gravaAnfibioNativo();
    void lerAnfibioNativo();
    friend ostream& operator<< (ostream &o, AnfibioNativo& anfibionativo);
    friend istream& operator>> (istream &i, AnfibioNativo& anfibionativo);
};
