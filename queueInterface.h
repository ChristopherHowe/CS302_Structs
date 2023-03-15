#ifndef QUEUE_INTERFACE_H
#define QUEUE_INTERFACE_H
template<class ItemType>
class QueueInterface
{
public:
virtual bool isEmpty() const = 0;
virtual bool enqueue(const ItemType& anEntry) = 0;
virtual bool dequeue() = 0;
virtual ItemType dequeue() const 0;
virtual itemType peekFront();
virtual ~QueueInterface() { }
}; // end QueueInterface
#endif