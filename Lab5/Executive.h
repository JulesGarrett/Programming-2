/*Author: Julia Garrett
Last worked on: 10/11/2016
Lab 5 program for EECS 268
Summary of Program:
This program gives the user the choice of three functions to do: reverse a linked list, find permutations of the sum of a number, and locate objects in an array.
This is the Executive.h file for this program.*/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include "LinkedList.h"
using namespace std;
class Executive
{
private:
    string file1;
    int select;
    string perm; 
	int count;
	LinkedList<string>* ll= new LinkedList<string>;
public:
    Executive();
    //Creats User Interface menu 
    void run();
    //attempts to find all the different combinations of the sum of a number and returns the number of posiblities
    int Permutations(int num, int c, int x);
    //creates a 64X64 array from a file
    void Quadtree();
    //prints to the user the rows and columns where there is one or none objects in the array
    void Quadcalc(int quad[64][64], int firstrow, int lastrow, int firstcol, int lastcol);
    //attempts to reverse the order of the string
    void reverse(string filename);
};
#endif
