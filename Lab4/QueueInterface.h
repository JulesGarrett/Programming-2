/**
*File: main.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Simulates an elevator
**/
#ifndef QUEUEINTERFACE_H_INCLUDED
#define QUEUEINTERFACE_H_INCLUDED
#include "PrecondViolatedExcep.h"


template <typename T>
class QueueInterface
{
    public:
        virtual ~QueueInterface(){};
        virtual bool isEmpty()=0;// const = 0;
        virtual void enqueue(const T value) throw(PrecondViolatedExcep) = 0;
        virtual void dequeue() throw(PrecondViolatedExcep) = 0;
        virtual T peekFront() const throw(PrecondViolatedExcep) = 0;

    protected:

    private:
};
#endif // QUEUEINTERFACE_H_INCLUDED

