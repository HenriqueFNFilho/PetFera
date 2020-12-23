#pragma once
#include<iostream>
#include<vector>
#include<memory>
#include "veterinario.hpp"
#include "tratador.hpp"


using namespace std;

enum tipoAnimal{
    anfibioExotico,
    anfibioNativo,
    anfibioDomestico,
    reptilExotico,
    reptilNativo,
    reptilDomestico,
    aveExotico,
    aveNativo,
    aveDomestico,
    mamiferoExotico,
    mamiferoNativo,
    mamiferoDomestico
};

//Declaraçao da classe Animal

class Animal{
protected:
    int id;
    tipoAnimal tipo;
    string nome;
    string genero;
    int idade;
    vector<shared_ptr<Animal>>animal;
    Veterinario* veterinario;
    Tratador* tratador;
public:
    Animal();
    Animal(int id, tipoAnimal tipo, string nome, string genero, int idade);
    virtual ~Animal() = 0;
    int getId();
    void setId(int id);
    tipoAnimal getTipo();
    void setTipo(tipoAnimal tipo);
    string getNome() const;
    void setNome(string nome);
    string getGenero();
    void setGenero(string genero);
    int getIdade();
    void setIdade(int idade);
    vector<shared_ptr<Animal>>getAnimal();
    Veterinario* getVeterinario();
    void setVeterinario(Veterinario* veterinario);
    Tratador* getTratador();
    void setTratador(Tratador* tratador);
    //void criarAnimal();
    //void removeAnimal(string nome);
    //void inserirAnimal(shared_ptr<Animal> novo);
    //void listarAnimal();
};
