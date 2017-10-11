/**
*File: main.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Simulates an elevator
**/
#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"
#include "QueueInterface.h"
#include "PrecondViolatedExcep.h"

template <typename T>
class Queue
{
    public:
        /**
         * @pre None
         * @post None
         * @reutrn None
         */
        Queue();
        /**
         * @pre Queue has been implemented 
         * @post check that it holds nodes
         * @reutrn true if queue is empty
         */
        bool isEmpty();
        /**
         * @pre Queue has been implemented
         * @post Adds value to back of queue
         * @reutrn None
         */
        void enqueue(const T value);
        /**
         * @pre Queue with at least one node on it
         * @post removes node from the queue throws error if empty
         * @reutrn None
         */
        void dequeue()throw (PrecondViolatedExcep);
        /**
         * @pre Queue with at least one node on it
         * @post gets value at front of queue
         * @reutrn value of node at front of queue
         */
        T peekFront()throw (PrecondViolatedExcep);

    protected:

    private:
        //pointer to front of queue
        Node<T> *frontptr;
        //poointer to back of queue
        Node<T> *backptr;
        //size of queue
        int msize=0;
};
#include "Queue.cpp"
#endif // QUEUE_H

