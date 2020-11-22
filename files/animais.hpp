#ifndef _ANIMAIS_
#define _ANIMAIS_

#include<iostream>  

using namespace std;

//Declaraçao da classe Animais

class Animais{
private:
    string nome;
    string classe;
    string genero;
    int idade;
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
};


//Declaraçao da classe Anfíbios

class Anfibios: public Animais{
private:
    string trocapele;              //troca de pele parcial
    string excrecao;                //excrementam ureia
public:
    Anfibios(string nome, string classe, string genero, int idade);
    ~Anfibios();
    string getTrocapele();
    void setTrocapele(string trocapele);
    string getExcrecao();
    void setExcrecao(string excrecao);
};


//Declaraçao da classe Répteis

class Repteis: public Animais{
private:
    string ecdise;               //troca completa de pele
    string tipopele;             //escama, placa dermica, casco
public:
    Repteis(string nome, string classe, string genero, int idade, string ecdise, string tipopele);
    ~Repteis();
    string getEcdise();
    void setEcdise(string ecdise);
    string getTipopele();
    void setTipopele(string tipopele);
};


//Declaraçao da classe Répteis

class Aves: public Animais{
private:
    string cor;
    bool voando;
public:
    Aves(string nome, string classe, string genero, int idade, string cor, bool voando);
    ~Aves();
    string getCor();
    void setCor(string cor);
    bool getVoando();
    void setVoando(bool voando);
};


//Declaraçao da classe Mamíferos

class Mamiferos: public Animais{
private:
    bool amamentando;              //em fase de amamentação
    string dieta;                  //carnivoro, onivoro, herbivoro
    string patas;                  //bipede, quadrupede
public:
    Mamiferos(string nome, string classe, string genero, int idade, bool amamentando, string dieta, string patas);
    ~Mamiferos();
    bool getAmamentando();
    void setAmamentando(bool amamentando);
    string getDieta();
    void setDieta(string dieta);
    string getPatas();
    void setPatas(string patas);
};

#endif