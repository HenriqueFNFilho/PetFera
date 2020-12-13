#include<iostream>
#include "animal.hpp"
#include "profissional.hpp"
#include <vector>

using namespace std;

int main(int argc, char const *argv[]){
	
    Tratador* tratador = new Tratador();
    Veterinario* veterinario = new Veterinario();


    vector<Animal*> *animal = new vector<Animal*>;

    Animal* reptil = new Reptil();
	Animal* anfibio = new Anfibio();
	Animal* ave = new Ave();
	Animal* mamifero = new Mamifero();

    int x;
    int y;
    string a;
    string b;
    string c;
    string d;
    string e;
    bool k = false;
    int anf, rep, av, mam, ani = 0;

    

    do{
        
        cout << "[2]Profissionais"<< endl << "[1]Animais" << endl << "[0]Sair"<< endl << ":";
        cin >> x;
        if(x!=0 && x!=1 && x!=2){
            cout << "Digite um valor válido!" << endl;
        }
        else if(x==1 || x==2){
            if(x==2){
                do{
                    cout << "[2]Veterinario" << endl << "[1]Tratador" << endl << "[0]Sair" << endl << ":";
                    cin >> y;
                }while (y!=0 && y!=1 && y!= 2);
                if(y==2){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        //inserir veterinario
                        veterinario->criarVeterinario();
                    }
                    else if (y==2){
                        //remove veterinario
                        cout << "Qual o nome do veterinario que deseja remover?: ";
                        cin >> a; 
                        veterinario->removeVeterinario(a);
                    }
                    else if (y==1){
                        //listar Veterinarios
                        cout << endl << "Os tratadores são:" << endl;
                        veterinario->listarVeterinario();
                    }
                    y=10;
                    
                    
                }
                else if(y==1){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        //inserir tratador
                        tratador->criarTratador();
                    }
                    else if (y==2){
                        //excluir Tratador
                        cout << "Qual o nome do tratador que deseja remover?: ";
                        cin >> a; 
                        tratador->removeTratador(a);
                    }
                    else if (y==1){
                        //listar Tratador
                        cout << endl << "Os tratadores são:" << endl;
                        tratador->listarTratador();
                    }
                    
                                      
                }
                
            }
            else if(x==1){
                do{
                    cout << "[4]Anfibio" << endl << "[3]Reptil" << endl << "[2]Ave"<< endl << "[1]Mamífero"<< endl << ":";
                    cin >> y;
                }while(y!=0 && y!=1 && y!= 2 && y!=3 && y!=4);
                if(y==4){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> a;
                        cout << "genero: ";
                        cin >> b;
                        cout << "idade: ";
                        cin >> y;
                        cout << "troca de pele"; 
                        cin >> c;
                        cout << "excreção";
                        cin >> d;
                        anf++;
                        ani++;
                        anfibio = new Anfibio(a, anfibioDomestico, b, y, c, d);
                        animal->push_back(anfibio);
                    }
                    else if (y==2){
                        cout << "nome: ";
                        cin >> a;
                        for(int i=0; i<ani; i++){
                            if (animal->at(i)->getNome()==a){
                                 delete animal->at(i);
                            }
                        }
                    }
                    else if(y==1){
                        //listar Anfibios
                        for(int i=0; i<anf; i++){
                            cout << animal->at(i)->getNome() << endl;
                            cout << animal->at(i)->getIdade() << endl;
                            cout << animal->at(i)->getGenero() << endl;
                        }
                    }
                    y=10;             // para não entrar em outro if
                    
                }
                else if (y==3){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> a;
                        cout << "genero: ";
                        cin >> b;
                        cout << "idade: ";
                        cin >> y;
                        cout << "Ecdise: ";
                        cin >> c;
                        cout <<"Tipo de pele: ";
                        cin >> d;
                        rep++;
                        ani++;
                        reptil = new Reptil(a, reptilExotico, b, 3, c, d);
                        animal->push_back(reptil);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> a;
                        for(int i=0; i<ani; i++){
                            if (animal->at(i)->getNome()==a){
                                 delete animal->at(i);
                            }
                        }
                    }
                    else if (y==1) {
                        //reptil->listarRepteis();
                        for(int i=0; i<rep; i++){
                            cout << animal->at(i)->getNome() << endl;
                            cout << animal->at(i)->getIdade() << endl;
                            cout << animal->at(i)->getGenero() << endl;
                        }
                    }

                    y=10;                //impedir que retorne aos if'a         
                  
                    
                }
                else if (y==2){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> a;
                        //ave->setNome(a);
                        cout << "genero: ";
                        cin >> b;
                        //ave->setGenero(a);
                        cout << "idade: ";
                        cin >> y;
                        //ave->setIdade(y);
                        cout << "Cor: ";
                        cin >> c;
                        cout << "Voando: ";
                        cin >> d;
                        av++;
                        ani++;
                        ave = new Ave(a, aveDomestico, b, 3, c, k);
                        animal->push_back(ave);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> a;
                        for(int i=0; i<ani; i++){
                            if (animal->at(i)->getNome()==a){
                                 delete animal->at(i);
                            }
                        }
                    }
                    else if (y==1){
                        //listar Aves;
                         for(int i=0; i<av; i++){
                            cout << animal->at(i)->getNome() << endl;
                            cout << animal->at(i)->getIdade() << endl;
                            cout << animal->at(i)->getGenero() << endl;
                        }
                    }
                    y=10;
                }
                else if (y==1){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> a;
                        //mamifero->setNome(a);
                        cout << "genero: ";
                        cin >> b;
                        //mamifero->setGenero(a);
                        cout << "idade: ";
                        cin >> y;
                        //mamifero->setIdade(y);
                        cout << "Mamifero/Herbivoro/Onivoro";
                        cin >> c;
                        //mamifero->setDieta(a);
                        cout << "Bipede/quadrupede: ";
                        cin >> d;
                        mam++;
                        ani++;
                        mamifero = new Mamifero(a, aveDomestico, b, 3, k, c, d);
                        animal->push_back(mamifero);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> a;
                        for(int i=0; i<ani; i++){
                            if (animal->at(i)->getNome()==a){
                                 delete animal->at(i);
                            }
                        }
                    }
                    else if (y==1){
                        //listar Mamiferos
                        for(int i=0; i<ani; i++){
                            if (animal->at(i)->getTipo()==aveDomestico){
                            cout << animal->at(i)->getNome() << endl;
                            cout << animal->at(i)->getIdade() << endl;
                            cout << animal->at(i)->getGenero() << endl;
                            }
                        }
                    }

                    y=10;
                    
                    
                }                
                
            }

        }
        

    }while(x!=0);

    return 0;
}