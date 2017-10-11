#include "selectionSort.cpp"
#include "quicksort.cpp"
#include "mergesort.cpp"
#include "insertionSort.cpp"
#include "bubbleSort.cpp"
#include <ctime>
#include <chrono>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int n;
    n=atoi(argv[1]);
    double* num;
    num=new double[n];

    if(std::string(argv[2]) == "r" ){
        srand(10);
        for(int i=0; i<n; i++){
            num[i]=(drand48()*n);
    }
}
    else if(std::string(argv[2]) == "a"){
        for(int i=0; i<n; i++){
            num[i]=0.001*static_cast<double>(i);
        }
    }
    else if(std::string(argv[2]) == "d"){
        for(int i=0; i<n; i++){
            num[i]=0.001*static_cast<double>(n-i-1);
        }
    }
	else {
	std::cout<<"wrong"<<std::endl;}
    if(std::string(argv[3]) == "s"){
        std::chrono::system_clock::time_point start, end;
        std::chrono::duration<double> elapsed;
        start=std::chrono::system_clock::now();
        selectionSort(num, n);
        end=std::chrono::system_clock::now();
        elapsed=end-start;
        std::cout<<elapsed.count();
    }
    else if(std::string(argv[3]) == "i"){
        std::chrono::system_clock::time_point start, end;
        std::chrono::duration<double> elapsed;
        start=std::chrono::system_clock::now();
        insertionSort(num, n);
        end=std::chrono::system_clock::now();
        elapsed=end-start;
        std::cout<<elapsed.count();
    }
    else if(std::string(argv[3])== "b"){
        std::chrono::system_clock::time_point start, end;
        std::chrono::duration<double> elapsed;
        start=std::chrono::system_clock::now();
        bubbleSort(num, n);
        end=std::chrono::system_clock::now();
        elapsed=end-start;
        std::cout<<elapsed.count();
    }
    else if(std::string(argv[3])== "m"){
        std::chrono::system_clock::time_point start, end;
        std::chrono::duration<double> elapsed;
        start=std::chrono::system_clock::now();
        mergeSort( num, n);
        end=std::chrono::system_clock::now();
        elapsed=end-start;
        std::cout<<elapsed.count();
    }
    else if(std::string(argv[3])== "q"){
        std::chrono::system_clock::time_point start, end;
        std::chrono::duration<double> elapsed;
        start=std::chrono::system_clock::now();
        quickSort(num ,0, n);
        end=std::chrono::system_clock::now();
        elapsed=end-start;
        std::cout<<elapsed.count();
    }
	else{
		std::cout<<"wrong still"<<std::endl;}
    
};
