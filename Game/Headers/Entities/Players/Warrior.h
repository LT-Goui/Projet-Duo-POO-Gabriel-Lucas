#pragma once
#include "Player.h"

class Warrior : virtual public Player
{
public:
	char warriorName = 'W';

	Warrior(Vector2 position);

protected	:
	int warriorHealth = 5;
	
};
