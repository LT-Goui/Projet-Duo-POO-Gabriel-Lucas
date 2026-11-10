#include "../../../Headers/Entities/Enemies/Zombie.h"

#include <random>

/*
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
            return Vector2{ 1,0 };

    default:
        return Vector2{ 0,0 };
    }
}

*/

bool Zombie::isPlayerInRange(Vector2 playerPosition, int range)
{
	int distanceX = std::abs(playerPosition.x - this->position.x);
	int distanceY = std::abs(playerPosition.y - this->position.y);

	return (distanceX <= range && distanceY <= range);
}



void Zombie::move(Map current_map, Vector2 playerPosition)
{
    Vector2 direction = Vector2{ 0,0 };

	if (isPlayerInRange(playerPosition, this->range)) {
		Vector2 direction = getDirectionToTarget(playerPosition);
		moveInDirection(current_map, direction);
	}
	else {

        do {
            direction = getRandomDirection();
        } while (!canMove(current_map, direction, false));
		moveInDirection(current_map, direction);
	}
}


/*
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

*/
