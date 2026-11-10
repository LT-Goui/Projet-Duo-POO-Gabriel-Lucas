#pragma once
#include "Zombie.h"
#include "../Swimmer.h"

class ZombieSwimmer : public Zombie, public Swimmer
{
public :
	void moveInDirection(Map current_map, Vector2 direction) override;

	void move(Map current_map, Vector2 playerPosition) override;

	ZombieSwimmer(Vector2 position) : Zombie(position) {
		this->position = position;
		this->name = newName;
		can_entity_swim = true;
	};

private:
	char newName = '&';
};

