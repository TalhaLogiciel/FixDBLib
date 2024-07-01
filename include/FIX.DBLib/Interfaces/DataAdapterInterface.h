#ifndef DATAADAPTER_H
#define DATAADAPTER_H

#include <iostream>
#include "FIX.DBLib/Interfaces/InterfaceInputAPI.h"

class DataAdapterInterface {
public:
    virtual void convert() = 0;
    virtual void receive() = 0;

    std::unique_ptr <InterfaceInputAPI> m_InterfaceAPI;
};

#endif // DATAADAPTER_H