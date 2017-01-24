#ifndef _STATEMACHINE_STATE_H_
#define _STATEMACHINE_STATE_H_

// Abstract Class
class State
{
public:
	// Destructor
	virtual ~State() { };

	// Public methodes
	virtual void PreviousState() =0;
	virtual void NextState() =0;
	virtual void DoSomeThingButton() = 0;
};

#endif // _STATEMACHINE_STATE_H_