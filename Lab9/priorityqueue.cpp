//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#include "heap.h"


template <typename T>
priorityqueue<T>::priorityqueue(int initialsize)
{
    theHeap= new heap<T>(initialsize);
}

template <typename T>
priorityqueue<T>::priorityqueue(const priorityqueue<T> &pq)
{
    //theHeap= new heap<T>(*pq.getHeap());
}

template <typename T>
priorityqueue<T>::~priorityqueue()
{
    //delete theHeap;
}

template <typename T>
void priorityqueue<T>::enqueue(T newEntry)
{
    theHeap->add(newEntry);
}

template <typename T>
void priorityqueue<T>::dequeue()
{
    theHeap->remove();
}

template <typename T>
bool priorityqueue<T>::isEmpty() const
{
    theHeap->isEmpty();
}

template <typename T>
T priorityqueue<T>::peekFront() const
{
    return (theHeap->peekTop());
}
template <typename T>
heap<T> priorityqueue<T>::getHeap()
{
    return theHeap;
}
