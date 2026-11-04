#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include "Map.h"


class Parser
{
public:
	Map parsedMap;
	std::string mapFilePath;
	int currentLevel = 0;

    int parser(Map map) {

        std::ifstream file(fileNameBuilder(map));
        if (!file.is_open()) {
            return 404;
        }

        fileReader(file,map);

    }

private:

    std::string fileNameBuilder(Map map) {
        std::string path = "maps/level";
        if (currentLevel < 10)
            path += "0";
        path += std::to_string(currentLevel);
        path += ".txt";
    }

    int fileReader(std::ifstream& openedFile, Map map) {
        std::string line;
        int rows = 0;
        while (std::getline(openedFile, line)) {
            int columns = 0;
            for (char& c : line) {
                mapInscriber(map, c, rows, columns);
                columns += 1;
            }
            if (columns != 20) {
                return 20;
            }
            rows += 1;
        }
    }

};

void mapInscriber(Map map, char dataRead, int currentRow, int currentColumn ) {
    if (dataRead == 'H') { //H
        hero.position = position;
        hero.vie = 1;
        map[position] = 1;
    }
    else if (*map_temp == 69) { // E
        porte.position = position;
        map[position] = 1;
        *nb_exit += 1;
    }
    else if (*map_temp == 70) { // F
        porte.position = position;
        porte.fin = true;
        map[position] = 1;
        *nb_exit += 1;
    }
    else if (*map_temp == 88) {
        int id = cheptel.size() + 1;
        cheptel.push_back({ id,position,3 });
        map[position] = 1;
    }
    else {
        if (*map_temp == 46) {
            map[position] = 1;
        }
        else if (*map_temp == 126) {
            map[position] = 2;
        }
        else if (*map_temp == 65) {
            map[position] = 3;
        }
        else {
            map[position] = 1;
        }
    }
}

int parser(int* map, int level, Joueur& hero, std::vector<Ennemi>& cheptel, Exit& porte) {

    //variables diverses
    std::string line;
    int rows = 0;
    int columns;
    int nb_hero = 0;
    int nb_exit = 0;

    //reset des ennemis et hero
    cheptel.clear();
    hero.position = -1;

    if (rows != 10) {
        mvwprintw(parser, 10, 1, "Erreur map invalide\n hauteur invalide");
        wrefresh(parser);
        return 10;
    }

    if (nb_hero != 1) {
        mvwprintw(parser, 10, 1, "Erreur map invalide\n hero invalide");
        wrefresh(parser);
        return 72;
    }
    if (nb_exit != 1) {
        mvwprintw(parser, 10, 1, "Erreur map invalide\n porte invalide");
        wrefresh(parser);
        return 69; // juste au cas : où c'est la valeur int de 'E'
    }

    file.close();

    return 0;
}