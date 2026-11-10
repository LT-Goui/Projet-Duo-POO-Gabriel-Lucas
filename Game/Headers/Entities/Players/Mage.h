#pragma once
#include "Player.h"

class Mage : virtual public Player
{
public :

	char mageName = 'M';

	Mage(Vector2 position) : Player(position) {
		this->position = position;
		this->name = mageName;
		this->health = mageHealth;
	};

protected:
	int mageHealth = 1;

private:

	Vector2 attackDirection[8] = {
		Vector2{-1,-1},Vector2{0,-1},Vector2{1,-1},
		Vector2{-1,0},Vector2{1,0},
		Vector2{-1,1},Vector2{0,1},Vector2{1,1},
	};

};
