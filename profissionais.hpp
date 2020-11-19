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
    string profissao;
public:
    Profissionais();
    Profissionais(int id, string nome);
    ~Profissionais();
    int getId();
    void setId(int id);
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getGenero();
    void setGenero(string genero);
    string getProfissao();
    void setProfissao(string profissao);
};

#endif
