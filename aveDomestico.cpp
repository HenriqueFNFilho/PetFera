#include "aveDomestico.hpp"


//Implementação da classe AveDomestico

AveDomestico::AveDomestico(){}

AveDomestico::AveDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string cor, bool voando, bool vacinado, string dono): Ave(id, aveDomestico, nome, genero, idade, cor, voando), Domestico(vacinado), dono(dono){}

AveDomestico::~AveDomestico(){}

string AveDomestico::getDono(){
	return this->dono;
}

void AveDomestico::setDono(string dono){
	this->dono = dono;
}

vector<shared_ptr<AveDomestico>> AveDomestico::getAveDomestico(){
	return this->avedomestico;
}

void AveDomestico::criarAveDomestico(){
	int cAve_id;
    string cAve_nome;
    int cAve_idade;
    string cAve_genero;
	string cAve_cor;
	bool cAve_voando;
	bool cAve_vacinado;
	string cAve_dono;
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
	cout << "Foi vacinado?: - S/s(sim) - N/n(não): ";
	cin >> letra;
	if(letra == 'S' || letra == 's'){
        cAve_vacinado = true;
    }
    else if (letra == 'N' || letra == 'n')    {
    	cAve_vacinado = false;
    }
	else{
		cout << "valor incorreto" << endl;
	}
	cout << "Dono: ";
	cin >> cAve_dono;
	
	

    
    shared_ptr<AveDomestico> criado = make_shared<AveDomestico>(cAve_id, aveDomestico, cAve_nome, cAve_genero, cAve_idade, cAve_cor, cAve_voando, cAve_vacinado, cAve_dono);

    this->inserirAveDomestico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AveDomestico::removeAveDomestico(string nome){
	int y = avedomestico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->avedomestico.at(x)->getNome() == nome){
            this->avedomestico.erase(this->avedomestico.begin()+x);
         }
     }
}

void AveDomestico::inserirAveDomestico(shared_ptr<AveDomestico> novo){
	this->avedomestico.push_back(novo);
}


void AveDomestico::gravaAveDomestico(){
	ofstream arquivo("arqAvedomestico.txt");
	for(auto& x: this->avedomestico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getCor() << "-" << x->getVoando() 
		<< "-" << x->getVacinado() << "-" << x->getDono() << "-" << endl;
	}
	arquivo.close();
}



void AveDomestico::lerAveDomestico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, cor, dono;
	int id, idade;
	bool vacinado, voando;
	arquivo.open("arqAvedomestico.txt",ios::in);    
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
			shared_ptr<AveDomestico> criado = make_shared<AveDomestico>(id, aveDomestico, nome, genero, idade, cor, voando, vacinado, dono);

    		this->inserirAveDomestico(criado);
		}
	 }
	arquivo.close();
}





void AveDomestico::listarAveDomestico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (30) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (15) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Cor" << " | " 
		<< setfill (' ') << setw (15) << "Voando" << " | "
		<< setfill (' ') << setw (15) << "Vacinado" << " | "
		<< setfill (' ') << setw (15) << "Dono" << endl;
    for(auto& x: this->avedomestico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AveDomestico& avedomestico){
    string strVoando = (avedomestico.voando == true) ? "Sim" : "Nao";
	o << setfill (' ') << setw (5) << avedomestico.getId() << " | " 
		<< setfill ('.') << setw (30) << avedomestico.getNome() << " | " 
		<< setfill (' ') << setw (5) << avedomestico.getIdade() << " | "
		<< setfill (' ') << setw (15) << avedomestico.getGenero() << " | " 
		<< setfill (' ') << setw (15) << avedomestico.getCor() <<" | " 
		<< setfill (' ') << setw (15) << strVoando << " | "
		<< setfill (' ') << setw (15) << avedomestico.getVacinado() << " | " 
		<< setfill (' ') << setw (15) << avedomestico.getDono() << endl;
	return o;
}
