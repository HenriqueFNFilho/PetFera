TI = domestico.cpp nativo.cpp exotico.cpp petfera.cpp

CO = animal.cpp main.cpp

CPP = g++ -std=c++11 -Wall -pedantic 

MA = mamifero.cpp mamiferoNativo.cpp mamiferoExotico.cpp mamiferoDomestico.cpp

AN = anfibio.cpp anfibioNativo.cpp anfibioExotico.cpp anfibioDomestico.cpp

AV = ave.cpp aveNativo.cpp aveExotico.cpp aveDomestico.cpp

RE = reptil.cpp reptilNativo.cpp reptilExotico.cpp reptilDomestico.cpp

PR = profissional.cpp veterinario.cpp tratador.cpp

TO = $(TI) $(CO) $(MA) $(AN) $(AV) $(RE) $(PR)




all:
	$(CPP) $(TO) -o PetFera

run:
	./PetFera

clean:
	rm *PetFera *.txt