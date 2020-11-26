#pragma once

#include<ostream>  
#include<vector>


using namespace std;

#define CAPACIDADE_MAX 30

//Declaraçao da classe Animais

class Animais{
private:
    string nome;
    string classe;
    string genero;
    int idade;
    Animais* animais[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Animais();
    Animais(string nome, string classe, string genero, int idade);
    ~Animais();
    string getNome();
    void setNome(string nome);
    string getClasse();
    void setClasse(string classe);
    string getGenero();
    void setGenero(string genero);
    int getIdade();
    void setIdade(int idade);
    int getCadastrados();
	void addAnimais(Animais* novo);
	void remAnimais(string nome);
	void listarAnimais();
};


//Declaraçao da classe Anfíbios

class Anfibios: public Animais{
private:
    string trocapele;              //troca de pele parcial
    string excrecao;                //excrementam ureia
    Anfibios* anfibios[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Anfibios();
    Anfibios(string nome, string classe, string genero, int idade);
    ~Anfibios();
    string getTrocapele();
    void setTrocapele(string trocapele);
    string getExcrecao();
    void setExcrecao(string excrecao);
    int getCadastrados();
    void addAnfibios(Anfibios* novo);
	void remAnfibios(string nome);
	void listarAnfibios();
};


//Declaraçao da classe Répteis

class Repteis: public Animais{
private:
    string ecdise;               //troca completa de pele
    string tipopele;             //escama, placa dermica, casco
    Repteis* repteis[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Repteis();
    Repteis(string nome, string classe, string genero, int idade, string ecdise, string tipopele);
    ~Repteis();
    string getEcdise();
    void setEcdise(string ecdise);
    string getTipopele();
    void setTipopele(string tipopele);
    int getCadastrados();
    void addRepteis(Repteis* novo);
	void remRepteis(string nome);
	void listarRepteis();
};


//Declaraçao da classe Répteis

class Aves: public Animais{
private:
    string cor;
    bool voando;
    Aves* aves[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Aves();
    Aves(string nome, string classe, string genero, int idade, string cor, bool voando);
    ~Aves();
    string getCor();
    void setCor(string cor);
    bool getVoando();
    void setVoando(bool voando);
    int getCadastrados();
	void addAves(Aves* novo);
	void remAves(string nome);
	void listarAves();
};


//Declaraçao da classe Mamíferos

class Mamiferos: public Animais{
private:
    bool amamentando;              //em fase de amamentação
    string dieta;                  //carnivoro, onivoro, herbivoro
    string patas;                  //bipede, quadrupede
    Mamiferos* mamiferos[CAPACIDADE_MAX];
    int cadastrados = 0;
public:
    Mamiferos();
    Mamiferos(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas);
    ~Mamiferos();
    bool getAmamentando();
    void setAmamentando(bool amamentando);
    string getDieta();
    void setDieta(string dieta);
    string getPatas();
    void setPatas(string patas);
    int getCadastrados();
	void addMamiferos(Mamiferos* novo);
	void remMamiferos(string nome);
	void listarMamiferos();
};

