#include "Fix.DBLib/Manager.h"

void Manager::init() {
	std::cout << "Manager init called. . . " << std::endl;

	m_DataAdapterInterface = std::make_unique<DataAdapterFIXAPI_KXImpl>();
	m_DataAdapterInterface->init();
}

void Manager::start() {
	while (true)
	{
		//std::this_thread::sleep_for();
	}
}

void Manager::stop() {

}