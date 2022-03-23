from enum import Enum

class Status(Enum):
    def __init__(self, label: str):
          self.__label = label
    
    def get_label(self):
        return self.__label
    
    def set_label(self, label: str):
        return self.__label
    
    ACTIVE = "Active"
    HYBERNATED = "Hybernated"
    STOPPED = "Stopped"
    TERMINATED = "Terminated"