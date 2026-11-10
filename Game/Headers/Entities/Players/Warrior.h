#pragma once
#include "Player.h"

class Warrior : virtual public Player
{
public:
	char name = 'W';

	Warrior(Vector2 position);;

private	:
	int health = 5;
	
};
