#pragma once
#include "Enemy.h"

#include <random>

class HeadlessZombie : public Enemy
{
	Vector2 chooseDirection(Vector2 target) override;
};

