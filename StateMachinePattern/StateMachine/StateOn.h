#ifndef _STATEMACHINE_STATEON_H_
#define _STATEMACHINE_STATEON_H_

// Include
#include "State.h"
#include "Machine.h"
#include "StateOff.h"
#include <iostream>

class StateOn : public State
{
public:
	// Constructor & Destructor
	StateOn(Machine* arg_pMachine);
	~StateOn();

	// Public methodes
	void PreviousState();
	void NextState();
	void DoSomeThingButton();

private:
	// Private variables
	Machine* m_pMachine;
};

#endif // _STATEMACHINE_STATEON_H_