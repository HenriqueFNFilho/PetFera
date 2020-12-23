#include "mamiferoNativo.hpp"



//Implementação da classe MamiferoNativo

MamiferoNativo::MamiferoNativo(){}

MamiferoNativo::MamiferoNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, string bioma, string criadouro):Mamifero(id, mamiferoNativo, nome, genero, idade, amamentando, dieta, patas), Nativo(bioma), criadouro(criadouro){}

MamiferoNativo::~MamiferoNativo(){}

string MamiferoNativo::getCriadouro(){
	return this->criadouro;
}

void MamiferoNativo::setCriadouro(string criadouro){
	this->criadouro = criadouro;
}


vector<shared_ptr<MamiferoNativo>> MamiferoNativo::getMamiferoNativo(){
	return this->mamiferonativo;
}

void MamiferoNativo::criarMamiferoNativo(){
	int cM_id;
    string cM_nome;
    int cM_idade;
    string cM_genero;
	bool cM_amamentando;
	string cM_dieta;
	string cM_patas;
	char letra = 'n';
    int aux = 1;
	string cM_bioma;
	string cM_criadouro;

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
		cout << "Bioma: ";
		cin >> cM_bioma;
		cout << "Criadouro: ";
		cin >> cM_criadouro;

	    shared_ptr<MamiferoNativo> criado = make_shared<MamiferoNativo>(cM_id, mamiferoNativo, cM_nome, cM_genero, cM_idade, cM_amamentando, cM_dieta, cM_patas, cM_bioma, cM_criadouro);

    	this->inserirMamiferoNativo(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);
}

void MamiferoNativo::removeMamiferoNativo(string nome){
	int y = mamiferonativo.size();
     for(int x = 0; x < (y-1); x++){
         if(this->mamiferonativo.at(x)->getNome() == nome){
            this->mamiferonativo.erase(this->mamiferonativo.begin()+x);
         }
     }
}

void MamiferoNativo::inserirMamiferoNativo(shared_ptr<MamiferoNativo> novo){
	this->mamiferonativo.push_back(novo);
}


void MamiferoNativo::gravaMamiferoNativo(){
	ofstream arquivo("arqMamiferoNativo.txt");
	for(auto& x: this->mamiferonativo){
		arquivo << x->getId() << "-" << x->getTipo() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getAmamentando() << "-" << x->getPatas() << "-" << x->getDieta()
		<< "-" << x->getBioma() << "-" << getCriadouro() << "-" << endl;
	}
	arquivo.close();
}

void MamiferoNativo::lerMamiferoNativo(){
	vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, dieta, patas, bioma, criadouro;
	int id, idade;
	bool amamentando;
	arquivo.open("arqMamiferoNativo.txt",ios::in);    
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
			bioma = auxiliar.at(x);
			
			//cout << habilidade << endl;
		}
		if(aux==9){
			criadouro= auxiliar.at(x);
			
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 10){
			aux = 0;
			shared_ptr<MamiferoNativo> criado = make_shared<MamiferoNativo>(id, mamiferoNativo, nome, genero, idade, amamentando, patas, dieta, bioma, criadouro);

    		this->inserirMamiferoNativo(criado);
		}
	 }
	arquivo.close();
}

void MamiferoNativo::listarMamiferoNativo(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Tipo" << " | "
		<< setfill ('.') << setw (15) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (11) << "Amamentando" <<" | " 
		<< setfill (' ') << setw (15) << "Dieta" << " | "
		<< setfill (' ') << setw (10) << "Patas" << " | "
		<< setfill (' ') << setw (10) << "Bioma" << " | "
		<< setfill (' ') << setw (15) << "Criadouro" <<  endl;
    for(auto& x: this->mamiferonativo){
        cout << *x;
    }
}

ostream& 
operator<< (ostream &o, MamiferoNativo& mamiferonativo){
	string strAmamentando = (mamiferonativo.amamentando == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << mamiferonativo.getId() << " | " 
		<< setfill (' ') << setw (20) << "mamifero Nativo" << " | "
		<< setfill ('.') << setw (15) << mamiferonativo.getNome() << " | " 
		<< setfill (' ') << setw (5) << mamiferonativo.getIdade() << " | "
		<< setfill (' ') << setw (10) << mamiferonativo.getGenero() << " | " 
		<< setfill (' ') << setw (11) << strAmamentando << " | " 
		<< setfill (' ') << setw (15) << mamiferonativo.getDieta() <<" | " 
		<< setfill (' ') << setw (10) << mamiferonativo.getPatas() << " | " 
		<< setfill (' ') << setw (10) << mamiferonativo.getBioma() <<" | " 
		<< setfill (' ') << setw (15) << mamiferonativo.getCriadouro() << endl;
	return o;
}
