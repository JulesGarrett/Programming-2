/**
*File: Stack.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Templated State implementation
**/

#include "Node.h"
#include "PrecondViolatedExcep.h"
#include <stdexcept>
using namespace std;

template <typename T>
Stack <T> ::Stack()
{
    msize=0;
    mtop=nullptr;
}
template <typename T>

bool Stack<T>::isEmpty() const{
    if(mtop==nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
void Stack<T> :: push (const T value){
    if(isEmpty()){
        mtop=new Node<T>;
        mtop->setValue(value);
        msize++;
    }
    else{
        Node<T>* temp;
        temp=mtop;
        mtop=new Node<T>;
        mtop->setValue(value);
        mtop->setNext(temp);
        msize++;
    }

}
template <typename T>
void Stack<T> :: pop ()throw(PrecondViolatedExcep){
    if(isEmpty()){
        throw PrecondViolatedExcep("Pop attempted on an empty stack");
    }
    else{
        Node<T> *temp=mtop;
        mtop=mtop->getNext();
        delete temp;
        temp=nullptr;
        msize--;
    }

}
template <typename T>
T Stack<T> :: peek()const throw(PrecondViolatedExcep){
    if(isEmpty()){
        throw PrecondViolatedExcep("Peek attempted on an empty stack");
    }
    else{
        return(mtop->getValue());
    }
}
template <typename T>
int Stack<T> :: getsize(){
    return msize;
}
