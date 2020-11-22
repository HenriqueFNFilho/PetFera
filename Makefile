all: animais profissionais repteis aves anfibios mamiferos

animais: animais.cpp testa_animais.cpp
	g++ -std=c++11 -Wall animais.cpp testa_animais.cpp -o animais

profissionais: profissionais.cpp testa_profissionais.cpp
	g++ -std=c++11 -Wall profissionais.cpp testa_profissionais.cpp -o profissionais

repteis: animais.cpp repteis.cpp testa_repteis.cpp
	g++ -std=c++11 -Wall animais.cpp repteis.cpp testa_repteis.cpp -o repteis

aves: animais.cpp aves.cpp testa_aves.cpp
	g++ -std=c++11 -Wall animais.cpp aves.cpp testa_aves.cpp -o aves

anfibios: animais.cpp anfibios.cpp testa_anfibios.cpp
	g++ -std=c++11 -Wall animais.cpp anfibios.cpp testa_anfibios.cpp -o anfibios

mamiferos: animais.cpp mamiferos.cpp testa_mamiferos.cpp
	g++ -std=c++11 animais.cpp mamiferos.cpp testa_mamiferos.cpp -o mamiferos

