//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#ifndef HEAP_H
#define HEAP_H

template <typename T>
class heap
{
    public:
	heap();
        heap(int initialsize);
        heap(const heap<T>& heap);
        ~heap();

        void add(T& newItem);
        bool isEmpty() const;
        void remove() ;//throw EmptyHeap;
        T peekTop() const ;//throw EmptyHeap;
    protected:

    private:
      T* theCompleteBinaryTree;
      int sizeofArray;
      int numItemsinHeap=0;
      int newsize;
};
#include "heap.cpp"
#endif // HEAP_H
