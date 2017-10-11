/**
*File: main.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Header for templated node class
**/
#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
    public:
        /**
         * @pre None
         * @post None
         * @reutrn None
         */
        Node();
        /**
         * @pre None
         * @post None
         * @reutrn value of node
         */
        T getValue();
        /**
         * @pre None
         * @post Sets value of a specified node
         * @reutrn None
         */
        void setValue(T value);
        /**
         * @pre None
         * @post None
         * @reutrn position of next node
         */
        Node<T>*getNext();
        /**
         * @pre None
         * @post Sets the next node in the list
         * @reutrn None
         */
        void setNext(Node<T>*next);

    protected:

    private:
        //the value stored in the node
        T m_value;
        //points to next node
        Node<T>*m_next;
};
#include "Node.cpp"
#endif
