#pragma once

#include<iostream>  

using namespace std;

#define CAPACIDADE_MAX 30

//Declaração da classe Profissionais

class Profissionais{
private:
    int id;
    string nome;
    int idade;
    string genero;
    Profissionais* profissionais[CAPACIDADE_MAX];
    int cadastrados = 0;
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
    int getCadastrados();
	void addProfissionais(Profissionais* novo);
	void remProfissionais(string nome);
	void listarProfissionais();
};


//Declaração da classe Tratadores

class Tratadores: public Profissionais{
private:
    string habilidade;               //alimentador, lavador, limpador (limpa os excrementos)
    Tratadores* tratadores[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Tratadores();
    Tratadores(int id, string nome, int idade, string genero, string habilidade);
    ~Tratadores();
    string getHabilidade();
    void setHabilidade(string habilidade);
    int getCadastrados();
	void addTratadores(Tratadores* novo);
	void remTratadores(string nome);
	void listarTratadores();
};


//Declaração da classe Veterinarios

class Veterinarios: public Profissionais{
private:
    string especialidade;                //especialização em mamíferos, répteis, anfíbios, ou aves
    string formacao;                     //graduação, mestrado, doutorado
    Veterinarios* veterinarios[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Veterinarios();
    Veterinarios(int id, string nome, int idade, string genero, string especialidade, string formacao);
    ~Veterinarios();
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    string getFormacao();
    void setFormacao(string formacao);
    int getCadastrados();
	void addVeterinarios(Veterinarios* novo);
	void remVeterinarios(string nome);
	void listarVeterinarios();
};


