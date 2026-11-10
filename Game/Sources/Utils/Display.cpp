#include "../../Headers/Utils/Display.h"
#include <iostream>

void displayAll(Map map, Player player, std::vector<Enemy*> enemyGroup) {

    char* screen = new char[map.getHeight() * map.getWidth()];

    displayMap(screen,map);
    displayEnemies(screen,map,enemyGroup);
    displayPlayer(screen,map,player);

    system("cls");
    printToScreen(screen, map,player);

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

void displayEnemies(char* screenEnemies, Map map, std::vector<Enemy*> enemyGroup)
{
    for (int s = 0; s < enemyGroup.size(); s++) {
        screenEnemies[enemyGroup[s]->position.x + (enemyGroup[s]->position.y * map.getHeight())] = enemyGroup[s]->getName();
    }
}

void printMenu(Player player)
{
    std::cout <<" Menu : \n";
    std::cout <<" Z     : Avancer vers le haut \n";
    std::cout <<" Q     : Avancer vers la gauche \n";
    std::cout <<" S     : Avancer vers la droite \n";
    std::cout <<" D     : Avancer vers le bas \n";
    std::cout <<" SPACE : Lancer un sort \n";
}


void printToScreen(char* printScreen, Map map, Player player)
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
    printMenu(player);
}
