template <typename T>
T* DoublyLinkedList<T>::dequeue(){
    T* value = this->head->getValue();
    
    return value;
    
    this->head = this->head->getPrev();
}

template <typename T>
void DoublyLinkedList<T>::enqueue(T* value){
    DoublyLinkedListNode<T>* node;
    node->setValue(value);
    
    this->tail->setPrev(node);
    node->setNext(this->tail);
    this->tail = node;
}