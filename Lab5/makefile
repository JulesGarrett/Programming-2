run: main.o Executive.o 
	g++ -g -std=c++11 main.o Executive.o -o run
main.o: main.cpp Executive.h 
	g++ -g -std=c++11 -c main.cpp
Executive.o: Executive.cpp Executive.h LinkedList.h Node.h Node.hpp LinkedList.hpp
	g++ -g -std=c++11 -c Executive.cpp
clean: 
	rm *.o run 
