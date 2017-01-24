#include "StateOff.h"


StateOff::StateOff(Machine* arg_pMachine) : m_pMachine(arg_pMachine)
{
}

StateOff::~StateOff()
{
}

void StateOff::PreviousState()
{
	std::cout << "Machine: Can not go more OFF than OFF!" << std::endl;
}

void StateOff::NextState()
{
	m_pMachine->SetState(new StateOn(m_pMachine));
	delete this;
}

void StateOff::DoSomeThingButton()
{
	std::cout << "Machine: Can not do anything i am OFF!" << std::endl;
}