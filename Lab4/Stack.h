/**
*File: Stack.h
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: implements templated stack
**/
#ifndef STACK_H
#define STACK_H
#include "StackInterface.h"

#include "Node.h"
template <typename T>
class Stack
{
    public:
        /**
         * @pre None
         * @post None
         * @return None
         */
        Stack();
         /**
         * @pre a stack has been implemented 
         * @post checks to see if there are nodes on stack
         * @return returns true if there is no nodes on stack
         */
        bool isEmpty() const;
         /**
         * @pre a stack has been implemented 
         * @post adds a new node to top of stack
         * @return none
         */
        void push(const T value);
         /**
         * @pre there is one node on the stack
         * @post checks to see if there is a node on the stack throws error if it is empty
         * @return none
         */
        void pop()throw(PrecondViolatedExcep);
         /**
         * @pre a stack has been implemented 
         * @post checks to see if there are nodes on stack throws error if it is empty
         * @return returns value of node at top of stack
         */
        T peek() const throw(PrecondViolatedExcep);
        int getsize();
    protected:

    private:
        Node<T> *mtop;
        int msize;
};
#include "Stack.cpp"
#endif // STACK_H
