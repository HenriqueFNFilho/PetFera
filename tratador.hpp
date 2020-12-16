#pragma once
#include "profissional.hpp"

#include<vector>

#include<string>
#include<ostream>



using namespace std;

//Declaração da classe Tratador

class Tratador: public Profissional{
private:
    string habilidade;               //alimentador, lavador, limpador (limpa os excrementos)
    vector<Tratador*>tratador;
public:
    Tratador();
    Tratador(int id, string nome, int idade, string genero, string habilidade);
    ~Tratador();
    string getHabilidade();
    void setHabilidade(string habilidade);
	friend ostream& operator<< (ostream &o, Tratador& tratador);
    vector<Tratador*>getTratador();
    void criarTratador();
    void removeTratador(string nome);
    void inserirTratador(Tratador* novo);
    void listarTratador();

    
};
