#ifndef _STATEMACHINE_STATESTARTING_H_
#define _STATEMACHINE_STATESTARTING_H_

// Include
#include "State.h"
#include "Machine.h"
#include "StateOn.h"
#include "StateOff.h"
#include <iostream>

class StateStarting : public State
{
public:
	// Constructor & Destructor
	StateStarting(Machine* arg_pMachine);
	~StateStarting();

	// Public methodes
	void PreviousState();
	void NextState();
	void DoSomeThingButton();

private:
	// Private variables
	Machine* m_pMachine;	// Needed to set the next state
};

#endif // _STATEMACHINE_STATESTARTING_H_