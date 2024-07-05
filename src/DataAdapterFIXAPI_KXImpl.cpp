#include "Fix.DBLib/DataAdapterFIXAPI_KXImpl.h"
#include "FIX.DBLib/InputAPI.h"

void DataAdapterFIXAPI_KXImpl::convert() {

}

void DataAdapterFIXAPI_KXImpl::receive() {

}

void DataAdapterFIXAPI_KXImpl::init() {

	std::cout << "Data Adapter API Called. . " << std::endl;

	m_InterfaceInputAPI = std::make_unique<InputAPI>();

	m_InterfaceInputAPI->init();
}