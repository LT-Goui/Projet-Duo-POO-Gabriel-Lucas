#include "FSM.h"
#include "../Headers/Utils/FSM.h"

void FSM::changeState(State* newState)
{
	if (currentState != nullptr) {
		currentState->exit();
	}
	currentState = newState;
	if (currentState != nullptr) {
		currentState->enter();
	}

}

void FSM::changeStateFromIndex(int index)
{
	changeState(stateCollection[index])
}
