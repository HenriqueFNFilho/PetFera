#pragma once

#include<vector>

#include<string>
#include<ostream>

using std::string;
using std::ostream;

using namespace std;

//Declaração da classe Profissional

class Profissional{
private:
    int id;
    string nome;
    int idade;
    string genero;
    
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
    friend ostream& operator<< (ostream& o, Profissional& profissional);
    
    
};


//Declaração da classe Tratador

class Tratador: public Profissional{
private:
    string habilidade;               //alimentador, lavador, limpador (limpa os excrementos)
public:
    Tratador();
    Tratador(int id, string nome, int idade, string genero, string habilidade);
    ~Tratador();
    string getHabilidade();
    void setHabilidade(string habilidade);
	friend ostream& operator<< (ostream &o, Tratador& tratador);
    void criaTratador();

    
};


//Declaração da classe Veterinario

class Veterinario: public Profissional{
private:
    string especialidade;                //especialização em mamíferos, répteis, anfíbios, ou aves
    string formacao;                     //graduação, mestrado, doutorado
public:
    Veterinario();
    Veterinario(int id, string nome, int idade, string genero, string especialidade, string formacao);
    ~Veterinario();
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    string getFormacao();
    void setFormacao(string formacao);
	friend ostream& operator<< (ostream &o, Veterinario& veterinario);
};


 