#include "status.h"

Status::Status(std::string label) {  
    this->label = label;
}

std::string Status::getLabel() const{
    return this->label;
}

const Status Status::ACTIVE = Status("Active");
const Status Status::HYBERNATED = Status("Hybernated");
const Status Status::STOPPED = Status("Stopped");
const Status Status::TERMINATED = Status("Terminated");

void Status::setLabel(std::string label){
    this->label = label;
}
