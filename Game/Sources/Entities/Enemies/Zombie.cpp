#include "../../../Headers/Entities/Enemies/Zombie.h"

#include <random>

Vector2 Zombie::getRandomDirection()
{
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<int> dis(0, 3);

    int random_direction = dis(gen);

    switch (random_direction)
    {
        case 0:
            return Vector2{ 0,-1 };
        case 1:
            return Vector2{ -1,0 };
        case 2:
            return Vector2{ 0,1 };
        case 3:
            return Vector2{ 0,1 };

    default:
        return Vector2{ 0,0 };
    }
}

Vector2 Zombie::getDirectionToTarget(Vector2 target) {
    Vector2 offset = this->position - target;

    if () {
        return Vector2{ 0,-1 };
    }
    else if (random_direction == 1) {
        return Vector2{ -1,0 };
    }
    else if (random_direction == 2) {
        return Vector2{ 0,1 };

    }
    else if (random_direction == 3) {
        return Vector2{ 0,1 };
    }
}

void WanderingState::enter()
{
}

void WanderingState::update()
{

}

void WanderingState::exit()
{
}

void Chasing::enter()
{
}

void Chasing::update()
{
}

void Chasing::exit()
{
}


