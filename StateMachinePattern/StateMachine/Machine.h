#ifndef _STATEMACHINE_MACHINE_H_
#define _STATEMACHINE_MACHINE_H_

// Include
#include "State.h"

class Machine
{
public:
	// Constructor & Destructor
	Machine();
	~Machine();

	// Public Methodes
	void SetState(State* arg_pState);

	void PreviousState();		// Can be seen as the buttons of the machine
	void NextState();			// Every state has a different implementation of the buttons
	void DoSomeThingButton();	// Can be as many buttons or state as you desire

private:
	// Private variables
	State* m_pCurrentState;
};

#endif //_STATEMACHINE_MACHINE_H_