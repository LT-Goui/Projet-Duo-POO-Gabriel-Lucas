#include <iostream>
#include "Map.h"
#include "Utilities.h"
#include "Display.h"

int main()
{
    std::cout << "Hello World!\n";

	//test affichage map
    Map map;
    map.size = { 5,5 };

    for (int y = 0; y < map.getHeight(); ++y) {
        for (int x = 0; x < map.getWidth(); ++x) {
            map.data.push_back(0);
        }
    }

    display(map);

    int i;
    std::cin >> i;
}