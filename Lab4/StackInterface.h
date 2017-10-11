/**
*File: main.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Simulates an elevator
**/
#ifndef STACKINTERFACE_H
#define STACKINTERFACE_H
#include "PrecondViolatedExcep.h"
template <typename T>
class StackInterface
{
    public:
        /**
         * @pre None
         * @post None
         * @return None
         */
        virtual ~StackInterface(){};
         /**
         * @pre a stack has been implemented 
         * @post checks to see if there are nodes on stack
         * @return returns true if there is no nodes on stack
         */
        virtual bool isEmpty()const = 0;
         /**
         * @pre a stack has been implemented 
         * @post adds a new node to top of stack
         * @return none
         */
        virtual void push(const T value)throw(PrecondViolatedExcep) = 0;
        /**
         * @pre there is one node on the stack
         * @post checks to see if there is a node on the stack throws error if it is empty
         * @return none
         */
        virtual void pop() throw(PrecondViolatedExcep) = 0;
          /**
         * @pre a stack has been implemented 
         * @post checks to see if there are nodes on stack throws error if it is empty
         * @return returns value of node at top of stack
         */
        virtual T peek() const throw(PrecondViolatedExcep) = 0;

    protected:

    private:
};

#endif // STACKINTERFACE_H
