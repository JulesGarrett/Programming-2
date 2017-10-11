run: main.o Executive.o PrecondViolatedExcep.o
	g++ -g -std=c++11 main.o Executive.o PrecondViolatedExcep.o -o run
main.o: main.cpp Executive.h 
	g++ -g -std=c++11 -c main.cpp
Executive.o: Executive.cpp Executive.h PrecondViolatedExcep.h 
	g++ -g -std=c++11 -c Executive.cpp
PrecondViolatedExcep.o: PrecondViolatedExcep.cpp PrecondViolatedExcep.h
	g++ -g -std=c++11 -c PrecondViolatedExcep.cpp
clean: 
	rm *.o run

