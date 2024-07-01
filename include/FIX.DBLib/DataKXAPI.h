#ifndef INPUTAPI_H
#define INPUTAPI_H

#include"FIX.DBLib/Interfaces/DataAPIInterface.h"

class DataKXAPI : public DataAPIInterface {
public:
    void init() override;
    void reconnect() override;
    void write() override;
};

#endif // INPUTAPI_H