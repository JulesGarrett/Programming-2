run: main.o Executive.o NegativeDiscriminant.o NoIntersection.o CannotDetermineRoomDimensions.o MathTools.o
	g++ -g -std=c++11  main.o Executive.o NegativeDiscriminant.o NoIntersection.o CannotDetermineRoomDimensions.o MathTools.o -o run
main.o: main.cpp Executive.h MathTools.h 
	g++ -g -std=c++11 -c main.cpp 
Executive.o: Executive.cpp Executive.h MathTools.h 
	g++ -g -std=c++11 -c Executive.cpp 
NegativeDiscriminant.o: NegativeDiscriminant.h NegativeDiscriminant.cpp
	g++ -g -std=c++11 -c NegativeDiscriminant.cpp 
NoIntersection.o: NoIntersection.h NoIntersection.cpp
	g++ -g -std=c++11 -c NoIntersection.cpp 
CannotDetermineRoomDimensions.o: CannotDetermineRoomDimensions.h CannotDetermineRoomDimensions.cpp 
	g++ -g -std=c++11 -c CannotDetermineRoomDimensions.cpp 
MathTools.o: MathTools.h MathTools.cpp NegativeDiscriminant.h NoIntersection.h CannotDetermineRoomDimensions.h 
	g++ -g -std=c++11 -c MathTools.cpp
clean: 
	rm*.o run
