#pragma once
#include "Mage.h"
#include "Warrior.h"

class WarriorMage : public Warrior, public Mage
{
public:
	char sorcererName = 'S';

	WarriorMage(Vector2 position);

	//WarriorMage(Vector2 position) : Player(position), Warrior(position), Mage(position) {

	//};

private:
	int sorcererHealth = 3;
};
