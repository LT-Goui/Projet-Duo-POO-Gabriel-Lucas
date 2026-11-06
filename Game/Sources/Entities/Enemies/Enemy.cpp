#include "../../../Headers/Entities/Enemies/Enemy.h"

Vector2 Enemy::getDirectionToTarget(Vector2 target) {
    Vector2 offset = this->position - target;

    if (offset.y < 0) {
        return Vector2{ 0,-1 };
    }
    else if (offset.x < 0) {
        return Vector2{ -1,0 };
    }
    else if (offset.y > 0) {
        return Vector2{ 0,1 };

    }
    else if (offset.x > 0) {
        return Vector2{ 1,0 };
    }

    return Vector2{ 0,0 };
}

void Enemy::move(Map current_map, Vector2 target)
{
}
