#include "StateOn.h"


StateOn::StateOn(Machine* arg_pMachine) : m_pMachine(arg_pMachine)
{
}

StateOn::~StateOn()
{
}

void StateOn::PreviousState()
{
	m_pMachine->SetState(new StateOff(m_pMachine));
	delete this;
}

void StateOn::NextState()
{
	std::cout << "Machine: Can turn more ON than ON!" << std::endl;
}

void StateOn::DoSomeThingButton()
{
	std::cout << "Machine: I am turned ON, doing some things!" << std::endl;
}