#include "../../../Headers/Entities/Enemies/ZombieSwimmer.h"

void ZombieSwimmer::moveInDirection(Map current_map, Vector2 direction)
{
	if (this->canMove(current_map, direction, this->can_entity_swim)) {
		this->position = this->position + direction;
	}

	if (current_map.getTileAtPos(this->position).canSwimThrough) {
		this->breathing();
	}
	else {
		this->takeBreath();
	}

}
