run: main.o City.o MedicalExecutive.o
	g++ -g -std=c++11 main.o City.o MedicalExecutive.o -o run
main.o: main.cpp
	g++ -g -std=c++11 -Wall -c main.cpp
City.o:  City.h City.cpp
	g++ -g -std=c++11 -Wall -c City.cpp
MedicalExecutive.o: MedicalExecutive.cpp MedicalExecutive.h LinkedList.h LinkedList.hpp Node.h Node.hpp
	g++ -g -std=c++11 -Wall -c MedicalExecutive.cpp
clean:
	rm *.o run
