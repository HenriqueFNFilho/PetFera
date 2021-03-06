#include "animal.hpp"
#include "reptil.hpp"
#include<iostream>
#include<iomanip>
#include<fstream>


using std::cin;
using std::cout;
using std::ios;
using std::setfill;
using std::setw;

//Implementação da classe Répteis

Reptil::Reptil(){}

Reptil::Reptil(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele): Animal(id, tipo, nome, genero, idade), ecdise(ecdise), tipopele(tipopele){}


Reptil::~Reptil()
{
}

string Reptil::getEcdise(){
    return this->ecdise;
}
void Reptil::setEcdise(string ecdise){
    this->ecdise = ecdise;
}
string Reptil::getTipopele(){
    return this->tipopele;
}
void Reptil::setTipopele(string tipopele){
    this->tipopele = tipopele;
}

vector<shared_ptr<Reptil>> Reptil::getReptil(){
	return this->reptil;
}

/*
void Reptil::criarReptil(){
	int cR_id;
    string cR_nome;
    int cR_idade;
    string cR_genero;
	string cR_ecdise;
	string cR_tipopele;
    int aux = 1;

    do{
    cout << "Id: ";
    cin >> cR_id;
    cout << "Nome: ";
    cin >> cR_nome;
    cout << "Idade: ";
	cin >> cR_idade;
	cout << "Genero: ";
	cin >> cR_genero;
	cout << "Ecdise: ";
	cin >> cR_ecdise;
	cout << "Tipo de pele: ";
	cin >> cR_tipopele;
    
    shared_ptr<Reptil> criado = make_shared<Reptil>(cR_id, cR_nome, cR_genero, cR_idade ,cR_ecdise, cR_tipopele);

    this->inserirReptil(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}
*/

/*
void Reptil::removeReptil(string nome){
	int y = reptil.size();
     for(int x = 0; x < (y-1); x++){
         if(this->reptil.at(x)->getNome() == nome){
            this->reptil.erase(this->reptil.begin()+x);
         }
     }
}
*/

/*
void Reptil::inserirReptil(shared_ptr<Reptil> novo){
	this->reptil.push_back(novo);
}
*/

/*
void Reptil::gravaReptil(){
	fstream arquivo("arqReptil.txt",ios::in | ios::out | ios::app);
	for(auto& x: this->reptil){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getEcdise() << "-" << x->getTipopele() << endl;
	}
	arquivo.close();
}
*/

/*
void Reptil::lerReptil(){
    fstream arquivo;
	string linha;
	arquivo.open("arqReptil.txt",ios::in);    
    if(arquivo.is_open()){
    	while(getline(arquivo,linha, '-')){
    		cout << linha << endl;
    	}
    }
	arquivo.close();
}
*/

/*
void Reptil::listarReptil(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (15) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Ecdise" << " | " 
		<< setfill (' ') << setw (15) << "Tipo de pele" << endl;
    for(auto& x: this->reptil){
        cout << *x;
    }
}
*/

/*
ostream& 
operator<< (ostream &o, Reptil& reptil){
	o << setfill (' ') << setw (5) << reptil.getId() << " | " 
		<< setfill ('.') << setw (30) << reptil.getNome() << " | " 
		<< setfill (' ') << setw (5) << reptil.getIdade() << " | "
		<< setfill (' ') << setw (15) << reptil.getGenero() << " | " 
		<< setfill (' ') << setw (15) << reptil.getEcdise() <<" | " 
		<< setfill (' ') << setw (15) << reptil.getTipopele() << endl;
	return o;
}
*/