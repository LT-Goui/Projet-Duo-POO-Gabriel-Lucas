#pragma once
#include "Enemy.h"
class HeadlessZombie : Enemy
{
	void chooseDirection(Vector2 direction) override;
};

