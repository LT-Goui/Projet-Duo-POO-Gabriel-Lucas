#pragma once
#include "Mage.h"
#include "Warrior.h"

class WarriorMage : public Warrior, public Mage
{
private:
	int health = 4;
};
