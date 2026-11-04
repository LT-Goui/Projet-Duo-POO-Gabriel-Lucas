#pragma once
#include "../Map/Map.h"
#include "../Map/Tile.h"
#include "../Entities/Enemies/Enemy.h"
#include "../Entities/Players/Player.h"

#include <iostream>

void displayAll(Map map, Player player,std::vector<Enemy> enemyGroup);

void displayMap(char* screenMap,Map Map);

void displayPlayer(char* screenPlayer,Map map, Player player);

void displayEnemies(char* screenEnemies,Map map, std::vector<Enemy> enemyGroup);

void printToScreen(char* printScreen,Map);