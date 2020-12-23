#include "reptilNativo.hpp"



//Implementação da classe ReptilNativo

ReptilNativo::ReptilNativo(){}

ReptilNativo::ReptilNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, string bioma, string criadouro): Reptil(id, reptilNativo, nome, genero, idade, ecdise, tipopele), Nativo(bioma), criadouro(criadouro){}

ReptilNativo::~ReptilNativo(){}

string ReptilNativo::getCriadouro(){
	return this->criadouro;
}

void ReptilNativo::setCriadouro(string criadouro){
	this->criadouro = criadouro;
}


vector<shared_ptr<ReptilNativo>>ReptilNativo::getReptilNativo(){
	return this->reptilnativo;
}


void ReptilNativo::criarReptilNativo(){
	int cR_id;
    string cR_nome;
    int cR_idade;
    string cR_genero;
	string cR_ecdise;
	string cR_tipopele;
	string cR_bioma;
	string cR_criadouro;
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
    cout << "Bioma: ";
	cin >> cR_bioma;
	cout << "Criadouro: ";
	cin >> cR_criadouro;

    shared_ptr<ReptilNativo> criado = make_shared<ReptilNativo>(cR_id, reptilNativo, cR_nome, cR_genero, cR_idade ,cR_ecdise, cR_tipopele, cR_bioma, cR_criadouro);

    this->inserirReptilNativo(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void ReptilNativo::removeReptilNativo(string nome){
	int y = reptilnativo.size();
     for(int x = 0; x < (y-1); x++){
         if(this->reptilnativo.at(x)->getNome() == nome){
            this->reptilnativo.erase(this->reptilnativo.begin()+x);
         }
     }
}



void ReptilNativo::inserirReptilNativo(shared_ptr<ReptilNativo> novo){
	this->reptilnativo.push_back(novo);
}



void ReptilNativo::gravaReptilNativo(){
	ofstream arquivo("arqReptilNativo.txt");
	for(auto& x: this->reptilnativo){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getEcdise() << "-" << x->getTipopele()
		<< "-" << x->getBioma() << "-" << x->getCriadouro() << "-" << endl;
	}
	arquivo.close();
}



void ReptilNativo::lerReptilNativo(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, ecdise, tipopele, bioma, criadouro;
	int id, idade;
	arquivo.open("arqReptilNativo.txt",ios::in);    
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
			bioma = auxiliar.at(x);
		}
		if(aux==7){
			criadouro = auxiliar.at(x);
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 8){
			aux = 0;
			shared_ptr<ReptilNativo> criado = make_shared<ReptilNativo>(id, reptilNativo, nome, genero, idade, ecdise, tipopele, bioma, criadouro);

    		this->inserirReptilNativo(criado);
		}
	 }
	arquivo.close();
}



void ReptilNativo::listarReptilNativo(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (10) << "Ecdise" << " | " 
		<< setfill (' ') << setw (15) << "Tipo de pele" <<  " | "
		<< setfill (' ') << setw (10) << "Bioma" << " | " 
		<< setfill (' ') << setw (15) << "Criadouro" << endl;
    for(auto& x: this->reptilnativo){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o,ReptilNativo& reptilnativo){
	o << setfill (' ') << setw (5) << reptilnativo.getId() << " | " 
		<< setfill ('.') << setw (20) << reptilnativo.getNome() << " | " 
		<< setfill (' ') << setw (5) << reptilnativo.getIdade() << " | "
		<< setfill (' ') << setw (10) << reptilnativo.getGenero() << " | " 
		<< setfill (' ') << setw (10) << reptilnativo.getEcdise() <<" | " 
		<< setfill (' ') << setw (15) << reptilnativo.getTipopele() << " | " 
		<< setfill (' ') << setw (10) << reptilnativo.getBioma() <<" | " 
		<< setfill (' ') << setw (15) << reptilnativo.getCriadouro() <<endl;
	return o;
}
