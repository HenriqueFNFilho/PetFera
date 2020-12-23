#include "petfera.hpp"

Petfera::Petfera(/* args */){}

Petfera::~Petfera(){}

void Petfera::iniciaPrograma(){

    shared_ptr<Tratador> tratador = make_shared<Tratador>();
    shared_ptr<Veterinario> veterinario = make_shared<Veterinario>();

    shared_ptr<ReptilNativo> reptilN = make_shared<ReptilNativo>();
    shared_ptr<ReptilExotico> reptilE = make_shared<ReptilExotico>();
    shared_ptr<ReptilDomestico> reptilD = make_shared<ReptilDomestico>();
	shared_ptr<AnfibioNativo> anfibioN = make_shared<AnfibioNativo>();
    shared_ptr<AnfibioExotico> anfibioE = make_shared<AnfibioExotico>();
    shared_ptr<AnfibioDomestico> anfibioD = make_shared<AnfibioDomestico>();
	shared_ptr<AveNativo> aveN = make_shared<AveNativo>();
    shared_ptr<AveExotico> aveE = make_shared<AveExotico>();
    shared_ptr<AveDomestico> aveD = make_shared<AveDomestico>();
	shared_ptr<MamiferoNativo> mamiferoN = make_shared<MamiferoNativo>();
    shared_ptr<MamiferoExotico> mamiferoE = make_shared<MamiferoExotico>();
    shared_ptr<MamiferoDomestico> mamiferoD = make_shared<MamiferoDomestico>();

    tratador->lerTratador();

    veterinario->lerVeterinario();

    anfibioD->lerAnfibioDomestico();

    anfibioE->lerAnfibioExotico();

    anfibioN->lerAnfibioNativo();

    aveD->lerAveDomestico();

    aveN->lerAveNativo();
                            
    aveE->lerAveExotico();
                            
    mamiferoN->lerMamiferoNativo();

    mamiferoE->lerMamiferoExotico();
    
    mamiferoD->lerMamiferoDomestico();

    reptilN->lerReptilNativo();
    
    reptilE->lerReptilExotico();
    
    reptilD->lerReptilDomestico();

    int x, y, z;
    string a;

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
                        cout << endl << "Os veterinarios são:" << endl;
                        
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
                        cout << "[3]Nativo" << endl << "[2]Exotico" << endl <<"[1]Domestico"<< endl << "[0]Sair" << endl << ":";
                        cin >> z;
                    }while(z!=0 && z!=1 && z!= 2 && z!=3);
                    if(z==1 || z==2 || z==3){
                        do{
                            cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                            cin >> y;
                        }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    }
                    if(y==3){
                        //inserir anfibio
                        if(z==3){
                            anfibioN->criarAnfibioNativo();
                        }
                        else if(z==2){
                            anfibioE->criarAnfibioExotico();
                        }
                        else if(z==1){
                            anfibioD->criarAnfibioDomestico();
                        }

                        
                        
                    }
                    else if (y==2){
                        //excluir anfibio
                        cout << "Qual o nome do anfibio que deseja remover?: ";
                        cin >> a; 
                        if(z==3){
                            anfibioN->removeAnfibioNativo(a);
                        }
                        else if(z==2){
                            anfibioE->removeAnfibioExotico(a);
                        }
                        else if(z==1){
                            anfibioD->removeAnfibioDomestico(a);
                        }
                    }
                    else if(y==1){
                        //listar Anfibios
                        if(z==3){
                            
                            anfibioN->listarAnfibioNativo();
                        }
                        else if(z==2){
                            
                            anfibioE->listarAnfibioExotico();
                        }
                        else if(z==1){
                            
                            anfibioD->listarAnfibioDomestico();
                        }
                    }
                    y=10;             // para não entrar em outro if
                    
                }
                else if (y==3){
                    do{
                        cout << "[3]Nativo" << endl << "[2]Exotico" << endl <<"[1]Domestico"<< endl << "[0]Sair" << endl << ":";
                        cin >> z;
                    }while(z!=0 && z!=1 && z!= 2 && z!=3);
                    if(z==1 || z==2 || z==3){
                        do{
                            cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                            cin >> y;
                        }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    }
                    if(y==3){
                        //criar reptil
                        if(z==3){
                            reptilN->criarReptilNativo();
                        }
                        else if(z==2){
                            reptilE->criarReptilExotico();
                        }
                        else if(z==1){
                            reptilD->criarReptilDomestico();
                        }
                        
                    }
                    else if (y==2){
                        cout << "Qual o nome do reptil que deseja remover?: ";
                        cin >> a;
                        if(z==3){
                            reptilN->removeReptilNativo(a);
                        }
                        else if(z==2){
                            reptilE->removeReptilExotico(a);
                        }
                        else if(z==1){
                            reptilD->removeReptilDomestico(a);
                        }
                    }
                    else if (y==1) {
                        //listar Repteis
                        if(z==3){
                            
                            reptilN->listarReptilNativo();
                        }
                        else if(z==2){
                            
                            reptilE->listarReptilExotico();
                        }
                        else if(z==1){
                            
                            reptilD->listarReptilDomestico();
                        }
                    }

                    y=10;                //impedir que retorne aos if's        
                  
                    
                }
                else if (y==2){
                    do{
                        cout << "[3]Nativo" << endl << "[2]Exotico" << endl <<"[1]Domestico"<< endl << "[0]Sair" << endl << ":";
                        cin >> z;
                    }while(z!=0 && z!=1 && z!= 2 && z!=3);
                    if(z==1 || z==2 || z==3){
                        do{
                            cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                            cin >> y;
                        }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    }
                    if(y==3){
                        //cria ave
                        if(z==3){
                            aveN->criarAveNativo();
                        }
                        else if(z==2){
                            aveE->criarAveExotico();
                        }
                        else if(z==1){
                            aveD->criarAveDomestico();
                        }
                        
                        
                    }
                    else if (y==2){
                        //remove ave
                        cout << "Qual o nome da ave que deseja remover?: ";
                        cin >> a;
                        if(z==3){
                            aveN->removeAveNativo(a);
                        }
                        else if(z==2){
                            aveE->removeAveExotico(a);
                        }
                        else if(z==1){
                            aveD->removeAveDomestico(a);
                        }
                    }
                    else if (y==1){
                        //listar Aves;
                        if(z==3){
                            
                            aveN->listarAveNativo();
                        }
                        else if(z==2){
                            
                            aveE->listarAveExotico();
                        }
                        else if(z==1){
                            
                            aveD->listarAveDomestico();
                        }
                    }
                    y=10;
                }
                else if (y==1){
                    do{
                        cout << "[3]Nativo" << endl << "[2]Exotico" << endl <<"[1]Domestico"<< endl << "[0]Sair" << endl << ":";
                        cin >> z;
                    }while(z!=0 && z!=1 && z!= 2 && z!=3);
                    if(z==1 || z==2 || z==3){
                        do{
                            cout << "[3]Inserir" << endl << "[2]Excluir" << endl <<"[1]Listar"<< endl << "[0]Sair" << endl << ":";
                            cin >> y;
                        }while(y!=0 && y!=1 && y!= 2 && y!=3);
                    }
                    if(y==3){
                        //insere mamífero
                        if(z==3){
                            mamiferoN->criarMamiferoNativo();
                        }
                        else if(z==2){
                            mamiferoE->criarMamiferoExotico();
                        }
                        else if(z==1){
                            mamiferoD->criarMamiferoDomestico();
                        } 
                    }
                    else if (y==2){
                        //remove mamífero
                        cout << "Qual o nome do mamífero que deseja remover?: ";
                        cin >> a;
                        if(z==3){
                            mamiferoN->removeMamiferoNativo(a);
                        }
                        else if(z==2){
                            mamiferoE->removeMamiferoExotico(a);
                        }
                        else if(z==1){
                            mamiferoD->removeMamiferoDomestico(a);
                        }
                    }
                    else if (y==1){
                        //listar Mamiferos
                        if(z==3){
                            
                            mamiferoN->listarMamiferoNativo();
                        }
                        else if(z==2){
                            
                            mamiferoE->listarMamiferoExotico();
                        }
                        else if(z==1){
                            
                            mamiferoD->listarMamiferoDomestico();
                        }
                    }

                    y=10;
                    
                    
                }                
                
            }

        }
        

    }while(x!=0);

    tratador->gravaTratador();
    veterinario->gravaVeterinario();
    mamiferoN->gravaMamiferoNativo();
    mamiferoE->gravaMamiferoExotico();
    mamiferoD->gravaMamiferoDomestico();
    aveN->gravaAveNativo();
    aveE->gravaAveExotico();
    aveD->gravaAveDomestico();
    reptilN->gravaReptilNativo();
    reptilE->gravaReptilExotico();
    reptilD->gravaReptilDomestico();
    anfibioN->gravaAnfibioNativo();
    anfibioE->gravaAnfibioExotico();
    anfibioD->gravaAnfibioDomestico();

}