/**
*File: Executive.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Takes in a file of actions and operates the elevator accordingly
**/
#include "Executive.h"
#include "Node.h"
#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include <fstream>
#include <string>
#include <stdexcept>
#include "PrecondViolatedExcep.h"
using namespace std;


 Executive::Executive()
{

}
void Executive::run(std::string filename){
try{
      fstream file(filename);
    while( file.good()){

        file>>act;
        if(act=="WAIT"){
            file>>value;
            q.enqueue(value);
        }
        if (act=="PICK_UP"){
            for(int x=0; x<7; x++){
                st.push(q.peekFront());
                q.dequeue();
            }
        }
        if (act=="DROP_OFF"){
            file>>num;
            if(num>7){
                throw (PrecondViolatedExcep("only 7 people can be on the elevator"));
            }
            for(int x=0; x<num; x++){
               st.pop();
            }
       }
        if (act=="INSPECTION"){
            cout<<"Elevator status:"<<endl;
            if(st.isEmpty()){
                cout<<"The elevator is empty."<<endl;
                cout<<"There is no one on the elevator"<<endl;
            }
            else{
                cout<<"The elevator is not empty"<<endl;
                cout<<st.peek()<<" will be the next person off the elevator"<<endl;
                if(!(q.isEmpty())){
                    cout<<q.peekFront()<<" will be the next person on the elevator"<<endl;
                }
            }
            cout<<"\n"<<endl;
        }
    }
    }

catch(PrecondViolatedExcep& pve){
    cout<<pve.what();
}
}

