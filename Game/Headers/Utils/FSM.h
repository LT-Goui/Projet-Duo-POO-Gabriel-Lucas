#pragma once

class State
{
public:
	virtual void enter() {};
	virtual void update() {};
	virtual void exit() {};
};

class FSM
{
public:
	State stateCollection[1] = {};

	State* currentState = nullptr;
	void changeState(State* newState);
	void changeStateFromIndex(int index);

};

