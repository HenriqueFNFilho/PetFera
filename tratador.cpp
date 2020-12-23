#include <iomanip>
#include "profissional.hpp"
#include "tratador.hpp"
#include<iostream>
#include<fstream>

using std::cin;
using std::cout;
using std::ios;
using std::setfill;
using std::setw;

//implementação da classe Tratador

Tratador::Tratador(){}

Tratador::Tratador(int id, string nome, int idade, string genero, string habilidade): Profissional(id, nome, idade, genero), habilidade(habilidade){}

Tratador::~Tratador(){}

string Tratador::getHabilidade(){
    return this->habilidade;
}
void Tratador::setHabilidade(string habilidade){
    this->habilidade = habilidade;
}

void Tratador::setId(int id){
    this->id = id;
}


ostream& 
operator<< (ostream &o, Tratador& tratador){
	o << setfill (' ') << setw (10) << tratador.getId() << " | " 
		<< setfill ('.') << setw (30) << tratador.getNome() << " | " 
		<< setfill (' ') << setw (5) << tratador.getIdade() << " | "
		<< setfill (' ') << setw (10) << tratador.getGenero() << " | " 
		<< setfill (' ') << setw (10) << tratador.getHabilidade() << endl;
	return o;
}

vector<shared_ptr<Tratador>> Tratador::getTratador(){
    return this->tratador;
}

void Tratador::criarTratador(){
    int cT_id;
    string cT_nome;
    int cT_idade;
    string cT_genero;
	string cT_habilidade;
    int aux = 1;

    do{
    	cout << "Id: ";
    	cin >> cT_id;
    	cout << "Nome: ";
    	cin >> cT_nome;
    	cout << "Idade: ";
		cin >> cT_idade;
		cout << "Genero: ";
		cin >> cT_genero;
		cout << "Habilidade: ";
		cin >> cT_habilidade;
    
    	shared_ptr<Tratador> criado = make_shared<Tratador>(cT_id, cT_nome, cT_idade, cT_genero, cT_habilidade);

    	this->inserirTratador(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;
    }while(aux == 1);

}

void Tratador::inserirTratador(shared_ptr<Tratador> novo){
    this->tratador.push_back(novo);
}

 void Tratador::removeTratador(string nome){
     int y = tratador.size();
     for(int x = 0; x < (y-1); x++){
         if(this->tratador.at(x)->getNome() == nome){
            this->tratador.erase(this->tratador.begin()+x);
         }
     }
 }

void Tratador::listarTratador(){
	cout << setfill (' ') << setw (10) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (10) << "Habilidade" << endl;
    for(auto& x: this->tratador){
        cout << *x;
    }
}

/*
istream& operator>> (istream &i, Tratador& tratador) {
		i >> tratador.setId() >>  tratador.setNome() >> tratador.setIdade() >> tratador.setGenero() >> tratador.setHabilidade() >> endl;
		return i;
}
*/

/*
void Tratador::extraiTratador(){
	for(auto& x: tratador){
		cin >> *x;
	}
}
*/

void Tratador::gravaTratador(){
	ofstream arquivo("arqTratador.txt");
	for(auto& x: this->tratador){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getHabilidade() << "-" << endl;
	}
	arquivo.close();
}

void Tratador::lerTratador(){
	vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, habilidade;
	int id, idade;
	arquivo.open("arqTratador.txt",ios::in);    
    if(arquivo.is_open()){
    	while(getline(arquivo,linha, '-')){
    		auxiliar.push_back(linha);
    	}

	}
    int y = auxiliar.size();
     for(int x = 0; x < (y-1); x++){
		if(aux==0){
			id = (stoi(auxiliar.at(x)));
			//cout << id << endl;
		}
		if(aux==1){
			nome = auxiliar.at(x);
			//cout << nome << endl;
		}
		if(aux==2){
			genero = auxiliar.at(x);
			//cout << genero << endl;
		}
		if(aux==3){
			idade = (stoi(auxiliar.at(x)));
			//cout << idade << endl;
		}
		if(aux==4){
			habilidade = auxiliar.at(x);
			//cout << habilidade << endl;
		}

        
        aux++;
		if(aux == 5){
			aux = 0;
			shared_ptr<Tratador> criado = make_shared<Tratador>(id, nome, idade, genero, habilidade);

    		this->inserirTratador(criado);
		}
	 }
	arquivo.close();
}
