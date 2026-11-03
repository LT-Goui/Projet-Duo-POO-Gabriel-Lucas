#pragma once
#include "../Entity.h"

class Enemy : public Entity
{
public:
	virtual void chooseDirection(Vector2 direction);
};

