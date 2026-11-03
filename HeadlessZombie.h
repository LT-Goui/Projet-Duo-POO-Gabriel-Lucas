#pragma once
#include "Enemy.h"
class HeadlessZombie : public Enemy
{
	void chooseDirection(Vector2 direction) override;
};

