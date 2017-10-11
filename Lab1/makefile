Lab1:main.o VoterRegistrationRecord.o Executive.o
	g++ -std=c++11 -g -Wall main.o VoterRegistrationRecord.o Executive.o -o Lab1
main.o:main.cpp VoterRegistrationRecord.h Executive.h
	g++ -std=c++11 -g -Wall -c main.cpp
VoterRegistrationRecord.o: VoterRegistrationRecord.h VoterRegistrationRecord.cpp
	g++ -std=c++11 -g -Wall -c VoterRegistrationRecord.cpp
Executive.o: Executive.h VoterRegistrationRecord.h Executive.cpp 
	g++ -std=c++11 -g -Wall -c Executive.cpp
clean: 
	rm *.o Lab1
