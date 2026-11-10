#pragma once
#include "Player.h"

class Warrior : virtual public Player
{
public:
	char name = 'W';

	Warrior(Vector2 position) : Player(position) {
		this->position = position;
	};

private	:
	int health = 5;
	
};
