// Include
#include "Machine.h"
#include <iostream>

int main()
{
	Machine l_stateMachine = Machine();

	std::cout << "State Machine started!" << std::endl;

	l_stateMachine.DoSomeThingButton();
	l_stateMachine.NextState();
	l_stateMachine.DoSomeThingButton();
	l_stateMachine.NextState();
	l_stateMachine.DoSomeThingButton();
	l_stateMachine.PreviousState();
	l_stateMachine.DoSomeThingButton();
	l_stateMachine.PreviousState();
	l_stateMachine.PreviousState();
	l_stateMachine.DoSomeThingButton();
}