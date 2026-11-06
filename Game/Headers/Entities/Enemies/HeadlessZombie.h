#pragma once
#include "Enemy.h"

#include <random>

class HeadlessZombie : public Enemy
{
public :

	Vector2 getDirectionToTarget(Vector2 target) override;

	HeadlessZombie(Vector2 position) : Enemy(position) {
		this->position = position;
		this->name = newName;
	};

private:
	char newName = 'z';
};

