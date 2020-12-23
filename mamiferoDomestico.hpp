#pragma once
#include "mamifero.hpp"
#include "domestico.hpp"
#include<memory>
#include<iomanip>
#include<fstream>
#include <vector>

#include <iostream>

using namespace std;


//Declaraçao da classe MamiferoDomestico

class MamiferoDomestico: public Mamifero, Domestico{
protected:
    string dono;
    vector<shared_ptr<MamiferoDomestico>>mamiferodomestico;
public:
    MamiferoDomestico();
    MamiferoDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, bool vacinado, string dono);
    ~MamiferoDomestico();
    string getDono();
    void setDono(string dono);
    vector<shared_ptr<MamiferoDomestico>>getMamiferoDomestico();
    
    void criarMamiferoDomestico();
    void removeMamiferoDomestico(string nome);
    void inserirMamiferoDomestico(shared_ptr<MamiferoDomestico> novo);
    void listarMamiferoDomestico();
    void gravaMamiferoDomestico();
    void lerMamiferoDomestico();
    friend ostream& operator<< (ostream &o, MamiferoDomestico& mamiferodomestico);
    friend istream& operator>> (istream &i, MamiferoDomestico& mamiferodomestico);
    
};
