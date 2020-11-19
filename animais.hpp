#ifndef _ANIMAIS_
#define _ANIMAIS_

#include<iostream>  

using namespace std;

class Animais{
private:
    string nome;
    string classe;
    string genero;
    int idade;
public:
    Animais();
    Animais(string nome);
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


#endif