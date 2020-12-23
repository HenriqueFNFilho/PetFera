#pragma once

#include "ave.hpp"
#include "nativo.hpp"

#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;

//Declaraçao da classe AveNativo

class AveNativo: public Ave, Nativo{
protected:
    string criadouro;
    vector<shared_ptr<AveNativo>>avenativo;
public:
    AveNativo();
    AveNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, string bioma, string criadouro);
    ~AveNativo();
    string getCriadouro();
    void setCriadouro(string criadouro);
    vector<shared_ptr<AveNativo>>getAveNativo();

    void criarAveNativo();
    void removeAveNativo(string nome);
    void inserirAveNativo(shared_ptr<AveNativo> novo);
    void listarAveNativo();
    void gravaAveNativo();
    void lerAveNativo();
    friend ostream& operator<< (ostream &o, AveNativo& avenativo);
    friend istream& operator>> (istream &i, AveNativo& avenativo);
};

