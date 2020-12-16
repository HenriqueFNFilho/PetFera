#pragma once

#include<vector>

#include<string>
#include<ostream>



using namespace std;

//Declaração da classe Profissional

class Profissional{
private:
    int id;
    string nome;
    int idade;
    string genero;
    vector<Profissional*>profissional;
    
public:
    Profissional();
    Profissional(int id, string nome, int idade, string genero);
    virtual ~Profissional();
    int getId();
    void setId(int id);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getGenero();
    void setGenero(string genero);
    vector<Profissional*>getProfissional();
    void criarProfissional();
    void removeProfissional(string nome);
    void inserirProfissional(Profissional* novo);
    void listarProfissional();
    friend ostream& operator<< (ostream& o, Profissional& profissional);
    
    
};
