#ifndef DATAADAPTERFIXAPI_KXIMPL_H
#define DATAADAPTERFIXAPI_KXIMPL_H

#include"FIX.DBLib/Interfaces/DataAdapterInterface.h"
#include"FIX.DBLib/Interfaces/InterfaceInputAPI.h"

class DataAdapterFIXAPI_KXImpl : public DataAdapterInterface {
public:
    void convert() override;
    void receive() override;


};

#endif // DATAADAPTERFIXAPI_KXIMPL_H