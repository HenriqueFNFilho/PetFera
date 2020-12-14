#include "animal.hpp"
#include<iostream>



using namespace std;

//Implementação da classe Animal
Animal::Animal(){
    this->nome = "Null";
}

Animal::Animal(int id, string nome, string genero, int idade):id(id), nome(nome), genero(genero), idade(idade){}

Animal::~Animal(){}

int Animal::getId(){
	return this->id;
}

void Animal::setId(int id){
	this->id = id;
}

string Animal::getNome() const{
    return this->nome;
}
void Animal::setNome(string nome){
    this->nome = nome;
}

string Animal::getGenero(){
    return this->genero;
}
void Animal::setGenero(string genero){
    this->genero = genero;
}
int Animal::getIdade(){
    return this->idade;
}
void Animal::setIdade(int idade){
    this->idade = idade;
}

vector<Animal*> Animal::getAnimal(){
	return this->animal;
}

void Animal::criarAnimal(){
	int cA_id;
    string cA_nome;
	string cA_genero;
    int cA_idade;
    int aux = 1;

    do{
		cout << "ID: ";
		cin >> cA_id;
    	cout << "Nome: ";
    	cin >> cA_nome;
    	cout << "Idade: ";
		cin >> cA_idade;
		cout << "Genero: ";
		cin >> cA_genero;
    
    	Animal* criado = new Animal(cA_id, cA_nome, cA_genero ,cA_idade);

    	this->inserirAnimal(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);
}

void Animal::removeAnimal(string nome){
	int y = animal.size();
     for(int x = 0; x < (y-1); x++){
         if(this->animal.at(x)->getNome() == nome){
            this->animal.erase(this->animal.begin()+x);
         }
     }
}

void Animal::inserirAnimal(Animal* novo){
	this->animal.push_back(novo);
}

void Animal::listarAnimal(){
	for(auto& x: this->animal){
        cout << x->getId() << endl << x->getNome() << endl <<  x->getGenero() << endl << x->getIdade() <<endl;
		cout << endl;
    }
}




//Implementação da classe Anfibio

Anfibio::Anfibio(){}

Anfibio::Anfibio(int id, string nome, string genero, int idade, string trocapele, string excrecao): Animal(id, nome, genero, idade), trocapele(trocapele), excrecao(excrecao){}

Anfibio::~Anfibio()
{
}

string Anfibio::getTrocapele() const{
    return this->trocapele;
}
void Anfibio::setTrocapele(string trocapele){
    this->trocapele = trocapele;
}
string Anfibio::getExcrecao() const{
    return this->excrecao;
}
void Anfibio::setExcrecao(string excrecao){
    this->excrecao = excrecao;
}

vector<Anfibio*> Anfibio::getAnfibio(){
	return this->anfibio;
}

void Anfibio::criarAnfibio(){
	int cAnf_id;
    string cAnf_nome;
    int cAnf_idade;
    string cAnf_genero;
	string cAnf_trocapele;
	string cAnf_excrecao;
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
    
    Anfibio* criado = new Anfibio(cAnf_id, cAnf_nome, cAnf_genero, cAnf_idade, cAnf_trocapele, cAnf_excrecao);

    this->inserirAnfibio(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}

void Anfibio::removeAnfibio(string nome){
	int y = anfibio.size();
     for(int x = 0; x < (y-1); x++){
         if(this->anfibio.at(x)->getNome() == nome){
            this->anfibio.erase(this->anfibio.begin()+x);
         }
     }
}

void Anfibio::inserirAnfibio(Anfibio* novo){
	this->anfibio.push_back(novo);
}

void Anfibio::listarAnfibio(){
	for(auto& x: this->anfibio){
        cout << x->getId() << endl << x->getNome() << endl <<  x->getGenero() << endl << x->getIdade() << endl << x->getTrocapele() << endl << x->getExcrecao() << endl;
		cout << endl;
    }
}




//Implementação da classe Répteis

Reptil::Reptil(){}

Reptil::Reptil(int id, string nome,string genero, int idade, string ecdise, string tipopele): Animal(id, nome, genero, idade), ecdise(ecdise), tipopele(tipopele){}


Reptil::~Reptil()
{
}

string Reptil::getEcdise(){
    return this->ecdise;
}
void Reptil::setEcdise(string ecdise){
    this->ecdise = ecdise;
}
string Reptil::getTipopele(){
    return this->tipopele;
}
void Reptil::setTipopele(string tipopele){
    this->tipopele = tipopele;
}

vector<Reptil*> Reptil::getReptil(){
	return this->reptil;
}

void Reptil::criarReptil(){
	int cR_id;
    string cR_nome;
    int cR_idade;
    string cR_genero;
	string cR_ecdise;
	string cR_tipopele;
    int aux = 1;

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
    
    Reptil* criado = new Reptil(cR_id, cR_nome, cR_genero, cR_idade ,cR_ecdise, cR_tipopele);

    this->inserirReptil(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}

void Reptil::removeReptil(string nome){
	int y = reptil.size();
     for(int x = 0; x < (y-1); x++){
         if(this->reptil.at(x)->getNome() == nome){
            this->reptil.erase(this->reptil.begin()+x);
         }
     }
}

void Reptil::inserirReptil(Reptil* novo){
	this->reptil.push_back(novo);
}

void Reptil::listarReptil(){
	for(auto& x: this->reptil){
        cout << x->getId() << endl << x->getNome() << endl <<  x->getGenero() << endl << x->getIdade() << endl << x->getEcdise() << endl << x->getTipopele() << endl;
		cout << endl;
    }
}


//Implementação da classe Ave

Ave::Ave(){}

Ave::Ave(int id, string nome, string genero, int idade, string cor, bool voando): Animal(id, nome, genero, idade), cor(cor), voando(voando){}


Ave::~Ave(){}

string Ave::getCor(){
    return this->cor;
}
void Ave::setCor(string cor){
    this->cor = cor;
}
bool Ave::getVoando(){
    return this->voando;
}
void Ave::setVoando(bool voando){
    this->voando = voando;
}
vector<Ave*> Ave::getAve(){
	return this->ave;
}

void Ave::criarAve(){
	int cAve_id;
    string cAve_nome;
    int cAve_idade;
    string cAve_genero;
	string cAve_cor;
	bool cAve_voando;
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
	
	

    
    Ave* criado = new Ave(cAve_id, cAve_nome, cAve_genero, cAve_idade, cAve_cor, cAve_voando);

    this->inserirAve(criado);

    cout << "[1]Inserir outro, [0]Sair:  ";
    cin >> aux;

    }while(aux == 1);
}

void Ave::removeAve(string nome){
	int y = ave.size();
     for(int x = 0; x < (y-1); x++){
         if(this->ave.at(x)->getNome() == nome){
            this->ave.erase(this->ave.begin()+x);
         }
     }
}

void Ave::inserirAve(Ave* novo){
	this->ave.push_back(novo);
}

void Ave::listarAve(){
	for(auto& x: this->ave){
        cout << x->getId() << endl << x->getNome() << endl <<  x->getGenero() << endl << x->getIdade() << endl << x->getCor() << endl;
		if(x->getVoando() == 1){
            cout << "Está voando" << endl;
        }
        else if (x->getVoando()==0){
            cout << "Não está voando" << endl;
        }
		cout << endl;
    }
}



//Implementação da classe Mamíferos

Mamifero::Mamifero(){}

Mamifero::Mamifero(int id, string nome, string genero, int idade, bool amamentando, string dieta, string patas): Animal(id, nome, genero, idade), amamentando(amamentando), dieta(dieta), patas(patas){}


Mamifero::~Mamifero(){}

bool Mamifero::getAmamentando(){
    return this->amamentando;
}
void Mamifero::setAmamentando(bool amamentando){
    this->amamentando = amamentando;
}
string Mamifero::getDieta(){
    return this->dieta;
}
void Mamifero::setDieta(string dieta){
    this->dieta = dieta;
}
string Mamifero::getPatas(){
    return this->patas = patas;
}
void Mamifero::setPatas(string patas){
    this->patas = patas;
}
vector<Mamifero*> Mamifero::getMamifero(){
	return this->mamifero;
}

void Mamifero::criarMamifero(){
	int cM_id;
    string cM_nome;
    int cM_idade;
    string cM_genero;
	bool cM_amamentando;
	string cM_dieta;
	string cM_patas;
	char letra = 'n';
    int aux = 1;

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

	    Mamifero* criado = new Mamifero(cM_id, cM_nome, cM_genero, cM_idade, cM_amamentando, cM_dieta, cM_patas);

    	this->inserirMamifero(criado);

    	cout << "[1]Inserir outro, [0]Sair:  ";
    	cin >> aux;

    }while(aux == 1);
}

void Mamifero::removeMamifero(string nome){
	int y = mamifero.size();
     for(int x = 0; x < (y-1); x++){
         if(this->mamifero.at(x)->getNome() == nome){
            this->mamifero.erase(this->mamifero.begin()+x);
         }
     }
}

void Mamifero::inserirMamifero(Mamifero* novo){
	this->mamifero.push_back(novo);
}

void Mamifero::listarMamifero(){
	for(auto& x: this->mamifero){
        cout << x->getId() << endl << x->getNome() << endl <<  x->getGenero() << endl << x->getIdade() << endl << x->getDieta() << endl << x->getPatas() << endl;
		if(x->getAmamentando() == 1){
            cout << "Está amamentando" << endl;
        }
        else if (x->getAmamentando()==0){
            cout << "Não está amamentando" << endl;
        }
		cout << endl;
    }
}




//Implementação da classe Exotico

Exotico::Exotico(bool exotico):exotico(exotico){}

Exotico::~Exotico(){}

bool Exotico::getExotico(){
	return this->exotico;
}

void Exotico::setExotico(bool exotico){
	this->exotico = exotico;
}

//Implementação da classe Nativo

Nativo::Nativo(bool nativo): nativo(nativo){}

Nativo::~Nativo(){}

bool Nativo::getNativo(){
	return this->nativo;
}

void Nativo::setNativo(bool Nativo){
	this->nativo = nativo;
}


//Implementação da classe Domestico

Domestico::Domestico(bool domestico): domestico(domestico){}

Domestico::~Domestico(){}

bool Domestico::getDomestico(){
	return this->domestico;
}

void Domestico::setDomestico(bool domestico){
	this->domestico = domestico;
}



//Implementação da classe AnfibioExotico

AnfibioExotico::AnfibioExotico(bool exotico, bool anfibioExotico):Exotico(exotico), anfibioExotico(anfibioExotico){}

AnfibioExotico::~AnfibioExotico(){}

bool AnfibioExotico::getAnfibioExotico(){
	return this->anfibioExotico;
}

void AnfibioExotico::setAnfibioExotico(bool anfibioExotico){
	this->anfibioExotico = anfibioExotico;
}



//Implementação da classe AnfibioNativo

AnfibioNativo::AnfibioNativo(bool nativo, bool anfibioNativo): Nativo(nativo), anfibioNativo(anfibioNativo){}

AnfibioNativo::~AnfibioNativo(){}

bool AnfibioNativo::getAnfibioNativo(){
	return this->anfibioNativo;
}

void AnfibioNativo::setAnfibioNativo(bool anfibioNativo){
	this->anfibioNativo = anfibioNativo;
}




//Implementação da classe AnfibioDomestico

AnfibioDomestico::AnfibioDomestico(bool domestico, bool anfibioDomestico):Domestico(domestico), anfibioDomestico(anfibioDomestico){}

AnfibioDomestico::~AnfibioDomestico(){}

bool AnfibioDomestico::getAnfibioDomestico(){
	return this->anfibioDomestico;
}

void AnfibioDomestico::setAnfibioDomestico(bool anfibioDomestico){
	this->anfibioDomestico = anfibioDomestico;
}



//Implementação da classe ReptilExotico

ReptilExotico::ReptilExotico(bool exotico, bool reptilExotico):Exotico(exotico), reptilExotico(reptilExotico){}

ReptilExotico::~ReptilExotico(){}

bool ReptilExotico::getReptilExotico(){
	return this->reptilExotico;
}

void ReptilExotico::setReptilExotico(bool reptilExotico){
	this->reptilExotico = reptilExotico;
}




//Implementação da classe ReptilNativo

ReptilNativo::ReptilNativo(bool nativo, bool reptilNativo):Nativo(nativo), reptilNativo(reptilNativo){}

ReptilNativo::~ReptilNativo(){}

bool ReptilNativo::getReptilNativo(){
	return this->reptilNativo;
}

void ReptilNativo::setReptilNativo(bool reptilNativo){
	this->reptilNativo = reptilNativo;
}




//Implementação da classe ReptilDomestico

ReptilDomestico::ReptilDomestico(bool domestico, bool reptilDomestico):Domestico(domestico), reptilDomestico(reptilDomestico){}

ReptilDomestico::~ReptilDomestico(){}

bool ReptilDomestico::getReptilDomestico(){
	return this->reptilDomestico;
}

void ReptilDomestico::setReptilDomestico(bool reptilDomestico){
	this->reptilDomestico = reptilDomestico;
}




//Implementação da classe AveExotico

AveExotico::AveExotico(bool exotico, bool aveExotico):Exotico(exotico), aveExotico(aveExotico){}

AveExotico::~AveExotico(){}

bool AveExotico::getAveExotico(){
	return this->aveExotico;
}

void AveExotico::setAveExotico(bool aveExotico){
	this->aveExotico = aveExotico;
}



//Implementação da classe AveNativo

AveNativo::AveNativo(bool nativo, bool aveNativo):Nativo(nativo), aveNativo(aveNativo){}

AveNativo::~AveNativo(){}

bool AveNativo::getAveNativo(){
	return this->aveNativo;
}

void AveNativo::setAveNativo(bool aveNativo){
	this->aveNativo = aveNativo;
}




//Implementação da classe AveDomestico

AveDomestico::AveDomestico(bool domestico, bool aveDomestico):Domestico(domestico), aveDomestico(aveDomestico){}

AveDomestico::~AveDomestico(){}

bool AveDomestico::getAveDomestico(){
	return this-aveDomestico;
}

void AveDomestico::setAveDomestico(bool aveDomestico){
	this->aveDomestico = aveDomestico;
}




//Implementação da classe MamiferoExotico

MamiferoExotico::MamiferoExotico(bool exotico, bool mamiferoExotico):Exotico(exotico), mamiferoExotico(mamiferoExotico){}

MamiferoExotico::~MamiferoExotico(){}

bool MamiferoExotico::getMamiferoExotico(){
	return this->mamiferoExotico;
}

void MamiferoExotico::setMamiferoExotico(bool mamiferoExotico){
	this->mamiferoExotico = mamiferoExotico;
}




//Implementação da classe MamiferoNativo

MamiferoNativo::MamiferoNativo(bool nativo, bool mamiferoNativo):Nativo(nativo), mamiferoNativo(mamiferoNativo){}

MamiferoNativo::~MamiferoNativo(){}

bool MamiferoNativo::getMamiferoNativo(){
	return this->mamiferoNativo;
}

void MamiferoNativo::setMamiferoNativo(bool mamiferoNativo){
	this->mamiferoNativo = mamiferoNativo;
}




//Implementação da classe MamiferoDomestico

MamiferoDomestico::MamiferoDomestico(bool domestico, bool mamiferoDomestico):Domestico(domestico), mamiferoDomestico(mamiferoDomestico){}

MamiferoDomestico::~MamiferoDomestico(){}

bool MamiferoDomestico::getMamiferoDomestico(){
	return this->mamiferoDomestico;
}

void MamiferoDomestico::setMamiferoDomestico(bool mamiferoDomestico){
	this->mamiferoDomestico = mamiferoDomestico;
}


