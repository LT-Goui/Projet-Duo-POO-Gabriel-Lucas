#include <iostream>
#include "Map.h"
#include "Utilities.h"

int main()
{
    std::cout << "Hello World!\n";
    
    Map map;

    map.size = { 5,5 };

    for (int y = 0; y <map.getHeight() ; ++y) {
        for (int x = 0; x < map.getWidth(); ++x) {
            map.data.push_back(0);
        }
    }

    int i;
    std::cin >> i;
}