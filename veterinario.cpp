#include <iomanip>
#include "profissional.hpp"
#include "veterinario.hpp"
#include<iostream>

using std::cin;
using std::cout;

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
ostream& 
operator<< (ostream &o, Veterinario& veterinario){
	o << setfill (' ') << setw (10) << veterinario.getId() << " | " 
		<< setfill ('.') << setw (50) << veterinario.getNome() << " | " 
		<< setfill (' ') << setw (5) << veterinario.getIdade() << " | "
		<< setfill (' ') << setw (10) << veterinario.getGenero() << " | " 
		<< setfill (' ') << setw (50) << veterinario.getEspecialidade() <<" | " 
		<< setfill (' ') << setw (50) << veterinario.getFormacao();
	return o;
}

vector<Veterinario*> Veterinario::getVeterinario(){
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
    
    	Veterinario* criado = new Veterinario(cV_id, cV_nome, cV_idade, cV_genero, cV_especialidade, cV_formacao);

    	this->inserirVeterinario(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);

}

void Veterinario::inserirVeterinario(Veterinario* novo){
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
    for(auto& x: this->veterinario){
        cout << x->getId() << endl << x->getNome() << endl << x->getIdade() << endl << x->getGenero() << endl << x->getEspecialidade() << endl << x->getFormacao() << endl;
		cout << endl;
    }
}
