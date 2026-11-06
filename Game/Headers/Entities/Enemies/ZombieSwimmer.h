#pragma once
#include "Zombie.h"
#include "../Swimmer.h"

class ZombieSwimmer : public Zombie, public Swimmer
{
public :
	bool can_entity_swim = true;
	void moveInDirection(Map current_map, Vector2 direction) override;

	ZombieSwimmer(Vector2 position) : Zombie(position) {
		this->position = position;
	};
};

