from Server import Server
from Status import Status
from DoublyLinkedList import DoublyLinkedList

class ServerTerminator:
    def __init__(self, queue: DoublyLinkedList[Server]):
        self.__queue = queue
    
    def terminateNextServer(self):
        server = self.__queue.dequeue().set_status(Status.TERMINATING)