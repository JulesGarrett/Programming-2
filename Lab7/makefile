run: main.o 
	g++ -g -std=c++11 main.o -o run
main.o:main.cpp selectionSort.cpp quicksort.cpp mergesort.cpp insertionSort.cpp bubbleSort.cpp
	g++ -g -std=c++11 -c main.cpp 
clean: rm *.o run
