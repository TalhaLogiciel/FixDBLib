#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include"FIX.DBLib/Interfaces/DataAPIInterface.h"
#include"FIX.DBLib/Interfaces/DataAdapterInterface.h"


class Manager {
public:
    void init();
    void start();
    void stop();

private:
    std::unique_ptr<DataAPIInterface> m_DataApiInterface;
    std::unique_ptr<DataAdapterInterface> m_DataAdapterInterface;
};

#endif // INPUTAPI_H