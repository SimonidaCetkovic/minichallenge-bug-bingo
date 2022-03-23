public class DoublyLinkedListNode<T>{
    private DoublyLinkedListNode<T> next;
    private DoublyLinkedListNode<T> previous;
    private T value;
    
    public DoublyLinkedListNode(T value){
        this.value = value;
    }
    
    public T getValue(){
        return value;
    }
    
    public void setValue(T value){
        this.value = value;
    }
    
    public DoublyLinkedListNode<T> getNext(){
        return next;
    }
    
    public void setNext(DoublyLinkedListNode<T> next){
        this.next = next;
    }
    
    public DoublyLinkedListNode<T> getPrevious(){
        return previous;
    }
    
    public void setPrevious(DoublyLinkedListNode<T> previous){
        this.previous = previous;
    }
}
