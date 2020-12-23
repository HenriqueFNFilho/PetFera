#include "reptilExotico.hpp"


//Implementação da classe ReptilExotico

ReptilExotico::ReptilExotico(){}

ReptilExotico::ReptilExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, string origem, string legalizado): Reptil(id, reptilExotico, nome, genero, idade, ecdise, tipopele) , Exotico(origem), legalizado(legalizado){}

ReptilExotico::~ReptilExotico(){}

string ReptilExotico::getLegalizado(){
	return this->legalizado;
}

void  ReptilExotico::setLegalizado(string legalizado){
	this->legalizado = legalizado;
}


vector<shared_ptr<ReptilExotico>>ReptilExotico::getReptilExotico(){
	return this->reptilexotico;
}


void ReptilExotico::criarReptilExotico(){
	int cR_id;
    string cR_nome;
    int cR_idade;
    string cR_genero;
	string cR_ecdise;
	string cR_tipopele;
	string cR_origem;
	string cR_legalizado;
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
    cout << "País de origem: ";
	cin >> cR_origem;
	cout << "Legalização: ";
	cin >> cR_legalizado;

    shared_ptr<ReptilExotico> criado = make_shared<ReptilExotico>(cR_id, reptilExotico, cR_nome, cR_genero, cR_idade ,cR_ecdise, cR_tipopele, cR_origem, cR_legalizado);

    this->inserirReptilExotico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void ReptilExotico::removeReptilExotico(string nome){
	int y = reptilexotico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->reptilexotico.at(x)->getNome() == nome){
            this->reptilexotico.erase(this->reptilexotico.begin()+x);
         }
     }
}



void ReptilExotico::inserirReptilExotico(shared_ptr<ReptilExotico> novo){
	this->reptilexotico.push_back(novo);
}



void ReptilExotico::gravaReptilExotico(){
	ofstream arquivo("arqReptilExotico");
	for(auto& x: this->reptilexotico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getEcdise() << "-" << x->getTipopele()
		<< "-" << x->getOrigem() << "-" << getLegalizado() << "-" << endl;
	}
	arquivo.close();
}



void ReptilExotico::lerReptilExotico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, ecdise, tipopele, origem, legalizado;
	int id, idade;
	arquivo.open("arqReptilExotico.txt",ios::in);    
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
			ecdise = auxiliar.at(x);
			
		}
		if(aux==5){
			tipopele = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		
		if(aux==6){
			origem = auxiliar.at(x);
		}
		if(aux==7){
			legalizado = auxiliar.at(x);
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 8){
			aux = 0;
			shared_ptr<ReptilExotico> criado = make_shared<ReptilExotico>(id, reptilExotico, nome, genero, idade, ecdise, tipopele, origem, legalizado);

    		this->inserirReptilExotico(criado);
		}
	 }
	arquivo.close();
}




void ReptilExotico::listarReptilExotico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (10) << "Ecdise" << " | " 
		<< setfill (' ') << setw (15) << "Tipo de pele" <<  " | "
		<< setfill (' ') << setw (10) << "Origem" << " | " 
		<< setfill (' ') << setw (15) << "Legalizacao" << endl;
    for(auto& x: this->reptilexotico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o,ReptilExotico& reptilexotico){
	o << setfill (' ') << setw (5) << reptilexotico.getId() << " | " 
		<< setfill ('.') << setw (20) << reptilexotico.getNome() << " | " 
		<< setfill (' ') << setw (5) << reptilexotico.getIdade() << " | "
		<< setfill (' ') << setw (10) << reptilexotico.getGenero() << " | " 
		<< setfill (' ') << setw (10) << reptilexotico.getEcdise() <<" | " 
		<< setfill (' ') << setw (15) << reptilexotico.getTipopele() << " | " 
		<< setfill (' ') << setw (10) << reptilexotico.getOrigem() <<" | " 
		<< setfill (' ') << setw (15) << reptilexotico.getLegalizado() <<endl;
	return o;
}
