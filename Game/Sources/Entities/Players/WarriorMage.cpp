#include "../../../Headers/Entities/Players/WarriorMage.h"

WarriorMage::WarriorMage(Vector2 position) : Player(position), Warrior(position), Mage(position) {
	this->position = position;
	this->current_type = playerType::WarriorMage;
	this->name = sorcererName;
	this->health = sorcererHealth;
}
