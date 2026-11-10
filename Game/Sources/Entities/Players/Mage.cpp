#include "../../../Headers/Entities/Players/Mage.h"

Mage::Mage(Vector2 position) : Player(position) {
	this->position = position;
	this->current_type = playerType::Mage;
	this->attackDirection = NewAttackDirection;
	this->name = mageName;
	this->health = mageHealth;
}
