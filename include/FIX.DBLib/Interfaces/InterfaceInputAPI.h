#ifndef INTERFACEINPUTAPI_H
#define INTERFACEINPUTAPI_H

#include <iostream>

struct sessionDetail{

};

class InterfaceInputAPI {
public:
    virtual void init() = 0;
    virtual void reconnect() = 0;
    virtual void receive() = 0;
};

#endif // INTERFACEINPUTAPI_H