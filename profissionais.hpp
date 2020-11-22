#ifndef _PROFISSIONAIS_
#define _PROFISSIONAIS_

#include<iostream>  

using namespace std;

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

#endif
