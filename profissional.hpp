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


//Declaração da classe Veterinario

class Veterinario: public Profissional{
private:
    string especialidade;                //especialização em mamíferos, répteis, anfíbios, ou aves
    string formacao;                     //graduação, mestrado, doutorado
    vector<Veterinario*>veterinario;
public:
    Veterinario();
    Veterinario(int id, string nome, int idade, string genero, string especialidade, string formacao);
    ~Veterinario();
    string getEspecialidade();
    void setEspecialidade(string especialidade);
    string getFormacao();
    void setFormacao(string formacao);
	friend ostream& operator<< (ostream &o, Veterinario& veterinario);
    vector<Veterinario*>getVeterinario();
    void criarVeterinario();
    void removeVeterinario(string nome);
    void inserirVeterinario(Veterinario* novo);
    void listarVeterinario();
};


 