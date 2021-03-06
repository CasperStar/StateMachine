#ifndef _STATEMACHINE_STATEOFF_H_
#define _STATEMACHINE_STATEOFF_H_

// Include
#include "State.h"
#include "Machine.h"
#include "StateStarting.h"
#include <iostream>

class StateOff : public State
{
public:
	// Constructor & Destructor
	StateOff(Machine* arg_pMachine);
	~StateOff();

	// Public methodes
	void PreviousState();
	void NextState();
	void DoSomeThingButton();

private:
	// Private variables
	Machine* m_pMachine;	// Needed to set the next state
};

#endif // _STATEMACHINE_STATEOFF_H_