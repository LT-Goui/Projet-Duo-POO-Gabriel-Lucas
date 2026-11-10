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

	if (direction == Vector2{ 0,0 }) {
		return false;
	}

	if (target_position.x < 0 || target_position.y < 0 ) {
		return false;
	}
	else if (target_position.x >= current_map.getWidth() || target_position.y >= current_map.getHeight())
	{
		return false;
	}

	if (this->can_entity_swim && current_map.getTileAtPos(target_position).canSwimThrough) {
		return true;
	}

	return current_map.getTileAtPos(target_position).canWalkThrough;

}

void Entity::moveInDirection(Map current_map, Vector2 direction)
{
	if (this->canMove(current_map, direction,this->can_entity_swim)) {
		this->position = this->position + direction;
	}

}

int Entity::getHealth()
{
	return this->health;
}

Entity::Entity(Vector2 position)
{
	this->position = position;
}

char Entity::getName()
{
	return this->name;
}
