all: animais profissionais petfera main

animais: animais.cpp testa_animais.cpp
	g++ -std=c++11 -Wall animais.cpp testa_animais.cpp -o animais

profissionais: profissionais.cpp testa_profissionais.cpp
	g++ -std=c++11 -Wall profissionais.cpp testa_profissionais.cpp -o profissionais

petfera: animais.cpp petfera.cpp testa_petfera.cpp
	g++ -std=c++11 -Wall animais.cpp profissionais.cpp petfera.cpp testa_petfera.cpp -o petfera

main: animais.cpp profissionais.cpp petfera.cpp main.cpp
	g++ -std=c++11 -Wall animais.cpp profissionais.cpp petfera.cpp main.cpp -o main

