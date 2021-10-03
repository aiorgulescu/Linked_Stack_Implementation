#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include "StackInterface.h"
#include "/Users/aiorgulescu/Desktop/CS302/homework2-aiorgulescu/Node/Node.h"

template <class ItemType>
class LinkedStack : public StackInterface<ItemType>
{
    Node<ItemType> *topPtr;

    public:
        LinkedStack();
        bool pop();
        bool push(const ItemType &newEntry);
        bool isEmpty() const;
        ItemType peek() const;

        ~LinkedStack(){}
};
#include "LinkedStack.cpp"







#endif