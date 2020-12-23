#pragma once

#include<vector>

#include<string>
#include<ostream>
#include<memory>



using namespace std;

//Declaração da classe Profissional

class Profissional{
protected:
    int id;
    string nome;
    int idade;
    string genero;
    vector<shared_ptr<Profissional>>profissional;
    
public:
    Profissional();
    Profissional(int id, string nome, int idade, string genero);
    virtual ~Profissional();
    int getId();
    virtual void setId(int id) = 0;
    string getNome();
    void setNome(string nome);
    int getIdade();
    void setIdade(int idade);
    string getGenero();
    void setGenero(string genero);
    vector<shared_ptr<Profissional>>getProfissional();
    //void criarProfissional();
    //void removeProfissional(string nome);
    //void inserirProfissional(shared_ptr<Profissional> novo);
    //void listarProfissional();
    //friend ostream& operator<< (ostream& o, Profissional& profissional);
    
    
};
