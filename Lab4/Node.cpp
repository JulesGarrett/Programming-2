/**
*File: Node.cpp
*Author: Julia Garrett
*KUID Number: 2834743
*Date Last Updated: October 4, 2016
*Purpose: Node class
**/

#include <string>

using namespace std;

template<typename T>
Node<T>::Node(){
	m_next=nullptr;
};

template<typename T>
T Node<T> :: getValue(){
	return (m_value);
}

template<typename T>
void Node<T> :: setValue(T value){
	m_value=value;
}

template<typename T>
Node<T>* Node<T> :: getNext(){
	return(m_next);
}

template<typename T>
void Node<T> :: setNext(Node<T>* next){
	m_next=next;
}
