run: main.o record.o executive.o 
	g++ -g -std=c++11 -Wall main.o record.o executive.o -o run
main.o: main.cpp executive.h
	g++ -g -std=c++11 -Wall -c main.cpp
record.o: record.cpp 
	g++ -g -std=c++11 -Wall -c record.cpp
executive.o: executive.cpp priorityqueue.h record.h
	g++ -g -std=c++11 -Wall -c executive.cpp
clean: rm *.o run 
