#pragma once

#include <string>
#include <fstream>
#include <iostream>
#include "Map.h"
#include "../../Maps/level01.txt"

class Parser
{
public:
    Map parsedMap;
    std::string mapFilePath = "";
    int currentLevel = 0;
    int numberOfHero = 0;
    int errorCode = 0;

    int chargementMap(Map& map);

private:

    std::string fileNameBuilder();

    void fileReader(std::ifstream& openedFile);

    void mapInscriber(char dataRead);

};