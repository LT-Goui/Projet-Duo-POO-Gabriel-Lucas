#include "../../../Headers/Entities/Players/Warrior.h"

Warrior::Warrior(Vector2 position) : Player(position) {
	this->position = position;
	this->current_type = playerType::Warrior;
}
