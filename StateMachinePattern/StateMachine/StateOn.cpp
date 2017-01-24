#include "StateOn.h"


StateOn::StateOn(Machine* arg_pMachine) : m_pMachine(arg_pMachine)
{
}

StateOn::~StateOn()
{
}

void StateOn::PreviousState()
{
	m_pMachine->SetState(new StateStarting(m_pMachine)); // Set the new state in the machine
	delete this; // Delete the current state object
}

void StateOn::NextState()
{
	std::cout << "Machine: Can turn more ON than ON!" << std::endl; // Implementation Next
}

void StateOn::DoSomeThingButton()
{
	std::cout << "Machine: I am turned ON, doing some things!" << std::endl; // Implementation DoSomeThing
}