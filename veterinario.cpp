#include <iomanip>
#include "profissional.hpp"
#include "veterinario.hpp"
#include<iostream>
#include<fstream>

using std::cin;
using std::cout;
using std::ios;
using std::setfill;
using std::setw;


//implementação da classe Veterinario

Veterinario::Veterinario(){}

Veterinario::Veterinario(int id, string nome, int idade, string genero, string especialidade, string formacao): Profissional(id, nome, idade, genero), especialidade(especialidade), formacao(formacao){}

Veterinario::~Veterinario(){}

string Veterinario::getEspecialidade(){
    return this->especialidade;
}
void Veterinario::setEspecialidade(string especialidade){
    this->especialidade = especialidade;
}
string Veterinario::getFormacao(){
    return this->formacao;
}
void Veterinario::setFormacao(string formacao){
    this->formacao = formacao;
}

void Veterinario::setId(int id){
    this->id = id;
}

ostream& 
operator<< (ostream &o, Veterinario& veterinario){
	o << setfill (' ') << setw (5) << veterinario.getId() << " | " 
		<< setfill ('.') << setw (30) << veterinario.getNome() << " | " 
		<< setfill (' ') << setw (5) << veterinario.getIdade() << " | "
		<< setfill (' ') << setw (15) << veterinario.getGenero() << " | " 
		<< setfill (' ') << setw (15) << veterinario.getEspecialidade() <<" | " 
		<< setfill (' ') << setw (15) << veterinario.getFormacao() << endl;
	return o;
}

vector<shared_ptr<Veterinario>> Veterinario::getVeterinario(){
    return this->veterinario;
}

void Veterinario::criarVeterinario(){
    int cV_id;
    string cV_nome;
    int cV_idade;
    string cV_genero;
	string cV_especialidade;
	string cV_formacao;
    int aux = 1;

    do{
    	cout << "Id: ";
    	cin >> cV_id;
    	cout << "Nome: ";
    	cin >> cV_nome;
    	cout << "Idade: ";
		cin >> cV_idade;
		cout << "Genero: ";
		cin >> cV_genero;
		cout << "Especialidade: ";
		cin >> cV_especialidade;
		cout << "Formação: ";
		cin >> cV_formacao;
    
    	shared_ptr<Veterinario> criado = make_shared<Veterinario>(cV_id, cV_nome, cV_idade, cV_genero, cV_especialidade, cV_formacao);

    	this->inserirVeterinario(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);

}

void Veterinario::inserirVeterinario(shared_ptr<Veterinario> novo){
    this->veterinario.push_back(novo);
}

 void Veterinario::removeVeterinario(string nome){
     int y = veterinario.size();
     for(int x = 0; x < (y-1); x++){
         if(this->veterinario.at(x)->getNome() == nome){
            this->veterinario.erase(this->veterinario.begin()+x);
         }
     }
 }

void Veterinario::listarVeterinario(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (15) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Especialidade" <<" | " 
		<< setfill (' ') << setw (15) << "Formação" << endl;
    for(auto& x: this->veterinario){
        cout << *x;
    }
}

void Veterinario::gravaVeterinario(){
	ofstream arquivo("arqVeterinario.txt");
	for(auto& x: this->veterinario){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getFormacao() << "-" << x->getEspecialidade() << endl;
	}
	arquivo.close();
}

void Veterinario::lerVeterinario(){
	vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, formacao, especialidade;
	int id, idade;
	arquivo.open("arqVeterinario.txt",ios::in);    
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
			formacao = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		if(aux==4){
			especialidade = auxiliar.at(x);
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 5){
			aux = 0;
			shared_ptr<Veterinario> criado = make_shared<Veterinario>(id, nome, idade, genero, formacao, especialidade);

    		this->inserirVeterinario(criado);
		}
	 }
	arquivo.close();
}
