class DoublyLinkedListNode {
    #value;
    #next;
    #previous;

    constructor(value) {
        this.#value = value;
    }
    
    getValue(){
        return this.#value;
    }
    
    setValue(value){
        this.#value = value;
    }
    
    getNext(){
        return this.#next;
    }
    
    setNext(next){
        this.#next = next;
    }
    
    getPrev(){
        return this.#previous;
    }
    
    setPrev(previous){
        this.#previous = previous;
    }
}

module.exports = DoublyLinkedListNode;
