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

void ZombieSwimmer::move(Map current_map, Vector2 playerPosition)
{
	Vector2 direction = Vector2{ 0,0 };

	if (isPlayerInRange(playerPosition, this->range)) {
		direction = getDirectionToTarget(playerPosition);
	}
	else {
		do {
			direction = getRandomDirection();
		} while (!canMove(current_map, direction, true));
	}

	ZombieSwimmer::moveInDirection(current_map, direction);

}

