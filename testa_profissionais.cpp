#include <iostream>
#include "profissionais.hpp"

using namespace std;

int main(){
    Profissionais* p = new Profissionais();

    p->setNome("Henrique");

    cout << p->getNome() << endl;

    return 0;
}