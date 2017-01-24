#include "StateStarting.h"



StateStarting::StateStarting(Machine* arg_pMachine) : m_pMachine(arg_pMachine)
{
}


StateStarting::~StateStarting()
{
}

void StateStarting::PreviousState()
{
	m_pMachine->SetState(new StateOff(m_pMachine));
	delete this;
}

void StateStarting::NextState()
{
	m_pMachine->SetState(new StateOn(m_pMachine));
	delete this;
}

void StateStarting::DoSomeThingButton()
{
	std::cout << "Machine: Still STARTING, can not do anything yet." << std::endl;
}