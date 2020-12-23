#include "aveExotico.hpp"



//Implementação da classe AveExotico

AveExotico::AveExotico(){}

AveExotico::AveExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, string origem, string legalizado):Ave(id, aveExotico, nome, genero, idade, cor, voando), Exotico(origem), legalizado(legalizado){}

AveExotico::~AveExotico(){}

string AveExotico::getLegalizado(){
	return this->legalizado;
}

void AveExotico::setLegalizado(string legalizado){
	this->legalizado= legalizado;
}


vector<shared_ptr<AveExotico>> AveExotico::getAveExotico(){
	return this->aveexotico;
}

void AveExotico::criarAveExotico(){
	int cAve_id;
    string cAve_nome;
    int cAve_idade;
    string cAve_genero;
	string cAve_cor;
	bool cAve_voando;
	string cAve_origem;
	string cAve_legalizacao;
    int aux = 1;
	char letra = 'n';

    do{
    cout << "Id: ";
    cin >> cAve_id;
    cout << "Nome: ";
    cin >> cAve_nome;
    cout << "Idade: ";
	cin >> cAve_idade;
	cout << "Genero: ";
	cin >> cAve_genero;
	cout << "Cor: ";
	cin >> cAve_cor;
	cout << "Apta a voar? - S/s(sim) - N/n(não): ";
	cin >> letra;
	if(letra == 'S' || letra == 's'){
        cAve_voando = true;
    }
    else if (letra == 'N' || letra == 'n')    {
        cAve_voando = false;
    }
	else{
		cout << "valor incorreto" << endl;
	}
	cout << "País de origem: ";
	cin >> cAve_origem;
	cout << "Legalizacao: ";
	cin >> cAve_legalizacao;
	
	

    
    shared_ptr<AveExotico> criado = make_shared<AveExotico>(cAve_id, aveExotico, cAve_nome, cAve_genero, cAve_idade, cAve_cor, cAve_voando, cAve_origem, cAve_legalizacao);

    this->inserirAveExotico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AveExotico::removeAveExotico(string nome){
	int y = aveexotico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->aveexotico.at(x)->getNome() == nome){
            this->aveexotico.erase(this->aveexotico.begin()+x);
         }
     }
}

void AveExotico::inserirAveExotico(shared_ptr<AveExotico> novo){
	this->aveexotico.push_back(novo);
}


void AveExotico::gravaAveExotico(){
	ofstream arquivo("arqAveExotico.txt");
	for(auto& x: this->aveexotico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getCor() << "-" << x->getVoando()
		<< "-" << x->getOrigem() << "-" << x->getLegalizado() << "-" << endl;
	}
	arquivo.close();
}



void AveExotico::lerAveExotico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, cor, origem, legalizado;
	int id, idade;
	bool voando;
	arquivo.open("arqAveExotico.txt",ios::in);    
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
			cor = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		if(aux==5){
			if((stoi(auxiliar.at(x)))==1){
				voando = true;
			}
			else if((stoi(auxiliar.at(x)))==0){
				voando = false;
			}
		}
		if(aux==6){
			origem = auxiliar.at(x);
			
			//cout << habilidade << endl;
		}
		if(aux==7){
			legalizado = auxiliar.at(x);
			//cout << habilidade << endl;
		}

        
        aux++;
		if(aux == 8){
			aux = 0;
			shared_ptr<AveExotico> criado = make_shared<AveExotico>(id, aveExotico, nome, genero, idade, cor, voando, origem, legalizado);

    		this->inserirAveExotico(criado);
		}
	 }
	arquivo.close();
}




void AveExotico::listarAveExotico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (15) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Cor" << " | " 
		<< setfill (' ') << setw (15) << "Voando" << " | "
		<< setfill (' ') << setw (15) << "Origem" << " | "
		<< setfill (' ') << setw (15) << "Legalizacao" << endl;
    for(auto& x: this->aveexotico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AveExotico& aveexotico){
    string strVoando = (aveexotico.voando == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << aveexotico.getId() << " | " 
		<< setfill ('.') << setw (30) << aveexotico.getNome() << " | " 
		<< setfill (' ') << setw (5) << aveexotico.getIdade() << " | "
		<< setfill (' ') << setw (15) << aveexotico.getGenero() << " | " 
		<< setfill (' ') << setw (15) << aveexotico.getCor() <<" | " 
		<< setfill (' ') << setw (15) << strVoando << " | "
		<< setfill (' ') << setw (15) << aveexotico.getOrigem() << " | " 
		<< setfill (' ') << setw (15) << aveexotico.getLegalizado() << endl;
	return o;
}
