#pragma once
#include "Mage.h"
#include "Warrior.h"

class WarriorMage : public Warrior, public Mage
{
public:
	char name = 'S';

	WarriorMage(Vector2 position) : Player(position),Warrior(position),Mage(position) {
		this->position = position;
	};

private:
	int health = 4;
};
