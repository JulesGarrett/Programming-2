//Authoer Julia Garrett
//Student Id number: 2834743
//Date: 6/8/16
//Lab 9
#include <string>
#include <iostream>
#include "record.h"
using namespace std;


template <typename T>
heap<T>::heap(int initialsize)
{
  theCompleteBinaryTree=new T[initialsize];
  sizeofArray=initialsize;
}
template <typename T>
heap<T>::heap(const heap<T>&heap)
{
    this -> numItemsinHeap=0;
    sizeofArray=heap.sizeofArray;

    if(heap.numItemsinHeap<heap.sizeofArray)
    {
        sizeofArray =heap.sizeofArray;
        this -> theCompleteBinaryTree = new T[sizeofArray];
    }
    else
    {
        this -> sizeofArray= (sizeofArray*2);
        this -> theCompleteBinaryTree = new T[sizeofArray];
    }
    for(int i=0; i< heap.numItemsInHeap; i++)
    {
        this -> theCompleteBinaryTree[i] =heap.theCompleteBinaryTree[i];
        this -> numItemsInHeap++;
    }
}
template <typename T>
heap<T>::~heap()
{

}
template <typename T>
void heap<T>::add(T& newItem)
{

  if((numItemsinHeap+1)>sizeofArray)
  {
    newsize=sizeofArray*2;
    T temp[newsize];
    for(int i=0; i<sizeofArray; i++)
    {
      temp[i]=theCompleteBinaryTree[i];
    }
    delete theCompleteBinaryTree;
    theCompleteBinaryTree=temp;

  }
  else if(isEmpty()){
    theCompleteBinaryTree[0]=newItem;
    numItemsinHeap++;
  }
  else{
    theCompleteBinaryTree[numItemsinHeap]=newItem;
    while(theCompleteBinaryTree[numItemsinHeap].getneed()>theCompleteBinaryTree[(numItemsinHeap-1)/2].getneed())
    {
        T temp;
        temp=theCompleteBinaryTree[(numItemsinHeap-1)/2];
        theCompleteBinaryTree[(numItemsinHeap-1)/2]=theCompleteBinaryTree[numItemsinHeap];
        theCompleteBinaryTree[numItemsinHeap]=temp;
    }
    numItemsinHeap++;
  }
}
template <typename T>
bool heap<T>::isEmpty() const
{
  return (numItemsinHeap==0);
}
template <typename T>
void heap<T>::remove()
{
    if(isEmpty()){

    }
    else
    {
        theCompleteBinaryTree[0]=theCompleteBinaryTree[numItemsinHeap];
        numItemsinHeap--;
        int i=0;
        while(theCompleteBinaryTree[i].getneed()<theCompleteBinaryTree[2*i+1].getneed()||theCompleteBinaryTree[i].getneed()<theCompleteBinaryTree[2*i+2].getneed())
        {
            if(theCompleteBinaryTree[2*i+1].getneed()>theCompleteBinaryTree[2*i+2].getneed())
            {
                T temp;
                temp=theCompleteBinaryTree[i];
                theCompleteBinaryTree[i]=theCompleteBinaryTree[2*i+1];
                theCompleteBinaryTree[2*i+1]=temp;
            }
            else if(theCompleteBinaryTree[2*i+1].getneed()<theCompleteBinaryTree[2*i+2].getneed())
            {
                T temp;
                temp=theCompleteBinaryTree[i];
                theCompleteBinaryTree[i]=theCompleteBinaryTree[2*i+2];
                theCompleteBinaryTree[2*i+2]=temp;
            }
            i++;
            cout<<i<<"//i value\n";
        }
     }
}
template <typename T>
T heap<T>::peekTop() const
{
    return (theCompleteBinaryTree[0]);
}
