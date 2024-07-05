#pragma once

#ifndef DBGLOBAL_H
#define DBGLOBAL_H

//#include "FIX.Engine/Global.h"
//#include "FIX.Engine/Message.h"
//#include "FIX.OutProcessAPI/FIXOutAPIManager.h"

#include <Windows.h>
#include <ctime>

struct STSimulationInfo
{
	std::string m_stSenderCompID;
	std::string m_stTargetCompID;
	std::string m_stBoothID;
	unsigned int m_unConnectionID;

	STSimulationInfo(void) 
		:	m_stSenderCompID(""), 
			m_stTargetCompID(""),
			m_stBoothID(""),
			m_unConnectionID(0)
	{
	};

	STSimulationInfo(const std::string& stSenderCompID, const std::string& stTargetCompID, const std::string& stBoothID, unsigned int unConnectionID) 
		:	m_stSenderCompID(stSenderCompID), 
			m_stTargetCompID(stTargetCompID),
			m_stBoothID(stBoothID),
			m_unConnectionID(unConnectionID)
	{
	};
};
namespace FIX_MSG_TAGS
{
	unsigned int TAG_ACCOUNT				= 1;
	unsigned int TAG_CLORD_ID				= 11;
	unsigned int TAG_HANDL_INST				= 21;
	unsigned int TAG_MSG_TYPE				= 35;
	unsigned int TAG_ORDER_QTY				= 38;
	unsigned int TAG_ORD_TYPE				= 40;
	unsigned int TAG_PRICE					= 44;
	unsigned int TAG_RULE_80_A				= 47;
	unsigned int TAG_SENDER_COMP_ID			= 49;
	unsigned int TAG_SIDE					= 54;
	unsigned int TAG_SYMBOL					= 55;
	unsigned int TAG_TARGET_COMP_ID			= 56;	
	unsigned int TAG_TIME_IN_FORCE			= 59;
	unsigned int TAG_TRANSACT_TIME			= 60;
	unsigned int TAG_SETTLMNT_TYPE			= 63;	
	unsigned int TAG_CLIENT_ID				= 109;
	unsigned int TAG_ON_BEHALF_OF_COMP_ID	= 115;
	unsigned int TAG_TARGET_LOCATION_ID		= 143;
};



#endif // DBGLOBAL_H