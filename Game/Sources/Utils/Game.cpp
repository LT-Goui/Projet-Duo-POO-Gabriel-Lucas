#include "../../Headers/Utils/Game.h"

void Game::start()
{
	std::cout << "Hello World!\n";
	
	currentMap.size = { 20,10 };

	mapParser.chargementMap(currentMap);

	currentPlayer = Player{Vector2{1,1}};

	enemyGroup.push_back(Vector2{0,0});

	displayAll(currentMap, currentPlayer, enemyGroup);
}

void Game::loop()
{
	while (running) {
		char input = _getch();
		system("cls");
		currentPlayer.inputMovePlayer(input);
		displayAll(currentMap,currentPlayer,enemyGroup);
	}
}

void Game::end()
{

}
