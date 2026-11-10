#include "../../Headers/Utils/Game.h"


void Game::start()
{
	std::cout << "Hello World!\n";
	
	currentMap.size = { 10,10 };

	chooseCharacter();

	enemyGroup.push_back(new Zombie{Vector2{0,0}});
	enemyGroup.push_back(new Zombie{Vector2{5,7}});

	displayAll(currentMap, currentPlayer, enemyGroup);
}

void Game::loop()
{
	while (running) {
		displayAll(currentMap, currentPlayer, enemyGroup);
		char input = _getch();
		system("cls");
		Vector2 playerDirection = currentPlayer.inputMovePlayer(input);
		currentPlayer.move(currentMap, playerDirection);
		displayAll(currentMap,currentPlayer,enemyGroup);

		for (int i = 0; i < enemyGroup.size(); i++) {
			enemyGroup[i]->move(currentMap, currentPlayer.position);
		}

		displayAll(currentMap, currentPlayer, enemyGroup);

	}
}

void Game::end()
{

}

void Game::chooseCharacter() {
	bool choosingCharacter = true;
	while (choosingCharacter) {
		std::cout << "Choisissez votre personnage : 1 Mage, 2 Warrior, 3 WarriorMage";
		char choice = _getch();
		switch (choice)
		{
		case '1':
			currentPlayer = Mage{ Vector2{1,1} };
			choosingCharacter = false;
			break;
		case '2':
			currentPlayer = Warrior{ Vector2{1,1} };
			choosingCharacter = false;
			break;
		case '3':
			currentPlayer = WarriorMage{ Vector2{1,1} };
			choosingCharacter = false;
			break;
		default:
			std::cout << "Erreur veuillez recommencer";
			break;
		}
	}
}
