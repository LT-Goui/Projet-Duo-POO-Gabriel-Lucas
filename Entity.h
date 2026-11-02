#pragma once

#include "Utilities.h"
#include "Map.h"

class Entity
{
	public:
		int health = 0;
		int attack = 0;
		bool can_entity_swim = false;

		Vector2 position = Vector2{ 0,0 };

		void damage(int amount);

		virtual void kill() = 0;

		virtual bool canMove(Map current_map,Vector2 direction,bool can_swim);

		virtual void moveInDirection(Map current_map, Vector2 direction);

};

