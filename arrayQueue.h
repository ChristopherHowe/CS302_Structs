#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#include "queueInterface.h"

#define MAX_ITEMS

template <class ItemType> 
class ArrayQueue : public QueueInterface {
    ItemType array[MAX_ITEMS];
    int front;
    int back;


    virtual bool isEmpty() const = 0;
    virtual bool enqueue(const ItemType& anEntry) = 0;
    virtual bool dequeue() = 0;
    virtual ItemType dequeue() const 0;
    virtual itemType peekFront();

};

#include "arrayQueue.cpp"

#endif