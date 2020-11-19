#include <iostream>
#include "animais.hpp"

using namespace std;

int main(){
    Animais* m = new Animais();

    m->setNome("Bidu");

    cout << m->getNome() << endl;

    return 0;
}