#pragma once

#include "../Utils/Utilities.h"
#include "../Map/Map.h"

class Entity
{
public:
	Vector2 position = Vector2{ 0,0 };

	void damage(int amount);

	virtual void kill() = 0;

	virtual void move(Map current_map, Vector2 target) = 0;

	virtual bool canMove(Map current_map,Vector2 direction,bool can_swim);

	virtual void moveInDirection(Map current_map, Vector2 direction);

	Entity(Vector2 position);

	char getName();

protected:
	char name = '$';

	int health = 0;
	int attack = 0;
	bool can_entity_swim = false;



};

