#pragma once
#include <iostream>
#include <conio.h>
#include "../Map/Map.h"
#include "../Utils/Utilities.h"
#include "../Utils/Display.h"
#include "../Entities/Players/Mage.h"
#include "../Entities/Players/Warrior.h"
#include "../Entities/Players/WarriorMage.h"
#include "../../Headers/Entities/Enemies/Zombie.h"

//Le Singleton
class Game
{
public:
    static Game& getInstance() {
        static Game obj;
        return obj;
    }

    void start();
    void loop();
    void end();

    Player currentPlayer{Vector2{1,1}};
    Map currentMap;
    std::vector<Enemy*> enemyGroup = {};

private:
    Game() {}
    bool running = true;

    bool isEnemyAtPos(Vector2 pos);

    Enemy* getEnemyAtPos(Vector2 pos);

    void playerMovement();

    void gameOver();
    void victory();
    void chooseCharacter();
	
};
