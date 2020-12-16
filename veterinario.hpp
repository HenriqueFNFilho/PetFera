#pragma once

#include<vector>
#include "profissional.hpp"
#include<string>
#include<ostream>



using namespace std;

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