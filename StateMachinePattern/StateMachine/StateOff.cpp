#include "StateOff.h"


StateOff::StateOff(Machine* arg_pMachine) : m_pMachine(arg_pMachine)
{
}

StateOff::~StateOff()
{
}

void StateOff::PreviousState()
{
	std::cout << "Machine: Can not go more OFF than OFF!" << std::endl; // Implementation Previous
}

void StateOff::NextState()
{
	m_pMachine->SetState(new StateStarting(m_pMachine)); // Set the new state in the machine
	delete this; // Delete the current state object
}

void StateOff::DoSomeThingButton()
{
	std::cout << "Machine: Can not do anything i am OFF!" << std::endl; // Implementation DoSomeThing
}