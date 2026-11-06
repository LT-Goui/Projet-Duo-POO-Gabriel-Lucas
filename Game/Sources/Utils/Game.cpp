#include "../../Headers/Utils/Game.h"
#include "../../Headers/Entities/Enemies/Zombie.h"

void Game::start()
{
	std::cout << "Hello World!\n";
	
	currentMap.size = { 10,10 };

	currentPlayer = Player{Vector2{1,1}};

	enemyGroup.push_back(Zombie{Vector2{0,0}});

	displayAll(currentMap, currentPlayer, enemyGroup);
}

void Game::loop()
{
	while (running) {
		char input = _getch();
		system("cls");
		Vector2 playerDirection = currentPlayer.inputMovePlayer(input);
		currentPlayer.move(currentMap, playerDirection);
		displayAll(currentMap,currentPlayer,enemyGroup);

		for (int i = 0; i < enemyGroup.size(); i++) {
			enemyGroup[i].move(currentMap, currentPlayer.position);
		}

		displayAll(currentMap, currentPlayer, enemyGroup);

	}
}

void Game::end()
{

}
