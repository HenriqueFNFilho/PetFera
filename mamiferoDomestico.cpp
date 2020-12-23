#include "mamiferoDomestico.hpp"



//Implementação da classe MamiferoDomestico

MamiferoDomestico::MamiferoDomestico(){}

MamiferoDomestico::MamiferoDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, bool amamentando, string dieta, string patas, bool vacinado, string dono): Mamifero(id, mamiferoDomestico, nome, genero, idade, amamentando, dieta, patas) , Domestico(vacinado), dono(dono){}

MamiferoDomestico::~MamiferoDomestico(){}

string MamiferoDomestico::getDono(){
	return this->dono;
}

void MamiferoDomestico::setDono(string dono){
	this->dono = dono;
}

vector<shared_ptr<MamiferoDomestico>> MamiferoDomestico::getMamiferoDomestico(){
	return this->mamiferodomestico;
}

void MamiferoDomestico::criarMamiferoDomestico(){
	int cM_id;
    string cM_nome;
    int cM_idade;
    string cM_genero;
	bool cM_amamentando;
	string cM_dieta;
	string cM_patas;
	char letra = 'n';
    int aux = 1;
	bool cM_vacinado;
	string cM_dono;

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
		cout << "Foi vacinado?: - S/s(sim) - N/n(não): ";
		cin >> letra;
		if(letra == 'S' || letra == 's'){
        	cM_vacinado = true;
    	}
    	else if (letra == 'N' || letra == 'n')    {
    	    cM_vacinado = false;
    	}
		else{
			cout << "valor incorreto" << endl;
		}
		cout << "Dono: ";
		cin >> cM_dono;

	    shared_ptr<MamiferoDomestico> criado = make_shared<MamiferoDomestico>(cM_id, mamiferoDomestico, cM_nome, cM_genero, cM_idade, cM_amamentando, cM_dieta, cM_patas, cM_vacinado, cM_dono);

    	this->inserirMamiferoDomestico(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);
}

void MamiferoDomestico::removeMamiferoDomestico(string nome){
	int y = mamiferodomestico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->mamiferodomestico.at(x)->getNome() == nome){
            this->mamiferodomestico.erase(this->mamiferodomestico.begin()+x);
         }
     }
}

void MamiferoDomestico::inserirMamiferoDomestico(shared_ptr<MamiferoDomestico> novo){
	this->mamiferodomestico.push_back(novo);
}


void MamiferoDomestico::gravaMamiferoDomestico(){
	ofstream arquivo("arqMamiferoDomestico.txt");
	for(auto& x: this->mamiferodomestico){
		arquivo << x->getId() << "-" << x->getTipo() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getAmamentando() << "-" << x->getPatas() << "-" << x->getDieta() 
		<< "-" << x->getVacinado() << "-" << x->getDono() << "-" << endl;
	}
	arquivo.close();
}

void MamiferoDomestico::lerMamiferoDomestico(){
	vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, dono, dieta, patas;
	int id, idade;
	bool vacinado, amamentando;
	arquivo.open("arqMamiferoDomestico.txt",ios::in);    
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
			if((stoi(auxiliar.at(x)))==1){
				vacinado = true;
			}
			else if((stoi(auxiliar.at(x)))==0){
				vacinado = false;
			}
			
			//cout << habilidade << endl;
		}
		if(aux==9){
			dono = auxiliar.at(x);
			//cout << habilidade << endl;
		}


        
        aux++;
		if(aux == 10){
			aux = 0;
			shared_ptr<MamiferoDomestico> criado = make_shared<MamiferoDomestico>(id, mamiferoDomestico, nome, genero, idade, amamentando, patas, dieta, vacinado, dono);

    		this->inserirMamiferoDomestico(criado);
		}
	 }
	arquivo.close();
}

void MamiferoDomestico::listarMamiferoDomestico(){
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
    for(auto& x: this->mamiferodomestico){
        cout << *x;
    }
}

ostream& 
operator<< (ostream &o, MamiferoDomestico& mamiferodomestico){
	string strAmamentando = (mamiferodomestico.amamentando == true) ? "Sim" : "Nao";
	string strVacinado = (mamiferodomestico.vacinado == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << mamiferodomestico.getId() << " | " 
		<< setfill (' ') << setw (20) << "mamifero domestico" << " | "
		<< setfill ('.') << setw (15) << mamiferodomestico.getNome() << " | " 
		<< setfill (' ') << setw (5) << mamiferodomestico.getIdade() << " | "
		<< setfill (' ') << setw (10) << mamiferodomestico.getGenero() << " | " 
		<< setfill (' ') << setw (11) << strAmamentando << " | " 
		<< setfill (' ') << setw (15) << mamiferodomestico.getDieta() <<" | " 
		<< setfill (' ') << setw (10) << mamiferodomestico.getPatas() << " | " 
		<< setfill (' ') << setw (10) << strVacinado <<" | " 
		<< setfill (' ') << setw (15) << mamiferodomestico.getDono() << endl;
	return o;
}
