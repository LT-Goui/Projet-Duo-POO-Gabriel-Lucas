#pragma once
#include "../Entity.h"

class Enemy : public Entity
{
public:
	virtual Vector2 chooseDirection(Vector2 target);
	void kill() override {
		
	 }
};

