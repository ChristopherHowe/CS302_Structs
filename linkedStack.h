#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include "stackInterface.h"
#include "node.h"

template <class ItemType>
class LinkedStack : public StackInterface<ItemType> {
    Node<ItemType>* headPtr;


    public:
    LinkedStack();
    LinkedStack(const LinkedStack&);
    LinkedStack(Node<ItemType>*);

    bool push(const ItemType&);
    bool pop();
    bool isEmpty() const;
    ItemType peek() const;


};

#include "linkedStack.cpp"
#endif