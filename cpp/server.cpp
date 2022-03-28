#include "server.h"

Server::Server(std::string id, const Status* status){
    this->id = id;
    this->status = status;
}

std::string Server::getId() const{
    return this->id;
}

const Status* Server::getStatus() const{
    return this->status;
}


void Server::setStatus(const Status* status){
    this->status = status;
}