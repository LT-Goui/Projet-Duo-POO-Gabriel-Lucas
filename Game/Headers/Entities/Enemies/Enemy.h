#pragma once
#include "../Entity.h"

class Enemy : public Entity
{
public:
	using Entity::Entity;
	virtual Vector2 chooseDirection(Vector2 target);
	void kill() override {
		
	 }
};

