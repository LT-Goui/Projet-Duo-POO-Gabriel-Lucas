#pragma once
#include "Enemy.h"

/*
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
*/

class Zombie : public Enemy
{
protected:
	/*
	enum E_ZombieState
	{
		Wandering,
		Chasing,
		Count
	};

	FSM zombieFSM;

	void setStates();

	*/

	Vector2 getRandomDirection();

	int range = 5;

public:

	char name = 'X';

	void move(Map current_map, Vector2 playerPosition) override;

	bool isPlayerInRange(Vector2 playerPosition, int range);

	Zombie(Vector2 position) : Enemy(position) {
		this->position = position;
	};


		
};

