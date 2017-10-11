/**
*File: Executvie.h
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: The H file for the Executive file of program
**/
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include <string>
#include "Stack.h"
#include "Queue.h"
#include "PrecondViolatedExcep.h"

class Executive
{
    public:
        /**
         * @pre None
         * @post None
         * @return None
         */
        Executive();
        /**
         * @pre None
         * @post outputs inspections to the user
         * @return None
         */
        void run(std::string filename);

    protected:

    private:
        //the action that is read from the file
        std::string act;
        //the name read in from the file
        std::string value;
        //the number of people getting off the elevator
        int num;
        //object of queue class
        Queue<std::string> q;
        //object of stack class
        Stack<std::string> st;
};

#endif // EXECUTIVE_H
