//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H
#include "heap.h"

template <typename T>
class priorityqueue
{
    public:
        priorityqueue(int intialsize);
        priorityqueue(const priorityqueue<T>& pq);
        ~priorityqueue();

        void enqueue(T newEntry);
        void dequeue() ;//throw EmptyPriorityQueue;
        bool isEmpty() const;
        T peekFront() const ;//throw EmptyPriorityQueue;

    protected:

    private:
      heap<T>* theHeap;
      heap<T> getHeap();
      };

#include "priorityqueue.cpp"
#endif // PRIORITYQUEUE_H
