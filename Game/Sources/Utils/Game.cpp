#include "../../Headers/Utils/Game.h"

void Game::start()
{
	std::cout << "Hello World!\n";
	
	currentMap.size = { 5,5 };

	currentPlayer = Player{Vector2{1,1}};

	for (int y = 0; y < currentMap.getHeight(); ++y) {
		for (int x = 0; x < currentMap.getWidth(); ++x) {
			currentMap.data.push_back(0);
		}
	}
}

void Game::loop()
{
	while (running) {
		char input = _getch();
		currentPlayer.inputMovePlayer(input);
		display(currentMap);
	}
}

void Game::end()
{

}
