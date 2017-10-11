Maze: main.o MazeReader.o MazeWalker.o MazeCreationException.o
	g++ -std=c++11 -g -Wall main.o MazeReader.o MazeWalker.o MazeCreationException.o -o Maze

main.o: main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

MazeReader.o: MazeReader.h MazeReader.cpp
	g++ -std=c++11 -g -Wall -c MazeReader.cpp
	
MazeCreationException.o: MazeCreationException.h MazeCreationException.cpp
		g++ -std=c++11 -g -Wall -c MazeCreationException.cpp

MazeWalker.o: MazeWalker.h MazeWalker.cpp
	g++ -std=c++11 -g -Wall -c MazeWalker.cpp

clean:
	rm *.o Maze
