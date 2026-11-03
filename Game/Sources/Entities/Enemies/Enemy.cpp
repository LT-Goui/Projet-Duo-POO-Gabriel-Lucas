#include "../../../Headers/Entities/Enemies/Enemy.h"

Vector2 Enemy::chooseDirection(Vector2 target)
{
	Vector2 offset = target - this->position;

	if (abs(offset.x) > abs(offset.y)) {

		if (offset.x > 0) {
			return Vector2{ 1, 0 };
		}
		else if (offset.x < 0) {

			return Vector2{ -1, 0 };
		}
	}
	else {
		if (offset.y > 0) {

			return Vector2{ 0, 1 };
		}
		else if (offset.y < 0) {

			return Vector2{ 0, -1 };
		}
	}
}
