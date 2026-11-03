#pragma once
#include "../Entity.h"

class Enemy : Entity
{
public:
	virtual void chooseDirection(Vector2 direction);
};

