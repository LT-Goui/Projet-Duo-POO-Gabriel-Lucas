#pragma once

#include "Utilities.h"

class Entity
{
	public:
		int health = 0;
		int attack = 0;

		Vector2 position = Vector2{ 0,0 };

		void damage(int amount);

		virtual void kill() = 0;


};

