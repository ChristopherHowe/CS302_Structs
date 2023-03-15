/** ADT list: Link-based implementation
@file StackInterface.h */
#ifndef LIST_INTERFACE_
#define LIST_INTERFACE_
template<class ItemType>
class ListInterface
{
public:
virtual bool isEmpty() const = 0;
virtual int getLength() const = 0;
virtual bool insert(int newPosition, const ItemType& newEntry) = 0;
virtual bool remove(int position) = 0;
virtual void clear() = 0;
virtual ItemType replace(int position, const ItemType& newEntry) =
0;
virtual ~StackInterface() { }
}; // end ListInterface

#endif
