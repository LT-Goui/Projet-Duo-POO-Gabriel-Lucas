#pragma once
#include "Enemy.h"

#include <random>

class HeadlessZombie : public Enemy
{
	Vector2 getDirectionToTarget(Vector2 target) override;

	HeadlessZombie(Vector2 position) : Enemy(position) {
		this->position = position;
	};
};

