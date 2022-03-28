#include "serverTerminator.h"
#include "status.h"

ServerTerminator::ServerTerminator(DoublyLinkedList<Server>* queue){
    this->queue = queue;
}

void ServerTerminator::terminateNextServer(){
    this->queue->dequeue()->setStatus(&Status::TERMINATING);
}
