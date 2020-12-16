#pragma once
#include<iostream>
#include<vector>


using namespace std;



//Declaraçao da classe Animal

class Animal{
protected:
    int id;
    string nome;
    string genero;
    int idade;
    vector<Animal*>animal;
public:
    Animal();
    Animal(int id, string nome, string genero, int idade);
    virtual ~Animal();
    int getId();
    void setId(int id);
    string getNome() const;
    void setNome(string nome);
    string getGenero();
    void setGenero(string genero);
    int getIdade();
    void setIdade(int idade);
    vector<Animal*>getAnimal();
    void criarAnimal();
    void removeAnimal(string nome);
    void inserirAnimal(Animal* novo);
    void listarAnimal();
};