#pragma once
#include "Player.h"

class Warrior : virtual public Player
{
public:
	char warriorName = 'W';

	Warrior(Vector2 position) : Player(position) {
		this->position = position;
		this->name = warriorName;
	};

private	:
	int health = 10;
	
};
