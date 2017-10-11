/**
*	@file LinkedList.hpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A  file for templated LinkedList class
*/
#include <string>
#include <iostream>



using namespace std;

template <typename T>
LinkedList<T>::LinkedList()
{
    m_front = nullptr;
    m_length = 0;
}

template <typename T>
LinkedList<T>::~LinkedList()
{

}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
    if (m_front == nullptr)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}

template <typename T>
int LinkedList<T>::getLength() const
{
  return(m_length);
}

template <typename T>
int LinkedList<T>::positionOf(T value) const
{
  string city_name = value.getCityName();
  Node<T>* cur = m_front;
  int i = 1;
  if((cur -> getValue()).getCityName() == value.getCityName())
  {
    return i;
  }
  while(cur -> getNext() != nullptr)
  {
    cur = cur -> getNext();
    i++;
    if((cur -> getValue()).getCityName() == value.getCityName())
    {
      return(i);
    }
  }
      return 0;
}

template <typename T>
void LinkedList<T>::addFront(T value)
{
    if(isEmpty())
    {
        m_front = new Node<T>();
        m_front -> setValue(value);
        m_length ++;
    }
    else
    {
        Node<T>* first;
        first = new Node<T>();
        first -> setValue(value);
        first -> setNext(m_front);
        m_front = first;
        m_length ++;
    }
}

template <typename T>
void LinkedList<T>::addBack(T value)
{
    if(isEmpty())
    {
        m_front = new Node<T>();
        m_front -> setValue(value);
        m_length ++;
    }
    else
    {
        Node<T>* temp = nullptr;
        Node<T>* last = m_front;
        while(last-> getNext() != nullptr)
        {
            last = last -> getNext();
        }
        temp = new Node<T>;
        temp -> setValue(value);
        last -> setNext(temp);
        m_length ++;
    }
}

template <typename T>
bool LinkedList<T>::insert(int position, T value)
{
  Node<T>* temp = m_front;
  Node<T>* temp1 = new Node<T>();
  temp1 -> setValue(value);
  if(m_front == nullptr && position == 1)
  {
    m_front = temp1;
    m_length++;
    return true;
  }
  else if(position == 1)
  {
    temp1 -> setNext(m_front);
    m_front = temp1;
    m_length++;
  }
  else if(position <= m_length +1 && position > 1)
  {
    for(int i = 2 ; i < position ; i++)
    {
      temp = temp -> getNext();
    }
    temp1 -> setNext(temp -> getNext());
    temp -> setNext(temp1);
    m_length++;
    return true;
  }
  else
  {
    return false;
  }
}

template <typename T>
bool LinkedList<T>::removeBack()
{
  if(m_length = 1)
  {
    delete m_front;
    m_length--;
    return true;
  }
  else if(m_length > 1)
  {
    Node<T>* temp = m_front;
    while((temp -> getNext()) -> getNext() != nullptr)
    {
      temp = temp -> getNext();
    }
    delete (temp -> getNext());
    temp -> setNext(nullptr);
    m_length--;
    temp = nullptr;
    return true;
  }
  else
  {
    return false;
  }
}

template <typename T>
bool LinkedList<T>::removeFront()
{
  if(m_length = 1)
  {
    delete m_front;
    return true;
  }
  else if(m_length > 1)
  {
    Node<T>* temp = m_front;
    m_front = m_front -> getNext();
    delete temp;
    temp = nullptr;
    m_length--;
  }
  else
  {
    return false;
  }
}

template <typename T>
bool LinkedList<T>::removeAt(int position)
{
  if(position == 1 && m_length == 1)
  {
    delete m_front;
    m_length--;
    return true;
  }
  else if(m_length >= position)
  {
    Node<T>* cur = m_front -> getNext();
    Node<T>* prev = m_front;
    for(int i = 1 ; i <= position ; i++)
    {
      prev = cur;
      cur = cur -> getNext();
    }
    prev -> setNext(cur -> getNext());
    delete cur;
    m_length--;
    return true;
  }
  else
  {
    return false;
  }


}

template <typename T>
T LinkedList<T>::getEntry(int position) const
{
    Node<T>* temp = m_front;
    for(int i = 1 ; i < position ; i++)
    {
      temp = temp -> getNext();
    }
    return (temp -> getValue());
}

template <typename T>
void LinkedList<T>::setEntry(int position, T value)
{
  if(position <= m_length && position > 0)
  {
    Node<T>* temp = m_front;
    for(int i = 1 ; i < position ; i++)
    {
      temp = temp -> getNext();
    }
    temp -> setValue(value);
  }
  else
  {
    std::cout << "You cant set a value to a node that doesnt exist!";
  }
}
template <typename T>
void LinkedList<T>::print(){
    Node<T>* temp=m_front;
    while(temp->getNext() !=nullptr){
        cout<<temp->getValue();
        temp=temp->getNext();
    }
}
template <typename T> 

void LinkedList<T>::reverselist(){
   	Node<T>*curr=m_front;
	Node<T>*prev=nullptr;
	Node<T>*next=curr->getNext();
	Node<T>*temp=nullptr;
	temp=curr;
	while(temp->getNext() !=nullptr){
		temp=temp->getNext();
		reverselist();
	}
	next=curr->getNext();
	curr->getNext()==prev;
	prev=curr;
	curr=next;
	m_front=temp;
}



