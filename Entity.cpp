#include "Entity.h"
#include "Map.h"

void Entity::damage(int amount)
{
	int* entity_health = &this->health;

	if (*entity_health <= 0) {
		*entity_health = 0;

		this->kill();
	}

}

bool Entity::canMove(Map current_map, Vector2 direction)
{
	Vector2 target_position = this->position + direction;
	return current_map.getTileAtPos(target_position).canGoThrough;

}
