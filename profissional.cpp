#include <iomanip>
#include "profissional.hpp"
#include<iostream>

using std::cin;
using std::cout;

using std::setfill;
using std::setw;


//implementação da classe Profissional

Profissional::Profissional(){
    this->nome = "Null";
}

Profissional::Profissional(int id, string nome, int idade, string genero):id(id), nome(nome), idade(idade), genero(genero){}

Profissional::~Profissional()
{
}

int Profissional::getId(){
    return this->id;
}
void Profissional::setId(int id){
    this->id = id;
}
string Profissional::getNome(){
    return this->nome;
}
void Profissional::setNome(string nome){
    this->nome = nome;
}
int Profissional::getIdade(){
    return this->idade;
}
void Profissional::setIdade(int idade){
    this->idade = idade;
}
string Profissional::getGenero(){
    return this->genero;
}
void Profissional::setGenero(string genero){
    this->genero = genero;
}
ostream& operator<< (ostream& o, Profissional& profissional){
    o << setfill (' ') << setw (10) << profissional.getId() << " | " 
		<< setfill ('.') << setw (50) << profissional.getNome() << " | " 
		<< setfill (' ') << setw (5) << profissional.getIdade()<< " | "
		<< setfill (' ') << setw (10) << profissional.getGenero();
	return o;
}

vector<Profissional*> Profissional::getProfissional(){
	return this->profissional;
}

void Profissional::criarProfissional(){
	int cP_id;
    string cP_nome;
    int cP_idade;
    string cP_genero;
    int aux = 1;

    do{
    cout << "Id: ";
    cin >> cP_id;
    cout << "Nome: ";
    cin >> cP_nome;
    cout << "Idade: ";
	cin >> cP_idade;
	cout << "Genero: ";
	cin >> cP_genero;
    
    Profissional* criado = new Profissional(cP_id, cP_nome, cP_idade, cP_genero);

    this->inserirProfissional(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}

void Profissional::removeProfissional(string nome){
	int y = profissional.size();
     for(int x = 0; x < (y-1); x++){
         if(this->profissional.at(x)->getNome() == nome){
            this->profissional.erase(this->profissional.begin()+x);
         }
     }
}

void Profissional::inserirProfissional(Profissional* novo){
	this->profissional.push_back(novo);
}

void Profissional::listarProfissional(){
	for(auto& x: this->profissional){
        cout << x->getId() << endl << x->getNome() << endl << x->getIdade() << endl << x->getGenero() << endl;
		cout << endl;
    }
}





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
ostream& 
operator<< (ostream &o, Tratador& tratador){
	o << setfill (' ') << setw (10) << tratador.getId() << " | " 
		<< setfill ('.') << setw (50) << tratador.getNome() << " | " 
		<< setfill (' ') << setw (5) << tratador.getIdade() << " | "
		<< setfill (' ') << setw (10) << tratador.getGenero() << " | " 
		<< setfill (' ') << setw (50) << tratador.getHabilidade();
	return o;
}

vector<Tratador*> Tratador::getTratador(){
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
    
    	Tratador* criado = new Tratador(cT_id, cT_nome, cT_idade, cT_genero, cT_habilidade);

    	this->inserirTratador(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;
    }while(aux == 1);

}

void Tratador::inserirTratador(Tratador* novo){
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
    for(auto& x: this->tratador){
        cout << x->getId() << endl << x->getNome() << endl << x->getIdade() << endl << x->getGenero() << endl << x->getHabilidade() << endl;
		cout << endl;
    }
}










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
