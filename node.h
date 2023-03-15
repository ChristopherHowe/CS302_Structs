/******************************************
Authors - Christopher Howe
Date - 2/19/23
Purpose - Connect elements in a linked linear fashion
******************************************/
#ifndef NODE
#define NODE


#include <iostream>
using namespace std;

template<class ItemType>
class Node {
    ItemType item; // A data item
    Node<ItemType>* next; // Points to next node
    
    public:
    Node();
    Node(const ItemType& anItem);
    Node(const ItemType& anItem, Node<ItemType>* nextNodePtr);
    void setItem(const ItemType& anItem);
    void setNext(Node<ItemType>* nextNodePtr);
    ItemType getItem() const;
    Node<ItemType>* getNext() const;
}; 

#include "node.cpp"
#endif