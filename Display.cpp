#include "Map.h"
#include "Tile.h"
#include <iostream>

void display(Map map) {
    for (int y = 0; y < map.getHeight(); ++y) {
        std::string line = "";
        for (int x = 0; x < map.getWidth(); ++x) {
            Tile tile = map.getTileAtPos({x,y});
            line += tile.name;
        }
        std::cout << line;
        std::cout << "\n";
    }
}
