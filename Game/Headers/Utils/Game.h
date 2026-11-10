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

    Map currentMap =
    {{
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0
     } };

    Player currentPlayer{Vector2{1,1}};
    std::vector<Enemy*> enemyGroup = {};

    void changeLevel();

private:
    Game() {};
    bool running = true;
    int currentLevel = 0;
    //Maps hard-coded
    Map mapList[3] = {
   Map(std::vector<int> {
   0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,0,1,0,0,
   0,0,0,1,1,0,1,0,0,0,
   2,0,0,0,1,1,1,0,2,2,
   0,2,2,0,0,1,1,1,1,0,
   2,2,2,0,0,0,1,1,0,0,
   2,2,0,0,0,0,0,1,1,0,
   3,0,0,0,0,0,0,0,1,1,
   2,2,2,2,0,0,0,0,1,0,
   2,2,2,0,0,0,0,1,0,0
   }),
   Map(std::vector<int> {
   0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,0,1,0,0,
   0,0,0,1,1,0,1,0,0,0,
   2,0,0,0,1,1,1,0,2,2,
   0,2,2,0,0,1,1,1,1,0,
   2,2,2,0,0,0,1,1,0,0,
   2,2,0,0,0,0,0,1,1,0,
   3,0,0,0,0,0,0,0,1,1,
   2,2,2,2,0,0,0,0,1,0,
   2,2,2,0,0,0,0,1,0,0
   }),
   Map(std::vector<int> {
   0,0,0,0,0,0,0,0,0,0,
   0,0,0,0,1,0,0,1,0,0,
   0,0,0,1,1,0,1,0,0,0,
   2,0,0,0,1,1,1,0,2,2,
   0,2,2,0,0,1,1,1,1,0,
   2,2,2,0,0,0,1,1,0,0,
   2,2,0,0,0,0,0,1,1,0,
   3,0,0,0,0,0,0,0,1,1,
   2,2,2,2,0,0,0,0,1,0,
   2,2,2,0,0,0,0,1,0,0
   })
    };

    bool isEnemyAtPos(Vector2 pos);

    Enemy* getEnemyAtPos(Vector2 pos);

    void playerMovement();

    void gameOver();
    void victory();
    void chooseCharacter();
	
};
