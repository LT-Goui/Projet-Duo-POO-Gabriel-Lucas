#pragma once
#include "Mage.h"
#include "Warrior.h"

class WarriorMage : public Warrior, public Mage
{
public:
	char name = 'S';

	WarriorMage(Vector2 position);;

private:
	int health = 4;
};
