#ifndef SERVER_H
#define SERVER_H

#include <string>
#include "status.h"

class Server{
    private:
        std::string id;
        const Status* status;
        
    public:
        Server(std::string id, const Status* status);
            
        std::string getId() const;
        
        const Status* getStatus() const;
        void setStatus(const Status* status);
};

#endif
