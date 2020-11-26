#include<iostream>
#include "animais.hpp"
#include "profissionais.hpp"
#include "petfera.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    Petfera* petfera = new Petfera();
    Anfibios* anfibio = new Anfibios();
    Repteis* reptil = new Repteis();
    Mamiferos* mamifero = new Mamiferos();
    Aves* ave = new Aves();
    Veterinarios* veterinario = new Veterinarios();
    Tratadores* tratador = new Tratadores();

    int x;
    int y;
    string s;
    

    do{
        
        cout << "[3]Empresa"<< endl << "[2]Profissionais"<< endl << "[1]Animais" << endl << "[0]Sair"<< endl << ":";
        cin >> x;
        if(x!=0 && x!=1 && x!=2 && x!=3){
            cout << "Digite um valor válido!" << endl;
        }
        else if(x==1 || x==2 || x==3){
            if(x==3){
                cout << "nome: ";
                cin >> s;
                petfera->setNome(s);
                cout << endl << "id: ";
                cin >> s;
                petfera->setId(s);
                cout << endl;
            }
            else if(x==2){
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
                        cout << "nome: ";
                        cin >> s;
                        veterinario->setNome(s);
                        cout << "idade: ";
                        cin >> y;
                        veterinario->setIdade(y);
                        cout << "sexo: ";
                        cin >> s;
                        veterinario->setGenero(s);
                        cout << "especialidade: ";
                        cin >> s;
                        veterinario->setEspecialidade(s);
                        cout << "formação: ";
                        cin >> s;
                        veterinario->setFormacao(s);
                        veterinario->addVeterinarios(veterinario);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> s;
                        veterinario->remVeterinarios(s);
                    }
                    else if (y==1){
                        veterinario->listarVeterinarios();
                    }
                    y=10;
                    
                    
                }
                else if(y==1){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> s;
                        tratador->setNome(s);
                        cout << "idade: ";
                        cin >> y;
                        tratador->setIdade(y);
                        cout << "sexo: ";
                        cin >> s;
                        tratador->setGenero(s);
                        cout << "habilidade: ";
                        cin >> s;
                        tratador->setHabilidade(s); 
                        tratador->addTratadores(tratador);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> s;
                        tratador->remTratadores(s);
                    }
                    else if (y==1){
                        tratador->listarTratadores();
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
                        cin >> s;
                        anfibio->setNome(s);
                        cout << "genero: ";
                        cin >> s;
                        anfibio->setGenero(s);
                        cout << "idade: ";
                        cin >> y;
                        anfibio->setIdade(y);
                        anfibio->addAnfibios(anfibio);
                    }
                    else if (y==2){
                        cout << "nome: ";
                        cin >> s;
                        anfibio->remAnfibios(s);
                    }
                    else if(y==1){
                        anfibio->listarAnfibios();
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
                        cin >> s;
                        reptil->setNome(s);
                        cout << "genero: ";
                        cin >> s;
                        reptil->setGenero(s);
                        cout << "idade: ";
                        cin >> y;
                        reptil->setIdade(y);
                        cout << "Ecdise: ";
                        cin >> s;
                        reptil->setEcdise(s);
                        cout <<"Tipo de pele: ";
                        cin >> s;
                        reptil->setTipopele(s);
                        reptil->addRepteis(reptil);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> s;
                        reptil->remRepteis(s);
                    }
                    else if (y==1) {
                        reptil->listarRepteis();
                    }

                    y=10;                //impedir que retorne aos if's         
                  
                    
                }
                else if (y==2){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        cout << "nome: ";
                        cin >> s;
                        ave->setNome(s);
                        cout << "genero: ";
                        cin >> s;
                        ave->setGenero(s);
                        cout << "idade: ";
                        cin >> y;
                        ave->setIdade(y);
                        cout << "Cor: ";
                        cin >> s;
                        ave->setCor(s);
                        ave->addAves(ave);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> s;
                        ave->remAves(s);
                    }
                    else if (y==1){
                        ave->listarAves();
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
                        cin >> s;
                        mamifero->setNome(s);
                        cout << "genero: ";
                        cin >> s;
                        mamifero->setGenero(s);
                        cout << "idade: ";
                        cin >> y;
                        mamifero->setIdade(y);
                        cout << "Mamifero/Herbivoro/Onivoro";
                        cin >> s;
                        mamifero->setDieta(s);
                        cout << "Bipede/quadrupede: ";
                        cin >> s;
                        mamifero->setPatas(s);
                        mamifero->addMamiferos(mamifero);
                        mamifero->addMamiferos(mamifero);
                    }
                    else if (y==2){
                        cout << ":";
                        cin >> s;
                        mamifero->remMamiferos(s);
                    }
                    else if (y==1){
                        mamifero->listarMamiferos();
                    }

                    y=10;
                    
                    
                }                
                
            }

        }
        

    }while(x!=0);

    return 0;
}