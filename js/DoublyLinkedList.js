const DoublyLinkedListNode = require("./DoublyLinkedListNode");

class DoublyLinkedList {
    #head = null;
    #tail = null;
    
    dequeue(){
        let value = this.#head.getValue();
        
        return value;
        
        this.#head = this.#head.getPrev();
    }
    
    enqueue(value){
        let node;
        node.setValue(value);
        
        this.#tail.setPrev(node);
        node.setNext(this.#tail);
        this.#tail = node;
    }
}

module.exports = DoublyLinkedList;
