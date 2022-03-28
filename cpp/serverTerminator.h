#ifndef SERVER_TERMINATOR_H
#define SERVER_TERMINATOR_H
#include "server.h"
#include "doublyLinkedList.h"

class ServerTerminator{
    private:
        DoublyLinkedList<Server>* queue = NULL;
        
    public:
        ServerTerminator(DoublyLinkedList<Server>* queue);
        void terminateNextServer();
};

#endif