#include "anfibioNativo.hpp"


//Implementação da classe AnfibioNativo

AnfibioNativo::AnfibioNativo(){}

AnfibioNativo::AnfibioNativo(int id, tipoAnimal tipo, string nome, string genero, int idade, string trocapele, string excrecao, string bioma, string criadouro): Anfibio(id, anfibioNativo, nome, genero, idade, trocapele, excrecao), Nativo(bioma), criadouro(criadouro){}

AnfibioNativo::~AnfibioNativo(){}

string AnfibioNativo::getCriadouro(){
	return this->criadouro;
}

void AnfibioNativo::setCriadouro(string criadouro){
	this->criadouro = criadouro;
}


vector<shared_ptr<AnfibioNativo>> AnfibioNativo::getAnfibioNativo(){
	return this->anfibionativo;
}


void AnfibioNativo::criarAnfibioNativo(){
	int cAnf_id;
    string cAnf_nome;
    int cAnf_idade;
    string cAnf_genero;
	string cAnf_trocapele;
	string cAnf_excrecao;
	string cAnf_bioma;
	string cAnf_criadouro;
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
	cout << "Bioma: ";
	cin >> cAnf_bioma;
	cout << "Criadouro: ";
	cin >> cAnf_criadouro;
	

    
    shared_ptr<AnfibioNativo> criado = make_shared<AnfibioNativo>(cAnf_id, anfibioNativo, cAnf_nome, cAnf_genero, cAnf_idade, cAnf_trocapele, cAnf_excrecao, cAnf_bioma, cAnf_criadouro);

    this->inserirAnfibioNativo(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}



void AnfibioNativo::removeAnfibioNativo(string nome){
	int y = anfibionativo.size();
     for(int x = 0; x < (y-1); x++){
         if(this->anfibionativo.at(x)->getNome() == nome){
            this->anfibionativo.erase(this->anfibionativo.begin()+x);
         }
     }
}



void AnfibioNativo::inserirAnfibioNativo(shared_ptr<AnfibioNativo> novo){
	this->anfibionativo.push_back(novo);
}



void AnfibioNativo::gravaAnfibioNativo(){
    ofstream arquivo("arqAnfibioNativo.txt");
	for(auto& x: this->anfibionativo){
		arquivo << x->getId() << "-" << x->getNome() << "-" << x->getGenero()
		<< "-" << x->getIdade() << "-" << x->getTrocapele() << "-" << x->getExcrecao()
		<< "-" << x->getBioma() << "-" << x->getCriadouro() << "-" << endl;
	}
	arquivo.close();
}



void AnfibioNativo::lerAnfibioNativo(){
    vector<string>auxiliar;
	fstream arquivo;
	string linha;
	int aux = 0;
	string nome, genero, trocapele, excrecao, dono, bioma, criadouro;
	int id, idade;
	arquivo.open("arqAnfibioNativo.txt",ios::in);    
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
			shared_ptr<AnfibioNativo> criado = make_shared<AnfibioNativo>(id, anfibioNativo, nome, genero, idade, trocapele, excrecao, bioma, criadouro);

    		this->inserirAnfibioNativo(criado);
		}
	 }
	arquivo.close();
}




void AnfibioNativo::listarAnfibioNativo(){
	cout << setfill (' ') << setw (5) << "ID" << " | " 
		<< setfill ('.') << setw (20) << "Nome" << " | " 
		<< setfill (' ') << setw (5) << "Idade" << " | "
		<< setfill (' ') << setw (10) << "Genero" << " | " 
		<< setfill (' ') << setw (15) << "Troca de pele" <<" | " 
		<< setfill (' ') << setw (10) << "Excreção" << " | " 
		<< setfill (' ') << setw (10) << "Bioma" <<" | " 
		<< setfill (' ') << setw (10) << "Criadouro" << endl;
    for(auto& x: this->anfibionativo){
        cout << *x;
    }
}



ostream& 
operator<< (ostream &o, AnfibioNativo& anfibionativo){
	o << setfill (' ') << setw (5) << anfibionativo.getId() << " | " 
		<< setfill ('.') << setw (20) << anfibionativo.getNome() << " | " 
		<< setfill (' ') << setw (5) << anfibionativo.getIdade() << " | "
		<< setfill (' ') << setw (10) << anfibionativo.getGenero() << " | " 
		<< setfill (' ') << setw (15) << anfibionativo.getTrocapele() <<" | " 
		<< setfill (' ') << setw (10) << anfibionativo.getExcrecao() <<" | " 
		<< setfill (' ') << setw (10) << anfibionativo.getBioma() <<" | " 
		<< setfill (' ') << setw (10) << anfibionativo.getCriadouro() << endl;
	return o;
}
