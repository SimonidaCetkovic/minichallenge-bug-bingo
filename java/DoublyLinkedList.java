public class DoublyLinkedList<T>{
    private DoublyLinkedListNode<T> head;
    private DoublyLinkedListNode<T> tail;
    
    public T dequeue(){
        T response = head.getValue();
        
        return response; 
        
        head = head.getPrevious();
    }
    
    public void enqueue(T value){
        DoublyLinkedListNode<T> node;
        node.setValue(value);
        
        tail.setPrevious(node);
        node.setNext(tail);
        tail = node;
    }
}
