all: animal profissional main interface

animal: animal.cpp testa_animal.cpp
	g++ -std=c++11 -Wall animal.cpp testa_animal.cpp -o animal

profissional: profissional.cpp testa_profissional.cpp
	g++ -std=c++11 -Wall profissional.cpp testa_profissional.cpp -o profissional


main: animal.cpp profissional.cpp main.cpp
	g++ -std=c++11 -Wall animal.cpp profissional.cpp main.cpp -o main

interface: animal.cpp profissional.cpp interface.cpp
	g++ -std=c++11 -Wall animal.cpp profissional.cpp interface.cpp -o interface


