#pragma once
#include "Player.h"

class Mage : virtual public Player
{
public :

	char mageName = 'M';

	Mage(Vector2 position) : Player(position) {
		this->position = position;
		this->name = mageName;
	};


private:
	int health = 1;

	Vector2 attackDirection[8] = {
		Vector2{-1,-1},Vector2{0,-1},Vector2{1,-1},
		Vector2{-1,0},Vector2{1,0},
		Vector2{-1,1},Vector2{0,1},Vector2{1,1},
	};

};
