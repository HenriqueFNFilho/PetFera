#pragma once
#include<iostream>



using namespace std;

enum TipoDoAnimal
{
    AnfibioExotico,
    AnfibioNativo,
    AnfibioDomestico,
    ReptilExotico,
    ReptilNativo,
    ReptilDomestico,
    AveExotico,
    AveNativo,
    AveDomestico,
    MamiferoExotico,
    MamiferoNativo,
    MamiferoDomestico
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

class Exotico{
protected:
    bool exotico;
public:
    Exotico(bool exotico);
    ~Exotico();
    bool getExotico();
    void setExotico(bool exotico);
};

class Nativo{
protected:
    bool nativo;
public:
    Nativo(bool nativo);
    ~Nativo();
    bool getNativo();
    void setNativo(bool Nativo);
};

class Domestico{
protected:
    bool domestico;
public:
    Domestico(bool domestico);
    ~Domestico();
    bool getDomestico();
    void setDomestico(bool domestico);
};

class AnfibioExotico: public Anfibio, Exotico{
protected:
    bool anfibioExotico;
public:
    AnfibioExotico(bool exotico, bool anfibioExotico);
    bool getAnfibioExotico();
    void setAnfibioExotico(bool anfibioExotico);
};

class AnfibioNativo: public Anfibio, Nativo{
protected:
    bool anfibioNativo;
public:
    AnfibioNativo(bool nativo, bool anfibioNativo);
    bool getAnfibioNativo();
    void setAnfibioNativo(bool anfibioNativo);
};


class AnfibioDomestico: public Anfibio, Domestico{
protected:
    bool anfibioDomestico;
public:
    AnfibioDomestico(bool domestico, bool anfibioDomestico);
    bool getAnfibioDomestico();
    void setAnfibioDomestico(bool anfibioDomestico);
};

class ReptilExotico: public Reptil, Exotico{
protected:
    bool reptilExotico;
public:
    ReptilExotico(bool exotico, bool reptilExotico);
    bool getReptilExotico();
    void setReptilExotico(bool reptilExotico);
};

class ReptilNativo: public Reptil, Nativo{
protected:
    bool reptilNativo;
public:
    ReptilNativo(bool nativo, bool reptilNativo);
    bool getReptilNativo();
    void setReptilNativo(bool reptilNativo);
};

class ReptilDomestico: public Reptil, Domestico{
protected:
    bool reptilDomestico;
public:
    ReptilDomestico(bool domestico, bool reptilDomestico);
    bool getReptilDomestico();
    void setReptilDomestico(bool reptilDomestico);
};

class AveExotico: public Ave, Exotico{
protected:
    bool aveExotico;
public:
    AveExotico(bool exotico, bool aveExotico);
    bool getAveExotico();
    void setAveExotico(bool aveExotico);
};

class AveNativo: public Ave, Nativo{
protected:
    bool aveNativo;
public:
    AveNativo(bool nativo, bool aveNativo);
    bool getAveNativo();
    void setAveNativo(bool aveNativo);
};

class AveDomestico: public Ave, Domestico{
protected:
    bool aveDomestico;
public:
    AveDomestico(bool domestico, bool aveDomestico);
    bool getAveDomestico();
    void setAveDomestico(bool aveDomestico);
};

class MamiferoExotico: public Mamifero, Exotico{
protected:
    bool mamiferoExotico;
public:
    MamiferoExotico(bool exotico, bool mamiferoExotico);
    bool getMamiferoExotico();
    void setMamiferoExotico(bool mamiferoExotico);
};

class MamiferoNativo: public Mamifero, Nativo{
protected:
    bool mamiferoNativo;
public:
    MamiferoNativo(bool nativo, bool mamiferoNativo);
    bool getMamiferoNativo();
    void setMamiferoNativo(bool mamiferoNativo);
};

class MamiferoDomestico: public Mamifero, Domestico{
protected:
    bool mamiferoDomestico;
public:
    MamiferoDomestico(bool domestico, bool mamiferoDomestico);
    bool getMamiferoDomestico();
    void setMamiferoDomestico(bool mamiferoDomestico);
};
