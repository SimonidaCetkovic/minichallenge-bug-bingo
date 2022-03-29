const Status = require("./Status");

class ServerTerminator{
    #queue;
    
    constructor(queue){
        this.#queue = queue;
    }
    
    terminateNextServer(){
        this.#queue.dequeue().setStatus(Status.TERMINATING);
    }
}

module.exports = ServerTerminator;
