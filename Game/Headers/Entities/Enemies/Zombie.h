#pragma once
#include "Enemy.h"
class Zombie : public Enemy
{
public:
	Zombie(Vector2 position) : Enemy(position) {
		this->position = position;
	};
};

