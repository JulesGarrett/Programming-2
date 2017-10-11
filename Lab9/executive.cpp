//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#include "executive.h"
#include <iostream>
#include <fstream>
#include <string>
#include "priorityqueue.h"
#include "record.h"


using namespace std;

fstream file;

executive::executive(const char* fileName)
{
    file.open(fileName);
    if(file.fail()){
        cout<<"Error could not locate file\n";
        exit(1);
    }
    file>>filesize;
    queue=new priorityqueue<record>(filesize);
    //pq.enqueue(pat);
    while(file.good()){
       runSimulation();
    }
}

void executive::runSimulation()
{
    file>>action;
    if(action=="arrival"){
      file>>pname>>need;
      pat.setname(pname);
      pat.setneed(need);
      queue->enqueue(pat);
     }
    else if(action=="serve"){
    queue->dequeue();
     }
    else if(action=="preview"){
        priorityqueue<record>* temp=queue;
        //preview(*temp);
cout<<"========== Assuming no new arrivals, the current set of patients will be processed as follows ==========="<<endl;	
cout<<queue->peekFront().getname()<<queue->peekFront().getneed()<<endl;
 cout<<"========= End of Preview ==============\n";

    }
}

void executive::preview(priorityqueue<record> pq)
    {
    cout<<"========== Assuming no new arrivals, the current set of patients will be processed as follows ==========="<<endl;
    //cout<<(pq.peekFront()).getname()<<(pq.peekFront()).getneed();

    cout<<"========= End of Preview ==============\n";


}

executive::~executive()
{
    //dtor
}
