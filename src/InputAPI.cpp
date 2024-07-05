#include "Fix.DBLib/InputAPI.h"
#include "FIX.DBLib/CMsgCallback.h"
#include "FIX.Engine/Message.h"
#include "FIX.OutProcessAPI/FIXOutAPIManager.h"

int InputAPI::init() {
	std::cout << "InputAPI init called ....." << std::endl;

	FIX_OutProcessAPI::STConnectionInfo oConnInfo;

	oConnInfo.m_unConnectionID = 13;
	oConnInfo.m_vtConnEndPoints.push_back(FIX_OutProcessAPI::STIPEndPoint("10.0.10.174", 19025));

	std::vector<FIX_OutProcessAPI::STConnectionInfo> vtConnectionInfo;

	vtConnectionInfo.push_back(oConnInfo);

	CMsgCallback oMsgCallback; // make it shared ptr and allocate the memory.
	if (FIX_OutProcessAPI::CFIXOutAPIManager::init(13000, vtConnectionInfo, &oMsgCallback) != 0)
		return -1; // introduce logging

	while (true)
	{
		//std::this_thread::sleep_for();
	}

	FIX_OutProcessAPI::CFIXOutAPIManager::close();
	return 0;
}

void InputAPI::reconnect() {

}

void InputAPI::receive() {

}