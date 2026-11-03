#include <iostream>
#include <conio.h>
#include "Headers/Utils/Game.h"

int main()
{
	Game& game = Game::getInstance();

	game.start();
	game.loop();
	game.end();
}