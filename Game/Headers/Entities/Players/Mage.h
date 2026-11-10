#pragma once
#include "Player.h"

class Mage : virtual public Player
{
public :

char name = 'M';

Mage(Vector2 position) : Player(position) {
	this->position = position;
};
private:
	int health = 3;
};
