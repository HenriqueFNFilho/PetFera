#include "aveNativo.hpp"


//Implementação da classe AveNativo

AveNativo::AveNativo(){}

AveNativo::AveNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, string bioma, string criadouro): Ave(id, aveNativo, nome, genero, idade, cor, voando), Nativo(bioma), criadouro(criadouro){}

AveNativo::~AveNativo(){}

string AveNativo::getCriadouro(){
	return this->criadouro;
}

void AveNativo::setCriadouro(string criadouro){
	this->criadouro = criadouro;
}


vector<shared_ptr<AveNativo>> AveNativo::getAveNativo(){
	return this->avenativo;
}

void AveNativo::criarAveNativo(){
	int cAve_id;
    string cAve_nome;
    int cAve_idade;
    string cAve_genero;
	string cAve_cor;
	bool cAve_voando;
	string cAve_bioma;
	string cAve_criadouro;
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
	cout << "Bioma: ";
	cin >> cAve_bioma;
	cout << "Criadouro: ";
	cin >> cAve_criadouro;
	
	

    
    shared_ptr<AveNativo> criado = make_shared<AveNativo>(cAve_id, aveNativo, cAve_nome, cAve_genero, cAve_idade, cAve_cor, cAve_voando, cAve_bioma, cAve_criadouro);

    this->inserirAveNativo(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AveNativo::removeAveNativo(string nome){
	int y = avenativo.size();
     for(int x = 0; x < (y-1); x++){
         if(this->avenativo.at(x)->getNome() == nome){
            this->avenativo.erase(this->avenativo.begin()+x);
         }
     }
}

void AveNativo::inserirAveNativo(shared_ptr<AveNativo> novo){
	this->avenativo.push_back(novo);
}


void AveNativo::gravaAveNativo(){
	ofstream arquivo("arqAveNativo.txt");
	for(auto& x: this->avenativo){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getCor() << "-" << x->getVoando()
		<< "-" << x->getBioma() << "-" << x->getCriadouro() << "-" << endl;
	}
	arquivo.close();
}



void AveNativo::lerAveNativo(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, cor, bioma, criadouro;
	int id, idade;
	bool voando;
	arquivo.open("arqAveNativo.txt",ios::in);    
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
			bioma = auxiliar.at(x);
			
			//cout << habilidade << endl;
		}
		if(aux==7){
			criadouro = auxiliar.at(x);
			//cout << habilidade << endl;
		}

        
        aux++;
		if(aux == 8){
			aux = 0;
			shared_ptr<AveNativo> criado = make_shared<AveNativo>(id, aveNativo, nome, genero, idade, cor, voando, bioma, criadouro);

    		this->inserirAveNativo(criado);
		}
	 }
	arquivo.close();
}
	



void AveNativo::listarAveNativo(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (15) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Cor" << " | " 
		<< setfill (' ') << setw (15) << "Voando" << " | "
		<< setfill (' ') << setw (15) << "Bioma" << " | "
		<< setfill (' ') << setw (15) << "Criadouro" << endl;
    for(auto& x: this->avenativo){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AveNativo& avenativo){
    string strVoando = (avenativo.voando == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << avenativo.getId() << " | " 
		<< setfill ('.') << setw (30) << avenativo.getNome() << " | " 
		<< setfill (' ') << setw (5) << avenativo.getIdade() << " | "
		<< setfill (' ') << setw (15) << avenativo.getGenero() << " | " 
		<< setfill (' ') << setw (15) << avenativo.getCor() <<" | " 
		<< setfill (' ') << setw (15) << strVoando << " | "
		<< setfill (' ') << setw (15) << avenativo.getBioma() << " | " 
		<< setfill (' ') << setw (15) << avenativo.getCriadouro() << endl;
	return o;
}
