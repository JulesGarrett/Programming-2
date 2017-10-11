/*Author: Julia Garrett
Last worked on: 10/11/2016
Lab 5 program for EECS 268
Summary of Program:
This program gives the user the choice of three functions to do: reverse a linked list, find permutations of the sum of a number, and locate objects in an array.
This is the Executive file for this program. Does all the calcualtions*/
#include "Executive.h"
#include <string>
#include <iostream> 
#include <fstream>
#include "LinkedList.h"
#include "Node.h"


using namespace std;
Executive::Executive(){

};

void Executive::run(){
    int select=0;
    string file1; 
    string perm;
    string value;
    int num;
	int c=0;
    while (select !=4){
        cout<<"Welcome to recursive test. Enter which program you would like to run"<<endl;
        cout<<"1. List Reversal"<<endl;
        cout<<"2. Sum of Factors (computing c(n)"<<endl;
        cout<<"3. Quadtree"<<endl; 
        cout<<"4. Quit"<<endl;
        cout<<"selection: "<<endl;
        cin>>select;
        if (select ==1){
            cout<<"Input the name of the file that you would like to reverse"<<endl;
            cin>>file1; 
            reverse(file1);
        }
        if (select ==2){
            cout<<"Would you like permintations to be counted? (y/n) "<<endl;
            while(perm!="y"||perm!="n"){
            cin>>perm;
                if(perm!="y"||perm!="n"){
                        cout<<"bad input"<<endl;
			return;
                }
                if(perm=="y"){
                c=1;
                }
                if(perm=="n"){
                c=0;
                }
            }
            cout<<"Enter the number you want the perminatations of"<<endl;
            cin>>num;
            cout<<"There are "<<Permutations(num,c,1)<<" combonations"<<endl;
            
        }
        if(select ==3){
            Quadtree();
        }
    }
}

int Executive::Permutations(int num, int c, int x)
{
    int cNum=1;
    if(c == 1)
    {cNum=0;
        for (int i =x; i<=(num/2); i++){
            cNum+= (Permutations((num-i), 0, i)+1);
        }
        return cNum;
    }
    if(c==0){
        for(int j=1; j<num; j++){
            cNum += Permutations((num-j), 1, 1);
        }
        return cNum;
    }
}
void Executive::Quadtree(){
    int quad[64][64];
    fstream filereader; 
    string filename;
    int numb; 
    do{
        cout<<"Input a file to create a list:";
        cin>>filename;
        filereader.open(filename);
    }while (!filereader.is_open());
    for(int i=0; i<64; i++){
        for(int j=0; j<64; j++){
            filereader>>numb;
            quad[i][j]=numb;
        }
    }
    Quadcalc(quad, 0, 64, 0, 64);
}
void Executive::Quadcalc(int quad[][64], int firstrow, int lastrow, int firstcol, int lastcol){
    int counter=0;
	int midrow=(firstrow+lastrow)/2;
	int midcol=(firstcol+lastcol)/2; 
    for(int i =firstrow; i<lastrow; i++){
        for(int j=firstcol; j<lastcol; j++){
            if(quad[i][j] ==1){
		counter++;
            }
        }
}
    if(counter ==0){
        cout<<"First Row: "<<firstrow<<" Last Row: "<<lastrow<<" First Column: "<<firstcol<<" Last Column: "<<lastcol<<" This region is empty"<<endl;
    }
    if(counter==1){
        cout<<"First Row: "<<firstrow<<" Last Row: "<<lastrow<<" First Column: "<<firstcol<<" Last Column: "<<lastcol<<" This region has one object"<<endl;
    }
   if(counter>1){
        Quadcalc(quad, firstrow, midrow, firstcol, midcol);
        Quadcalc(quad, firstrow, midrow, midcol+1, lastcol);
        Quadcalc(quad, midrow+1,lastrow , midcol+1, lastcol);
        Quadcalc(quad, midrow+1, lastrow, firstcol, midcol);
}}
void Executive::reverse(string filename){
	fstream f(filename);
	string input;
	while(f>>input){
		ll->addBack(input);
	}
	cout<<"old list:"<<endl;
	ll->print();
	cout<<endl;
	ll-> reverselist();
	cout<<"New List:"<<endl;
	ll->print();
	cout<<endl;
    }
    
    
