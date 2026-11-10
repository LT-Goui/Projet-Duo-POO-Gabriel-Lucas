#include "../../Headers/Utils/Game.h"
#include "../../Headers/Entities/Enemies/Zombie.h"
#include "../../Headers/Entities/Enemies/HeadlessZombie.h"
#include "../../Headers/Entities/Enemies/ZombieSwimmer.h"


void Game::start()
{
	std::cout << "Hello World!\n";

	currentMap.size = { 10,10 };

	chooseCharacter();

	enemyGroup.push_back(new HeadlessZombie{Vector2{0,0}});
	enemyGroup.push_back(new ZombieSwimmer{Vector2{9,6}});

	changeLevel();

	displayAll(currentMap, currentPlayer, enemyGroup);
}

bool Game::isEnemyAtPos(Vector2 pos) {
	for (int i = 0; i < enemyGroup.size(); i++) {
		if (enemyGroup[i]->position.x == pos.x && enemyGroup[i]->position.y == pos.y) {
			return true;
		}
	}
	return false;
}

Enemy* Game::getEnemyAtPos(Vector2 pos) {
	for (int i = 0; i < enemyGroup.size(); i++) {
		if (enemyGroup[i]->position.x == pos.x && enemyGroup[i]->position.y == pos.y) {
			return enemyGroup[i];
		}
	}
	return nullptr;
}

void Game::playerMovement()
{
	char input = _getch();
	system("cls");
	Vector2 playerDirection = currentPlayer.inputMovePlayer(input);
	currentPlayer.move(currentMap, playerDirection);
}

void Game::loop()
{
	while (running) {
		displayAll(currentMap, currentPlayer, enemyGroup);

		playerMovement();

		displayAll(currentMap,currentPlayer,enemyGroup);

		for (int i = 0; i < enemyGroup.size(); i++) {
			enemyGroup[i]->move(currentMap, currentPlayer.position);
		}
		
		if (isEnemyAtPos(currentPlayer.position)) {
			currentPlayer.damage(1);

			if (currentPlayer.getHealth() <= 0) {
				gameOver();
			}
		}
		else if (currentMap.getTileAtPos(currentPlayer.position).name == 'E') {
			victory();
		}

	}
}

void Game::end()
{
	for (int i =0; i < enemyGroup.size(); i++) {
		delete enemyGroup[i];
	}
}

void Game::changeLevel()
{
	currentMap = mapList[currentLevel];
	currentLevel += 1;
	// à rajouter, changement d'ennemis et player

}

void Game::gameOver()
{
	running = false;
	system("cls");
	std::cout << "Game Over!" << std::endl;
	end();
}

void Game::victory()
{
	running = false;
	system("cls");
	std::cout << "You win!" << std::endl;
	end();
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

void Game::attackEnemyInRange()
{

}
