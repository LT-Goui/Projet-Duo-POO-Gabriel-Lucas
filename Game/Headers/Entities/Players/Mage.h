#pragma once
#include "Player.h"

class Mage : virtual public Player
{
public :

	char mageName = 'M';

	Mage(Vector2 position);

	std::vector<Vector2> NewAttackDirection = {
	Vector2{-1,-1}, Vector2{0,-1}, Vector2{1,-1},
	Vector2{-1,0},Vector2{1,0},
	Vector2{-1,1}, Vector2{0,1}, Vector2{1,1},
	};

protected:
	int mageHealth = 1;

private:

};
