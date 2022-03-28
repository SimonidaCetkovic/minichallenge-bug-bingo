#ifndef DOUBLY_LINKED_LIST_NODE_H
#define DOUBLY_LINKED_LIST_NODE_H

#include <cstddef>

template <typename T>
class DoublyLinkedListNode{
    private:
        T* value = NULL;
        DoublyLinkedListNode* next = NULL;
        DoublyLinkedListNode* prev = NULL;
        
    public:
        DoublyLinkedListNode(T* value);
        
        T* getValue();
        
        void setValue(T* value);
        
        DoublyLinkedListNode<T>* getNext() const;
        
        void setNext(DoublyLinkedListNode* next);
        
        DoublyLinkedListNode<T>* getPrev() const;
        
        void setPrev(DoublyLinkedListNode* prev);
};

#include "doublyLinkedListNode.tpp"

#endif