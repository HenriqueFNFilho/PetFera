#include "anfibioDomestico.hpp"


//Implementação da classe AnfibioDomestico

AnfibioDomestico::AnfibioDomestico(){}

AnfibioDomestico::AnfibioDomestico(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, bool vacinado, string dono): Anfibio(id, anfibioDomestico, nome, genero, idade, trocapele, excrecao), Domestico(vacinado), dono(dono){}

AnfibioDomestico::~AnfibioDomestico(){}

string AnfibioDomestico::getDono(){
	return this->dono;
}

void AnfibioDomestico::setDono(string dono){
	this->dono = dono;
}

vector<shared_ptr<AnfibioDomestico>> AnfibioDomestico::getAnfibioDomestico(){
	return this->anfibiodomestico;
}


void AnfibioDomestico::criarAnfibioDomestico(){
	int cAnf_id;
    string cAnf_nome;
    int cAnf_idade;
    string cAnf_genero;
	string cAnf_trocapele;
	string cAnf_excrecao;
	bool cAnf_vacinado;
	string cAnf_dono;
    int aux = 1;
	char letra = 'n';

    do{
    cout << "Id: ";
    cin >> cAnf_id;
    cout << "Nome: ";
    cin >> cAnf_nome;
    cout << "Idade: ";
	cin >> cAnf_idade;
	cout << "Genero: ";
	cin >> cAnf_genero;
	cout << "Troca de pele: ";
	cin >> cAnf_trocapele;
	cout << "Tipo de excreção: ";
	cin >> cAnf_excrecao;
	cout << "Foi vacinado?: - S/s(sim) - N/n(não): ";
	cin >> letra;
	if(letra == 'S' || letra == 's'){
        cAnf_vacinado = true;
    }
    else if (letra == 'N' || letra == 'n')    {
    	cAnf_vacinado = false;
    }
	else{
		cout << "valor incorreto" << endl;
	}
	cout << "Dono: ";
	cin >> cAnf_dono;
	

    
    shared_ptr<AnfibioDomestico> criado = make_shared<AnfibioDomestico>(cAnf_id, anfibioDomestico, cAnf_nome, cAnf_genero, cAnf_idade, cAnf_trocapele, cAnf_excrecao, cAnf_vacinado, cAnf_dono);

    this->inserirAnfibioDomestico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AnfibioDomestico::removeAnfibioDomestico(string nome){
	int y = anfibiodomestico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->anfibiodomestico.at(x)->getNome() == nome){
            this->anfibiodomestico.erase(this->anfibiodomestico.begin()+x);
         }
     }
}



void AnfibioDomestico::inserirAnfibioDomestico(shared_ptr<AnfibioDomestico> novo){
	this->anfibiodomestico.push_back(novo);
}



void AnfibioDomestico::gravaAnfibioDomestico(){
    ofstream arquivo("arqAnfibioDomestico.txt");
	for(auto& x: this->anfibiodomestico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getTrocapele() << "-" << x->getExcrecao() 
		<< "-" << x->getVacinado() << "-" << x->getDono() << "-" << endl;
	}
	arquivo.close();
}



void AnfibioDomestico::lerAnfibioDomestico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, trocapele, excrecao, dono;
	int id, idade;
	bool vacinado;
	arquivo.open("arqAnfibioDomestico.txt",ios::in);    
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
			trocapele = auxiliar.at(x);
			//cout << habilidade << endl;
		}
		if(aux==5){
			excrecao = auxiliar.at(x);
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
			shared_ptr<AnfibioDomestico> criado = make_shared<AnfibioDomestico>(id, anfibioDomestico, nome, genero, idade, trocapele, excrecao, vacinado, dono);

    		this->inserirAnfibioDomestico(criado);
		}
	 }
	arquivo.close();
}




void AnfibioDomestico::listarAnfibioDomestico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Troca de pele" <<" | " 
		<< setfill (' ') << setw (10) << "Excreção" << " | " 
		<< setfill (' ') << setw (10) << "Vacinado" <<" | " 
		<< setfill (' ') << setw (10) << "Dono" << endl;
    for(auto& x: this->anfibiodomestico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AnfibioDomestico& anfibiodomestico){
	o << setfill (' ') << setw (5) << anfibiodomestico.getId() << " | " 
		<< setfill ('.') << setw (20) << anfibiodomestico.getNome() << " | " 
		<< setfill (' ') << setw (5) << anfibiodomestico.getIdade() << " | "
		<< setfill (' ') << setw (10) << anfibiodomestico.getGenero() << " | " 
		<< setfill (' ') << setw (15) << anfibiodomestico.getTrocapele() <<" | " 
		<< setfill (' ') << setw (10) << anfibiodomestico.getExcrecao() <<" | " 
		<< setfill (' ') << setw (10) << anfibiodomestico.getVacinado() <<" | " 
		<< setfill (' ') << setw (10) << anfibiodomestico.getDono() << endl;
	return o;
}
