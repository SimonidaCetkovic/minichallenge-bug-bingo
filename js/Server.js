class Server {
    #id;
    #status;

    constructor(id, status) {
        this.#id = id;
        this.#status = status;
    }
    
    getId(){
        return this.#id;
    }
    
    getStatus(){
        return this.#status;
    }
    
    setStatus(status){
        this.#status = status;
    }
}

module.exports = Server;
