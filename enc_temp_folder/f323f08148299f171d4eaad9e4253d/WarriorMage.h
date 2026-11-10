#pragma once
#include "Mage.h"
#include "Warrior.h"

class WarriorMage : public Warrior, public Mage
{
public:
	char sorcererName = 'S';

	WarriorMage(Vector2 position) : Player(position),Warrior(position),Mage(position) {
		this->position = position;
		this->name = sorcererName;
		this->health = sorcererHealth;
	};

private:
	int sorcererHealth = 4;
};
