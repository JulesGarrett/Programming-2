run: main.o pokemon.o NotFoundException.o
	g++ -g -std=c++11 -Wall main.o pokemon.o NotFoundException.o -o run
main.o: main.cpp pokemon.h BinarySearchTree.h
	g++ -g -std=c++11 -Wall -c main.cpp
pokemon.o: pokemon.cpp pokemon.h
	g++ -g -std=c++11 -Wall -c pokemon.cpp
NotFoundException.o: NotFoundException.cpp NotFoundException.h
	g++ -g -std=c++11 -Wall -c NotFoundException.cpp
clean:
	rm *.o run
