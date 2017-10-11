/**
*File: Queue.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Implements Templated Queue
**/
#include "Node.h"
#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T>
Queue<T>::Queue()
{
    frontptr=nullptr;
    backptr=nullptr;
    msize=0;
}

template <typename T>
bool Queue<T>::isEmpty(){
    if(frontptr==nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
void Queue<T>::enqueue(const T value){
    if(isEmpty()){
        frontptr=backptr=new Node<T>;
        frontptr->setValue(value);
        msize++;
    }
    else{
        Node<T>* temp=new Node<T>;
        temp->setValue(value);
        backptr->setNext(temp);
        backptr=temp;
        temp=nullptr;
        msize++;
    }
}

template <typename T>
void Queue<T>::dequeue()throw(PrecondViolatedExcep){
    if(isEmpty()){
        throw (PrecondViolatedExcep("DeQueue attempted on an empty queue"));
    }
    else{
        Node<T> *temp=frontptr;
        frontptr=frontptr->getNext();
        delete temp;
        temp=nullptr;
        msize--;
    }
}

template <typename T>
T Queue<T>::peekFront()throw(PrecondViolatedExcep){
    if(isEmpty()){
       throw (PrecondViolatedExcep("Peek attempted on empty queue"));
    }
    else{
        return (frontptr->getValue());
    }
}
