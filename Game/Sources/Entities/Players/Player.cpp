#include "../../../Headers/Entities/Players/Player.h"

void Player::inputMovePlayer(char input)
{
	std::cout << "The entered character is : " << input << " \n";
	switch (input) {
	case 'z':
		std::cout << "z \n"; 
		break;
	case 'q':
		std::cout << "q \n"; 
		break;
	case 's':
		std::cout << "s \n";
		break;
	case 'd':
		std::cout << "d \n";
		break;
	default:
		std::cout << "Touche non repertoriee \n";
		break;
	}
}
