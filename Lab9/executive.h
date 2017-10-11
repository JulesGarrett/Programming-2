//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "record.h"
#include <string>
#include "priorityqueue.h"

class executive
{
    public:
        executive(const char* fileName);
        ~executive();
        void preview(priorityqueue<record> pq);
        void runSimulation();


    protected:

    private:

      record pat;
        int filesize;
        std::string pname;
        int need;
        std::string action;
        priorityqueue<record>* queue;


};

#endif // EXECUTIVE_H
