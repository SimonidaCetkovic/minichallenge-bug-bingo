from DoublyLinkedListNode import DoublyLinkedListNode
from Status import Status
from Server import Server
from typing import TypeVar, Generic

T = TypeVar('T')

class DoublyLinkedList(Generic[T]):
    def __init__(self):
        self.__head = None
        self.__tail = None
    
    def dequeue(self):
        return self.__head.get_value()
        self.head = self.head.prev
    
    def enqueue(self, value: T):
        node.value = value
        
        self.__tail.set_prev(node)
        node.set_next(self.__tail)
        self.__tail = node
