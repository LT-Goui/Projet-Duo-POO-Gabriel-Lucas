#pragma once
#include "Enemy.h"
#include "../../../Headers/Utils/FSM.h"

class WanderingState : public State {
	void enter() override;
	void update() override;
	void exit() override;
};

class Chasing : public State {
	void enter() override;
	void update() override;
	void exit() override;
};

class Zombie : public Enemy
{
protected:
	enum E_ZombieState
	{
		Wandering,
		Chasing,
		Count
	};

	FSM zombieFSM;

	Vector2 getDirectionToTarget(Vector2 target);
	Vector2 getRandomDirection();

	void setStates();

public:
	Zombie(Vector2 position) : Enemy(position) {
		this->position = position;
		setStates();
	};


	
};

