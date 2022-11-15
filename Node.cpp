/* -------------------------------------------------
 *
 * File Name: Node.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Implementation of the Node class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#include "Node.h"

template <typename T>
Node<T>::Node (T value)
{
  m_value = value;
  m_next= nullptr;
}

template <typename T>
T* Node<T>::getValueptr()
{
  return (&m_value);
}

template <typename T>
void Node<T>::setValue (const T& entry)
{
  m_value = entry;
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
  m_next = next;
}

template <typename T>
T Node<T>::getValue()const
{
  return (m_value);
}

template <typename T>
Node<T>* Node<T>::getNext()const
{
  return (m_next);
}
