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
	void PreviousState();
	void NextState();
	void DoSomeThingButton();

private:
	// Private variables
	State* m_pCurrentState;
};

#endif //_STATEMACHINE_MACHINE_H_