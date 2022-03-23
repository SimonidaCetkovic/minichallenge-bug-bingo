from typing import TypeVar, Generic

T = TypeVar('T')

class DoublyLinkedListNode(Generic[T]):
    def __init__(self, value: T):
        self.__value = value
        self.__next = None
        self.__prev = None
        
    def get_next(self):
        return self.__next
        
    def set_next(self, next: 'DoublyLinkedListNode[T]'):
        self.__next = next
        
    def get_prev(self):
        return self.__prev
        
    def set_prev(self, prev: 'DoublyLinkedListNode[T]'):
        self.__prev = prev
        
    def get_value(self):
        return self.__value
        
    def set_value(self, value: T):
        self.__value = value
