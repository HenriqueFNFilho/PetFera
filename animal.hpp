#pragma once
#include<iostream>



using namespace std;

enum TipoDoAnimal
{
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
    string nome;
    TipoDoAnimal tipo;
    string genero;
    int idade;
public:
    Animal();
    Animal(string nome, TipoDoAnimal tipo, string genero, int idade);
    virtual ~Animal();
    string getNome() const;
    void setNome(string nome);
    string getGenero();
    void setGenero(string genero);
    int getIdade();
    void setIdade(int idade);
    TipoDoAnimal getTipo();
};


//Declaraçao da classe Anfíbios

class Anfibio: public Animal{
protected:
    string trocapele;              //troca de pele parcial
    string excrecao;               //excrementam ureia
public:
    Anfibio();
    Anfibio(string nome, TipoDoAnimal tipo, string genero, int idade, string trocapele, string excrecao);
    virtual ~Anfibio();
    string getTrocapele() const;
    void setTrocapele(string trocapele);
    string getExcrecao() const;
    void setExcrecao(string excrecao);
};


//Declaraçao da classe Reptil

class Reptil: public Animal{
protected:
    string ecdise;               //troca completa de pele
    string tipopele;             //escama, placa dermica, casco
public:
    Reptil();
    Reptil(string nome, TipoDoAnimal tipo, string genero, int idade, string ecdise, string tipopele);
    virtual ~Reptil();
    string getEcdise();
    void setEcdise(string ecdise);
    string getTipopele();
    void setTipopele(string tipopele);
};


//Declaraçao da classe Répteis

class Ave: public Animal{
protected:
    string cor;
    bool voando;
public:
    Ave();
    Ave(string nome, TipoDoAnimal tipo, string genero, int idade, string cor, bool voando);
    virtual ~Ave();
    string getCor();
    void setCor(string cor);
    bool getVoando();
    void setVoando(bool voando);
};


//Declaraçao da classe Mamíferos

class Mamifero: public Animal{
protected:
    bool amamentando;              //em fase de amamentação
    string dieta;                  //carnivoro, onivoro, herbivoro
    string patas;                  //bipede, quadrupede
public:
    Mamifero();
    Mamifero(string nome, TipoDoAnimal tipo, string genero, int idade, bool amamentando, string dieta, string patas);
    virtual ~Mamifero();
    bool getAmamentando();
    void setAmamentando(bool amamentando);
    string getDieta();
    void setDieta(string dieta);
    string getPatas();
    void setPatas(string patas);
};



//Declaraçao da classe Exotico

class Exotico{
protected:
    bool exotico;
public:
    Exotico(bool exotico);
    ~Exotico();
    bool getExotico();
    void setExotico(bool exotico);
};



//Declaraçao da classe Nativo

class Nativo{
protected:
    bool nativo;
public:
    Nativo(bool nativo);
    ~Nativo();
    bool getNativo();
    void setNativo(bool Nativo);
};



//Declaraçao da classe Domestico

class Domestico{
protected:
    bool domestico;
public:
    Domestico(bool domestico);
    ~Domestico();
    bool getDomestico();
    void setDomestico(bool domestico);
};



//Declaraçao da classe AnfibioExotico

class AnfibioExotico: public Anfibio, Exotico{
protected:
    bool anfibioExotico;
public:
    AnfibioExotico(bool exotico, bool anfibioExotico);
    ~AnfibioExotico();
    bool getAnfibioExotico();
    void setAnfibioExotico(bool anfibioExotico);
};




//Declaraçao da classe AnfibioNativo

class AnfibioNativo: public Anfibio, Nativo{
protected:
    bool anfibioNativo;
public:
    AnfibioNativo(bool nativo, bool anfibioNativo);
    ~AnfibioNativo();
    bool getAnfibioNativo();
    void setAnfibioNativo(bool anfibioNativo);
};




//Declaraçao da classe AnfibioDomestico

class AnfibioDomestico: public Anfibio, Domestico{
protected:
    bool anfibioDomestico;
public:
    AnfibioDomestico(bool domestico, bool anfibioDomestico);
    ~AnfibioDomestico();
    bool getAnfibioDomestico();
    void setAnfibioDomestico(bool anfibioDomestico);
};




//Declaraçao da classe ReptilExotico

class ReptilExotico: public Reptil, Exotico{
protected:
    bool reptilExotico;
public:
    ReptilExotico(bool exotico, bool reptilExotico);
    ~ReptilExotico();
    bool getReptilExotico();
    void setReptilExotico(bool reptilExotico);
};




//Declaraçao da classe ReptilNativo

class ReptilNativo: public Reptil, Nativo{
protected:
    bool reptilNativo;
public:
    ReptilNativo(bool nativo, bool reptilNativo);
    ~ReptilNativo();
    bool getReptilNativo();
    void setReptilNativo(bool reptilNativo);
};





//Declaraçao da classe ReptilDomestico

class ReptilDomestico: public Reptil, Domestico{
protected:
    bool reptilDomestico;
public:
    ReptilDomestico(bool domestico, bool reptilDomestico);
    ~ReptilDomestico();
    bool getReptilDomestico();
    void setReptilDomestico(bool reptilDomestico);
};




//Declaraçao da classe AveExotico

class AveExotico: public Ave, Exotico{
protected:
    bool aveExotico;
public:
    AveExotico(bool exotico, bool aveExotico);
    ~AveExotico();
    bool getAveExotico();
    void setAveExotico(bool aveExotico);
};




//Declaraçao da classe AveNativo

class AveNativo: public Ave, Nativo{
protected:
    bool aveNativo;
public:
    AveNativo(bool nativo, bool aveNativo);
    ~AveNativo();
    bool getAveNativo();
    void setAveNativo(bool aveNativo);
};



//Declaraçao da classe AveDomestico

class AveDomestico: public Ave, Domestico{
protected:
    bool aveDomestico;
public:
    AveDomestico(bool domestico, bool aveDomestico);
    ~AveDomestico();
    bool getAveDomestico();
    void setAveDomestico(bool aveDomestico);
};



//Declaraçao da classe MamiferoExotico

class MamiferoExotico: public Mamifero, Exotico{
protected:
    bool mamiferoExotico;
public:
    MamiferoExotico(bool exotico, bool mamiferoExotico);
    ~MamiferoExotico();
    bool getMamiferoExotico();
    void setMamiferoExotico(bool mamiferoExotico);
};




//Declaraçao da classe MamiferoNativo

class MamiferoNativo: public Mamifero, Nativo{
protected:
    bool mamiferoNativo;
public:
    MamiferoNativo(bool nativo, bool mamiferoNativo);
    ~MamiferoNativo();
    bool getMamiferoNativo();
    void setMamiferoNativo(bool mamiferoNativo);
};




//Declaraçao da classe MamiferoDomestico

class MamiferoDomestico: public Mamifero, Domestico{
protected:
    bool mamiferoDomestico;
public:
    MamiferoDomestico(bool domestico, bool mamiferoDomestico);
    ~MamiferoDomestico();
    bool getMamiferoDomestico();
    void setMamiferoDomestico(bool mamiferoDomestico);
};