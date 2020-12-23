#include "mamiferoExotico.hpp"

//Implementação da classe MamiferoExotico

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, string origem, string legalizado):Mamifero(id, mamiferoExotico, nome, genero, idade, amamentando, dieta, patas), Exotico(origem), legalizado(legalizado){}

MamiferoExotico::~MamiferoExotico(){}

string MamiferoExotico::getLegalizado(){
	return this->legalizado;
}

void MamiferoExotico::setLegalizado(string legalizado){
	this->legalizado = legalizado;
}

vector<shared_ptr<MamiferoExotico>> MamiferoExotico::getMamiferoExotico(){
	return this->mamiferoexotico;
}

void MamiferoExotico::criarMamiferoExotico(){
	int cM_id;
    string cM_nome;
    int cM_idade;
    string cM_genero;
	bool cM_amamentando;
	string cM_dieta;
	string cM_patas;
	char letra = 'n';
    int aux = 1;
	string cM_origem;
	string cM_legalizado;

    do{
    	cout << "Id: ";
    	cin >> cM_id;
    	cout << "Nome: ";
    	cin >> cM_nome;
    	cout << "Idade: ";
		cin >> cM_idade;
		cout << "Genero: ";
		cin >> cM_genero;
		cout << "Amamentando? - S/s(sim) - N/n(não): ";
		cin >> letra;
		if(letra == 'S' || letra == 's'){
        	cM_amamentando = true;
    	}
    	else if (letra == 'N' || letra == 'n')    {
    	    cM_amamentando = false;
    	}
		else{
			cout << "valor incorreto" << endl;
		}
		cout << "Dieta: ";
		cin >> cM_dieta;
		cout << "Posição de andar: ";
		cin >> cM_patas;
		cout << "Legalizacao: ";
		cin >> cM_origem;
		cout << "Dono: ";
		cin >> cM_legalizado;

	    shared_ptr<MamiferoExotico> criado = make_shared<MamiferoExotico>(cM_id, mamiferoExotico, cM_nome, cM_genero, cM_idade, cM_amamentando, cM_dieta, cM_patas, cM_origem, cM_legalizado);

    	this->inserirMamiferoExotico(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);
}

void MamiferoExotico::removeMamiferoExotico(string nome){
	int y = mamiferoexotico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->mamiferoexotico.at(x)->getNome() == nome){
            this->mamiferoexotico.erase(this->mamiferoexotico.begin()+x);
         }
     }
}

void MamiferoExotico::inserirMamiferoExotico(shared_ptr<MamiferoExotico> novo){
	this->mamiferoexotico.push_back(novo);
}


void MamiferoExotico::gravaMamiferoExotico(){
	ofstream arquivo("arqMamiferoExotico.txt");
	for(auto& x: this->mamiferoexotico){
		arquivo << x->getId() << "-" << x->getTipo() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getAmamentando() << "-" << x->getPatas() << "-" << x->getDieta()
		<< "-" << x->getOrigem() << "-" << x->getLegalizado() << "-" << endl;
	}
	arquivo.close();
}

void MamiferoExotico::lerMamiferoExotico(){
	vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, dieta, patas, origem, legalizado;
	int id, idade;
	bool amamentando;
	arquivo.open("arqMamiferoExotico.txt",ios::in);    
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
		if(aux==2){
			nome = auxiliar.at(x);
			//cout << nome << endl;
		}
		if(aux==3){
			genero = auxiliar.at(x);
			//cout << genero << endl;
		}
		if(aux==4){
			idade = (stoi(auxiliar.at(x)));
			//cout << idade << endl;
		}
		if(aux==5){
			if((stoi(auxiliar.at(x)))==1){
				amamentando = true;
			}
			else if((stoi(auxiliar.at(x)))==0){
				amamentando = false;
			}
			
		}
		if(aux==6){
			patas = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		if(aux==7){
			dieta = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		if(aux==8){
			origem = auxiliar.at(x);
			
			//cout << habilidade << endl;
		}
		if(aux==9){
			legalizado= auxiliar.at(x);
			
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 10){
			aux = 0;
			shared_ptr<MamiferoExotico> criado = make_shared<MamiferoExotico>(id, mamiferoExotico, nome, genero, idade, amamentando, patas, dieta, origem, legalizado);

    		this->inserirMamiferoExotico(criado);
		}
	 }
	arquivo.close();
}

void MamiferoExotico::listarMamiferoExotico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Tipo" << " | "
		<< setfill ('.') << setw (15) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (11) << "Amamentando" <<" | " 
		<< setfill (' ') << setw (15) << "Dieta" << " | "
		<< setfill (' ') << setw (10) << "Patas" << " | "
		<< setfill (' ') << setw (10) << "Vacinado" << " | "
		<< setfill (' ') << setw (15) << "Dono" <<  endl;
    for(auto& x: this->mamiferoexotico){
        cout << *x;
    }
}

ostream& 
operator<< (ostream &o, MamiferoExotico& mamiferoexotico){
	string strAmamentando = (mamiferoexotico.amamentando == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << mamiferoexotico.getId() << " | " 
		<< setfill (' ') << setw (20) << "mamifero exotico" << " | "
		<< setfill ('.') << setw (15) << mamiferoexotico.getNome() << " | " 
		<< setfill (' ') << setw (5) << mamiferoexotico.getIdade() << " | "
		<< setfill (' ') << setw (10) << mamiferoexotico.getGenero() << " | " 
		<< setfill (' ') << setw (11) << strAmamentando << " | " 
		<< setfill (' ') << setw (15) << mamiferoexotico.getDieta() <<" | " 
		<< setfill (' ') << setw (10) << mamiferoexotico.getPatas() << " | " 
		<< setfill (' ') << setw (10) << mamiferoexotico.getOrigem() <<" | " 
		<< setfill (' ') << setw (15) << mamiferoexotico.getLegalizado() << endl;
	return o;
}
