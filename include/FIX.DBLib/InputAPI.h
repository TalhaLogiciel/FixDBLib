#ifndef INPUTAPI_H
#define INPUTAPI_H

#include"FIX.DBLib/Interfaces/InterfaceInputAPI.h"

class InputAPI : public InterfaceInputAPI {
public:
    void init() override;
    void reconnect() override;
    void receive() override;
};

#endif // INPUTAPI_H