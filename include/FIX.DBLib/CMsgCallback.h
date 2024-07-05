#ifndef CMSGCALLBACK_H
#define CMSGCALLBACK_H

#include "FIX.OutProcessAPI/MsgCallback.h"
#include "FIX.DBLib/DBGlobal.h"

class CMsgCallback : public FIX_OutProcessAPI::CMsgCallback
{
public:
	void onMessageRcvd(L_FIX_Engine::CMessage& oMessage)
	{
		L_FIX_Engine::STField* pMsgType = oMessage.getHeaderField(FIX_MSG_TAGS::TAG_MSG_TYPE);
		L_FIX_Engine::STField* pSenderCompID = oMessage.getHeaderField(FIX_MSG_TAGS::TAG_SENDER_COMP_ID);
		L_FIX_Engine::STField* pTargetCompID = oMessage.getHeaderField(FIX_MSG_TAGS::TAG_TARGET_COMP_ID);

		if (pMsgType != NULL && pSenderCompID != NULL && pTargetCompID != NULL)
		{
			printf("New message has been received in API Wrapper. (MsgType='%s', SessionID='%s_%s')\n\n", pMsgType->m_stValue.c_str(), pSenderCompID->m_stValue.c_str(), pTargetCompID->m_stValue.c_str());
		}
	};
};

#endif // CMSGCALLBACK_H