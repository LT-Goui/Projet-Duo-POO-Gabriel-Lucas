#include "Entity.h"

void Entity::damage(int amount)
{
	int* entity_health = &this->health;

	if (*entity_health <= 0) {
		*entity_health = 0;

		this->kill();
	}

}
