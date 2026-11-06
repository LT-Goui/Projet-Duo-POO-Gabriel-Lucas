#include "../../Headers/Utils/Display.h"
#include <iostream>

void displayAll(Map map, Player player, std::vector<Enemy> enemyGroup) {

    char* screen = new char[map.getHeight() * map.getWidth()];

    displayMap(screen,map);
    displayEnemies(screen,map,enemyGroup);
    displayPlayer(screen,map,player);

    system("cls");
    printToScreen(screen, map);

    delete[] screen;
}

void displayMap(char* screenMap,Map map)
{
    for (int y = 0; y < map.getHeight(); ++y) {
        for (int x = 0; x < map.getWidth(); ++x) {
            Tile tile = map.getTileAtPos({ x,y });
            screenMap[x+(y*map.getHeight())] = tile.name;
        }
    }
}

void displayPlayer(char* screenPlayer, Map map, Player player)
{
    screenPlayer[player.position.x + (player.position.y * map.getHeight())] = player.name;
}

void displayEnemies(char* screenEnemies, Map map, std::vector<Enemy> enemyGroup)
{
    for (int s = 0; s < enemyGroup.size(); s++) {
        screenEnemies[enemyGroup[s].position.x + (enemyGroup[s].position.y * map.getHeight())] = enemyGroup[s].name;
    }
}

void printToScreen(char* printScreen, Map map)
{
    for (int y = 0; y < map.getHeight(); ++y) {
        std::string line = "";
        for (int x = 0; x < map.getWidth(); ++x) {
            line += " ";
            line += printScreen[x + (y * map.getHeight())];
            line += " ";
        }
        std::cout << line;
        std::cout << "\n" << "\n";
    }
}
