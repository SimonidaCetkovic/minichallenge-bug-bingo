class Status {
    #label;
    
    static ACTIVE = new Status('Active');
    static HYBERNATED = new Status('Hybernated');
    static STOPPED = new Status('Stopped');
    static TERMINATED = new Status('Terminated');

    constructor(label) {
        this.#label = label;
    }
    
    getLabel(){
        return this.#label;
    }
    
    setLabel(label){
        this.#label = label;
    }
}

module.exports = Status;
