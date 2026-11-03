#include "../../Headers/Entities/Entity.h"
#include "../../Headers/Map/Map.h"

#include <iostream>

void Entity::damage(int amount)
{
	int* entity_health = &this->health;

	if (*entity_health <= 0) {
		*entity_health = 0;

		//this->kill();
	}

}

bool Entity::canMove(Map current_map, Vector2 direction,bool can_swim)
{
	Vector2 target_position = this->position + direction;
	if (this->can_entity_swim && current_map.getTileAtPos(target_position).canSwimThrough) {
		return true;
	}
	return current_map.getTileAtPos(target_position).canWalkThrough;

}

void Entity::moveInDirection(Map current_map, Vector2 direction)
{
	if (this->canMove(current_map, direction, this->can_entity_swim)) {
		this->position = this->position + direction;
	}

}
