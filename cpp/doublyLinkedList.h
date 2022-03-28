#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "doublyLinkedListNode.h"

template <typename T>
class DoublyLinkedList{
    private:
        DoublyLinkedListNode<T>* head;
        DoublyLinkedListNode<T>* tail;
    public:
        T* dequeue();
        void enqueue(T* value);
};

#include "doublyLinkedList.tpp"

#endif
