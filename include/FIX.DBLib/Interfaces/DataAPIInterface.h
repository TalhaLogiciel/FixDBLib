#ifndef DATAAPIINTERFACE_H
#define DATAAPIINTERFACE_H

#include <iostream>

class DataAPIInterface {
public:
    virtual void init() = 0;
    virtual void reconnect() = 0;
    virtual void write() = 0;
};

#endif // DATAAPIINTERFACE_H