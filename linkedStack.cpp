#include <iostream>
using namespace std;
template<class ItemType>
LinkedStack<ItemType>::LinkedStack(){
    headPtr = nullptr;
}
template<class ItemType>
LinkedStack<ItemType>::LinkedStack(const LinkedStack& rhs){
    if(rhs.headPtr != nullptr){
        Node<ItemType>* oldCurPtr = rhs.headPtr;
        headPtr = new Node(oldCurPtr->getItem());
        Node<ItemType>* newCurPtr = headPtr;

        oldCurPtr = oldCurPtr->getNext();
        
        while(oldCurPtr != nullptr){
            Node<ItemType>* newNodePtr = new Node(oldCurPtr->getItem());
            newCurPtr->setNext(newNodePtr);
            newCurPtr = newCurPtr->getNext();
            oldCurPtr = oldCurPtr->getNext();
        }
    }
    else{
        headPtr = nullptr;
    }
    
}
/*
template<class ItemType>
LinkedStack<ItemType>::LinkedStack(Node<ItemType>*){
    
}*/
template<class ItemType>
bool LinkedStack<ItemType>::push(const ItemType& item){
    Node<ItemType>* newNode = new Node(item, headPtr);
    headPtr = newNode;
    return true;
}

template<class ItemType>
bool LinkedStack<ItemType>::pop(){
    if (!isEmpty()){
        Node<ItemType>* itemToDelete = headPtr;
        headPtr = headPtr->getNext();
        delete itemToDelete;
        return true;
    }
    return false;
}
template<class ItemType>
bool LinkedStack<ItemType>::isEmpty() const {
    if(headPtr == nullptr){
        return true;
    }
    return false;

}
template<class ItemType>
ItemType LinkedStack<ItemType>::peek() const {
    return headPtr->getItem();
}