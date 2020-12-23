

#include "reptilDomestico.hpp"


//Implementação da classe ReptilDomestico

ReptilDomestico::ReptilDomestico(){}

ReptilDomestico::ReptilDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string ecdise, string tipopele, bool vacinado, string dono): Reptil(id, reptilDomestico, nome, genero, idade, ecdise, tipopele), Domestico(vacinado), dono(dono){}

ReptilDomestico::~ReptilDomestico(){}

string ReptilDomestico::getDono(){
	return this->dono;
}

void ReptilDomestico::setDono(string dono){
	this->dono = dono;
}


vector<shared_ptr<ReptilDomestico>> ReptilDomestico::getReptilDomestico(){
	return this->reptildomestico;
}


void ReptilDomestico::criarReptilDomestico(){
	int cR_id;
    string cR_nome;
    int cR_idade;
    string cR_genero;
	string cR_ecdise;
	string cR_tipopele;
	bool cR_vacinado;
	string cR_dono;
    int aux = 1;
	char letra = 'n';

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
    cout << "Foi vacinado?: - S/s(sim) - N/n(não): ";
	cin >> letra;
	if(letra == 'S' || letra == 's'){
        cR_vacinado = true;
    }
    else if (letra == 'N' || letra == 'n')    {
    	cR_vacinado = false;
    }
	else{
		cout << "valor incorreto" << endl;
	}
	cout << "Dono: ";
	cin >> cR_dono;
    shared_ptr<ReptilDomestico> criado = make_shared<ReptilDomestico>(cR_id, reptilDomestico, cR_nome, cR_genero, cR_idade ,cR_ecdise, cR_tipopele, cR_vacinado, cR_dono);

    this->inserirReptilDomestico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void ReptilDomestico::removeReptilDomestico(string nome){
	int y = reptildomestico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->reptildomestico.at(x)->getNome() == nome){
            this->reptildomestico.erase(this->reptildomestico.begin()+x);
         }
     }
}



void ReptilDomestico::inserirReptilDomestico(shared_ptr<ReptilDomestico> novo){
	this->reptildomestico.push_back(novo);
}



void ReptilDomestico::gravaReptilDomestico(){
	ofstream arquivo("arqReptilDomestico.txt");
	for(auto& x: this->reptildomestico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getEcdise() << "-" << x->getTipopele()
		<< "-" << x->getVacinado() << "-" << x->getDono() << "-" << endl;
	}
	arquivo.close();
}



void ReptilDomestico::lerReptilDomestico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, dono, ecdise, tipopele;
	int id, idade;
	bool vacinado;
	arquivo.open("arqReptilDomestico.txt",ios::in);    
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
			if((stoi(auxiliar.at(x)))==1){
				vacinado = true;
			}
			else if((stoi(auxiliar.at(x)))==0){
				vacinado = false;
			}
			
			//cout << habilidade << endl;
		}
		if(aux==7){
			dono = auxiliar.at(x);
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 8){
			aux = 0;
			shared_ptr<ReptilDomestico> criado = make_shared<ReptilDomestico>(id, reptilDomestico, nome, genero, idade, ecdise, tipopele, vacinado, dono);

    		this->inserirReptilDomestico(criado);
		}
	 }
	arquivo.close();
}



void ReptilDomestico::listarReptilDomestico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (10) << "Ecdise" << " | " 
		<< setfill (' ') << setw (15) << "Tipo de pele" <<  " | "
		<< setfill (' ') << setw (10) << "Vacinado" << " | " 
		<< setfill (' ') << setw (15) << "Dono" << endl;
    for(auto& x: this->reptildomestico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, ReptilDomestico& reptildomestico){
	o << setfill (' ') << setw (5) << reptildomestico.getId() << " | " 
		<< setfill ('.') << setw (20) << reptildomestico.getNome() << " | " 
		<< setfill (' ') << setw (5) << reptildomestico.getIdade() << " | "
		<< setfill (' ') << setw (10) << reptildomestico.getGenero() << " | " 
		<< setfill (' ') << setw (10) << reptildomestico.getEcdise() <<" | " 
		<< setfill (' ') << setw (15) << reptildomestico.getTipopele() << " | " 
		<< setfill (' ') << setw (10) << reptildomestico.getVacinado() <<" | " 
		<< setfill (' ') << setw (15) << reptildomestico.getDono() <<endl;
	return o;
}
