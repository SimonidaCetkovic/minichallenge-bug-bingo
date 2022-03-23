class ServerTerminator{
    DoublyLinkedList<Server> queue;
    
    public ServerTerminator(DoublyLinkedList<Server> queue){
        this.queue = queue;
    }
    
    public void terminateNextServer(){
        queue.dequeue().setStatus(Status.TERMINATING);
    }
}