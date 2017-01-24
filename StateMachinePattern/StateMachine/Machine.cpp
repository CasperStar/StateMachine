#include "Machine.h"
#include "StateOff.h" // Starting State, needs to be here to prevent a circular dependency

Machine::Machine()
{
	m_pCurrentState = new StateOff(this); // Set the beginning state
}

Machine::~Machine()
{
	delete m_pCurrentState;		// Prevent memory leak, states are allocated on the heap
}

void Machine::SetState(State* arg_pState)
{
	m_pCurrentState = arg_pState;	// Sets the current state out of the different states
}

void Machine::PreviousState()
{
	m_pCurrentState->PreviousState();	// Can be seen as the different buttons of the 'machine'
}

void Machine::NextState()
{
	m_pCurrentState->NextState();		// Can be seen as the different buttons of the 'machine'
}

void Machine::DoSomeThingButton()
{
	m_pCurrentState->DoSomeThingButton();	// Can be seen as the different buttons of the 'machine'
}