#include<iostream>
#include "animal.hpp"
#include "profissional.hpp"
#include "mamifero.hpp"
#include "anfibio.hpp"
#include "reptil.hpp"
#include "ave.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include <vector>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){
	
    Tratador* tratador = new Tratador();
    Veterinario* veterinario = new Veterinario();

    Reptil* reptil = new Reptil();
	Anfibio* anfibio = new Anfibio();
	Ave* ave = new Ave();
	Mamifero* mamifero = new Mamifero();

    int x;
    int y;
    string a;
    
    ofstream arquivo;
    arquivo.open("petfera.txt");
    

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
			 arquivo << veterinario << endl;
	
                       
                    }
                    else if (y==2){
                        //remove veterinario
                        cout << "Qual o nome do veterinario que deseja remover?: ";
                        cin >> a; 
                        veterinario->removeVeterinario(a);
                        arquivo << " Removido veterinario:" << a;
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
                        arquivo << tratador << endl;
                    }
                    else if (y==2){
                        //excluir Tratador
                        cout << "Qual o nome do tratador que deseja remover?: ";
                        cin >> a; 
                        tratador->removeTratador(a);
                        arquivo << " Removido tratador:" << a;
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
                        //inserir anfibio
                        anfibio->criarAnfibio();
                        arquivo << anfibio << endl;
                    }
                    else if (y==2){
                        //excluir anfibio
                        cout << "Qual o nome do anfibio que deseja remover?: ";
                        cin >> a; 
                        anfibio->removeAnfibio(a);
                    }
                    else if(y==1){
                        //listar Anfibios
                        anfibio->listarAnfibio();
                    }
                    y=10;             // para não entrar em outro if
                    
                }
                else if (y==3){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        //criar reptil
                        reptil->criarReptil();
                        arquivo << reptil << endl;
                    }
                    else if (y==2){
                        cout << "Qual o nome do reptil que deseja remover?: ";
                        cin >> a; 
                        reptil->removeReptil(a);
                    }
                    else if (y==1) {
                        //reptil->listarRepteis();
                        reptil->listarReptil();
                    }

                    y=10;                //impedir que retorne aos if's        
                  
                    
                }
                else if (y==2){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        //cria ave
                        ave->criarAve();
                        arquivo << ave << endl;
                    }
                    else if (y==2){
                        //remove ave
                        cout << "Qual o nome da ave que deseja remover?: ";
                        cin >> a; 
                        ave->removeAve(a);
                    }
                    else if (y==1){
                        //listar Aves;
                        ave->listarAve();
                    }
                    y=10;
                }
                else if (y==1){
                    do{
                        cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                        cin >> y;
                    }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    if(y==3){
                        //insere mamífero
                        mamifero->criarMamifero();
                        arquivo << mamifero << endl;
                    }
                    else if (y==2){
                        //remove mamífero
                        cout << "Qual o nome do mamífero que deseja remover?: ";
                        cin >> a; 
                        mamifero->removeMamifero(a);
                    }
                    else if (y==1){
                        //listar Mamiferos
                        mamifero->listarMamifero();
                    }

                    y=10;
                    
                    
                }                
                
            }

        }
        

    }while(x!=0);
    
    arquivo.close();

    return 0;
}