#ifndef STATUS_H
#define STATUS_H

#include <string>

class Status{
    private:
        std::string label;
        
        Status(std::string label);
        
    public:
        static const Status ACTIVE;
        static const Status HYBERNATED;
        static const Status STOPPED;
        static const Status TERMINATED;
        
        std::string getLabel() const;
        void setLabel(std::string label);
};

#endif