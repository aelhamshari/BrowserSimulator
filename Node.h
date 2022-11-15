/* -------------------------------------------------
 *
 * File Name: Node.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Declaration of the Node class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
 #ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
  private:
    T m_value;
    Node<T>* m_next;

  public:
    /*
     * @pre Have an Entry Value
     * @param value taken from the user
     * @post Creates a Node object that houses value
    */
    Node (T value);
    /*
     * @pre Have an Entry Value
     * @param takes value from user
     * @post node value is entry
    */
    void setValue(const T& entry);
    /*
     * @pre None
     * @post None
     * @return Returns the value at the node
    */
    T getValue()const;
    /*
     * @pre None
     * @post None
     * @return Returns a pointer to a value at the node
    */
    T* getValueptr();
    /*
     * @pre None
     * @post None
     * @return Returns a pointer to a node
    */
    Node<T>* getNext()const;
    /*
     * @pre Have a node entry
     * @param an adjacent node
     * @post next node is equal to next
    */
    void setNext(Node<T>* next);
};
#include "Node.cpp"
#endif
