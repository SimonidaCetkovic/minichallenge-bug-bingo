from Status import Status

class Server:
    def __init__(self, id: str, status: Status):
        self.__id = id
        self.__status = status
        
    def get_id(self):
        return self.__id
    
    def get_status(self):
        return self.__status
        
    def set_status(self, status: Status):
        self.__status = status