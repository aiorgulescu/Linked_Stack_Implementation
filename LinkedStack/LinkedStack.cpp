#ifndef LINKED_LIST_CPP
#define LINKED_LIST_CPP

#include "LinkedStack.h"

template<typename ItemType>
LinkedStack<ItemType>::LinkedStack(): topPtr(nullptr) {}

template<typename ItemType>
bool LinkedStack<ItemType>::pop()
{
    bool canDo = !isEmpty();

    if (canDo)
    {
        canDo = true;
        Node<ItemType> *currPtr = topPtr;
        topPtr = topPtr->getNext();
        delete currPtr;
    }

    return canDo;

}

template<typename ItemType>
bool LinkedStack<ItemType>::push(const ItemType &newEntry)
{
    Node<ItemType> *newItem = new Node<ItemType>(newEntry);

    newItem->setNext(topPtr);
    topPtr = newItem;
    

    return true;

}



template<typename ItemType>
bool LinkedStack<ItemType>::isEmpty() const
{
    return topPtr == nullptr;
}

template <typename ItemType>
ItemType LinkedStack<ItemType>::peek() const
{
    if (topPtr != nullptr)
    {
        return topPtr->getItem();
    }
    else
    {
        return 0;
    }
}


#endif