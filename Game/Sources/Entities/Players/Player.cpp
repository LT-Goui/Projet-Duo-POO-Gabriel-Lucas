#include "../../../Headers/Entities/Players/Player.h"

#include <iostream>

void Player::move(Map current_map, Vector2 target) {

	if (target != Vector2{ 0,0 }) {
		this->moveInDirection(current_map, target);
	}
}

Vector2 Player::inputMovePlayer(char input)
{
	std::cout << "The entered character is : " << input << " \n";
	switch (input) {
	case 'z':
		std::cout << "z \n";
		return Vector2{ 0,-1 };
		break;
	case 'q':
		std::cout << "q \n";
		return Vector2{ -1,0 };
		break;
	case 's':
		std::cout << "s \n";
		return Vector2{ 0,1 };
		break;
	case 'd':
		std::cout << "d \n";
		return Vector2{ 1,0 };
		break;
	default:
		std::cout << "Touche non repertoriee \n";
		return Vector2{ 0,0 };
		break;
	}
}

void Player::kill()
{
	std::cout << "Player has been killed!" << std::endl;
}

Player::Player(Vector2 position) : Entity(position) {
	this->position = position;
}
