#pragma once
#include "Enemy.h"

#include <random>

class HeadlessZombie : public Enemy
{
public :

	Vector2 getDirectionToTarget(Vector2 target) override;

	void move(Map current_map, Vector2 playerPosition) override;

	HeadlessZombie(Vector2 position) : Enemy(position) {
		this->position = position;
		this->name = newName;
	};

private:
	char newName = 'Y';
};

