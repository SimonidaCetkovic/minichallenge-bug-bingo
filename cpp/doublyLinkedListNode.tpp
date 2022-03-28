template <typename T>
DoublyLinkedListNode<T>::DoublyLinkedListNode(T* value){
    this->value = value;
}

template <typename T>
T* DoublyLinkedListNode<T>::getValue(){
    return this->value;
}

template <typename T>
void DoublyLinkedListNode<T>::setValue(T* value){
    this->value = value;
}

template <typename T>
DoublyLinkedListNode<T>* DoublyLinkedListNode<T>::getNext() const{
    return this->next;
}

template <typename T>
void DoublyLinkedListNode<T>::setNext(DoublyLinkedListNode<T>* next){
    this->next = next;
}

template <typename T>
DoublyLinkedListNode<T>* DoublyLinkedListNode<T>::getPrev() const{
    return this->prev;
}

template <typename T>
void DoublyLinkedListNode<T>::setPrev(DoublyLinkedListNode<T>* prev){
    this->prev = prev;
}
