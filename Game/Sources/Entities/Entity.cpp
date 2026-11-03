#include "../../Headers/Entities/Entity.h"
#include "../../Headers/Map/Map.h"

void Entity::damage(int amount)
{
	int* entity_health = &this->health;

	if (*entity_health <= 0) {
		*entity_health = 0;

		this->kill();
	}

}

bool Entity::canMove(Map current_map, Vector2 direction,bool can_swim)
{
	Vector2 target_position = this->position + direction;
	return current_map.getTileAtPos(target_position).canGoThrough;

}

void Entity::moveInDirection(Vector2 direction)
{
}

void Entity::moveInDirection(Map current_map, Vector2 direction)
{
	if (this->canMove(current_map, direction)) {
		this->position = this->position + direction;
	}

}
