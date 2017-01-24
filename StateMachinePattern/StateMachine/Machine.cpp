#include "Machine.h"
#include "StateOff.h"

Machine::Machine()
{
	m_pCurrentState = new StateOff(this);
}

Machine::~Machine()
{
}

void Machine::SetState(State* arg_pState)
{
	m_pCurrentState = arg_pState;
}

void Machine::PreviousState()
{
	m_pCurrentState->PreviousState();
}

void Machine::NextState()
{
	m_pCurrentState->NextState();
}

void Machine::DoSomeThingButton()
{
	m_pCurrentState->DoSomeThingButton();
}