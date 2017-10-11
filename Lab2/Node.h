/**
*	@file Node.h
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A header file for templated Node class
*/
#ifndef NODE_H
#define NODE_H


template <typename T>
class Node
{
public:
    Node();
    T getValue();
    void setValue(T value);
    Node<T>* getNext();
    void setNext(Node<T>* next);

private:
    T m_value;
    Node<T>* m_next;
};

#include "Node.hpp"
#endif
