#pragma once
#include "Player.h"

class Mage : virtual public Player
{
public :

	char name = 'M';

	Mage(Vector2 position) : Player(position) {
		this->position = position;
	};

	void attack() override;

private:
	int health = 3;

	Vector2 attackDirection[8] = {
		Vector2{-1,-1},Vector2{0,-1},Vector2{1,-1},
		Vector2{-1,0},Vector2{1,0},
		Vector2{-1,1},Vector2{0,1},Vector2{1,1},
	}
};
