#pragma once
#include <iostream>
#include <conio.h>
#include "../Map/Map.h"
#include "../Utils/Utilities.h"
#include "../Utils/Display.h"
#include "../Entities/Players/Player.h"
#include "../Map/Parser.h"

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

    Map currentMap;
    Parser mapParser;
    Player currentPlayer{Vector2{1,1}};
    std::vector<Enemy> enemyGroup = {};

private:
    Game() {}
    bool running = true;
};
