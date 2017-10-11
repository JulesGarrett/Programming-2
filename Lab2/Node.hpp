/**
*	@file Node.hpp
*	@author Julia Garrett
*	@date 9/27/2016
*	@brief A  file for templated Node class
*/
template <typename T>
Node<T>::Node()
{
    m_next = nullptr;
    m_value = T();
}

template <typename T>
T Node<T>::getValue()
{
    return(m_value);
}

template <typename T>
void Node<T>::setValue(T value)
{
    m_value = value;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
    return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
    m_next = next;
}
