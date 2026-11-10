#include "../../../Headers/Entities/Enemies/HeadlessZombie.h"

#include <random>

Vector2 HeadlessZombie::getDirectionToTarget(Vector2 target)
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dis(0, 3);

    int random_direction = dis(gen);

    if (random_direction == 0) {
        return Vector2{ 0,-1 };
    }
    else if (random_direction == 1) {
        return Vector2{ -1,0 };
    }
    else if (random_direction == 2) {
        return Vector2{ 0,1 };
            }
    else {
        return Vector2{ 0,1 };
    }
}

void HeadlessZombie::move(Map current_map, Vector2 playerPosition)
{
    Vector2 direction = Vector2{ 0,0 };
    do {
        direction = getRandomDirection();
    } while (!canMove(current_map, direction, false));
    moveInDirection(current_map, direction);
}
