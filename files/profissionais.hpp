#ifndef _PROFISSIONAIS_
#define _PROFISSIONAIS_

#include<iostream>  

using namespace std;

//Declaração da classe Profissionais

class Profissionais{
private:
    int id;
    string nome;
    int idade;
    string genero;
public:
    Profissionais();
    Profissionais(int id, string nome, int idade, string genero);
    ~Profissionais();
    int getId();
    void setId(int id);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getGenero();
    void setGenero(string genero);
};


//Declaração da classe Tratadores

class Tratadores: public Profissionais{
private:
    string habilidade;               //alimentador, lavador, limpador (limpa os excrementos)
public:
    Tratadores(int id, string nome, int idade, string genero, string habilidade);
    ~Tratadores();
    string getHabilidade();
    void setHabilidade(string habilidade);
};


//Declaração da classe Veterinarios

class Veterinarios: public Profissionais{
private:
    string especialidade;                //especialização em mamíferos, répteis, anfíbios, ou aves
    string formacao;                     //graduação, mestrado, doutorado
public:
    Veterinarios(int id, string nome, int idade, string genero, string especialidade, string formacao);
    ~Veterinarios();
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    string getFormacao();
    void setFormacao(string formacao);
};

#endif
