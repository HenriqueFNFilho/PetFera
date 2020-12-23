#include "anfibioExotico.hpp"


//Implementação da classe AnfibioExotico


AnfibioExotico::AnfibioExotico(){}

AnfibioExotico::AnfibioExotico(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, string origem, string legalizado): Anfibio(id, anfibioExotico, nome, genero, idade, trocapele, excrecao), Exotico(origem), legalizado(legalizado){}

AnfibioExotico::~AnfibioExotico(){}

string AnfibioExotico::getLegalizado(){
	return this->legalizado;
}

void AnfibioExotico::setLegalizado(string legalizado){
	this->legalizado = legalizado;
}


vector<shared_ptr<AnfibioExotico>> AnfibioExotico::getAnfibioExotico(){
	return this->anfibioexotico;
}


void AnfibioExotico::criarAnfibioExotico(){
	int cAnf_id;
    string cAnf_nome;
    int cAnf_idade;
    string cAnf_genero;
	string cAnf_trocapele;
	string cAnf_excrecao;
	string cAnf_origem;
	string cAnf_legalizado;
    int aux = 1;
	

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
	cout << "Origem: ";
	cin >> cAnf_origem;
	cout << "Legalizacao: ";
	cin >> cAnf_legalizado;
	

    
    shared_ptr<AnfibioExotico> criado = make_shared<AnfibioExotico>(cAnf_id, anfibioExotico, cAnf_nome, cAnf_genero, cAnf_idade, cAnf_trocapele, cAnf_excrecao, cAnf_origem, cAnf_legalizado);

    this->inserirAnfibioExotico(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AnfibioExotico::removeAnfibioExotico(string nome){
	int y = anfibioexotico.size();
     for(int x = 0; x < (y-1); x++){
         if(this->anfibioexotico.at(x)->getNome() == nome){
            this->anfibioexotico.erase(this->anfibioexotico.begin()+x);
         }
     }
}



void AnfibioExotico::inserirAnfibioExotico(shared_ptr<AnfibioExotico> novo){
	this->anfibioexotico.push_back(novo);
}



void AnfibioExotico::gravaAnfibioExotico(){
    ofstream arquivo("arqAnfibioExotico.txt");
	for(auto& x: this->anfibioexotico){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getTrocapele() << "-" << x->getExcrecao()
		<< "-" << x->getOrigem() << "-" << getLegalizado() << "-" << endl;
	}
	arquivo.close();
}



void AnfibioExotico::lerAnfibioExotico(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, trocapele, excrecao, dono, origem, legalizado;
	int id, idade;
	arquivo.open("arqAnfibioExotico.txt",ios::in);    
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
			shared_ptr<AnfibioExotico> criado = make_shared<AnfibioExotico>(id, anfibioExotico, nome, genero, idade, trocapele, excrecao, origem, legalizado);

    		this->inserirAnfibioExotico(criado);
		}
	 }
	arquivo.close();
}



void AnfibioExotico::listarAnfibioExotico(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Troca de pele" <<" | " 
		<< setfill (' ') << setw (10) << "Excreção" << " | " 
		<< setfill (' ') << setw (10) << "Origem" <<" | " 
		<< setfill (' ') << setw (10) << "Legalizacao" << endl;
    for(auto& x: this->anfibioexotico){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AnfibioExotico& anfibioexotico){
	o << setfill (' ') << setw (5) << anfibioexotico.getId() << " | " 
		<< setfill ('.') << setw (20) << anfibioexotico.getNome() << " | " 
		<< setfill (' ') << setw (5) << anfibioexotico.getIdade() << " | "
		<< setfill (' ') << setw (10) << anfibioexotico.getGenero() << " | " 
		<< setfill (' ') << setw (15) << anfibioexotico.getTrocapele() <<" | " 
		<< setfill (' ') << setw (10) << anfibioexotico.getExcrecao() <<" | " 
		<< setfill (' ') << setw (10) << anfibioexotico.getOrigem() <<" | " 
		<< setfill (' ') << setw (10) << anfibioexotico.getLegalizado() << endl;
	return o;
}
