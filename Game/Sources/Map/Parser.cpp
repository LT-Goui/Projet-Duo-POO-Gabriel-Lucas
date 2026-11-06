#include "../../Headers/Map/Parser.h"

int Parser::chargementMap(Map& map) {

    currentLevel += 1;

    std::ifstream file(fileNameBuilder());
    if (!file.is_open()) {
        errorCode = 404;
    }

    fileReader(file);

    map = parsedMap;

    file.close();

    return 0;
}

std::string Parser::fileNameBuilder() {
    Parser::mapFilePath = "C:/Users/lgoui/Desktop/Projet Duo/Projet Duo POO Gabriel Lucas/Game/Maps/level01.txt";
    if (currentLevel < 10)
        mapFilePath += "0";
    mapFilePath += std::to_string(currentLevel);
    mapFilePath += ".txt";
    return mapFilePath;
}

void Parser::fileReader(std::ifstream& openedFile) {

    int& rows = parsedMap.size.y;
    int& columns = parsedMap.size.x;

    std::string line;
    rows = 0;
    while (std::getline(openedFile, line)) {
        columns = 0;
        for (char& c : line) {
            mapInscriber(c);
            columns += 1;
        }
        rows += 1;
    }
}

void Parser::mapInscriber(char dataRead) {
    std::cout << "parser" << dataRead << "\n";
    switch (dataRead)
    {
    case '.':
        parsedMap.data.push_back(0);
        break;
    case '~':
        parsedMap.data.push_back(1);
        break;
    case 'A':
        parsedMap.data.push_back(2);
        break;
    case 'E':
        parsedMap.data.push_back(3);
        break;

    default:
        parsedMap.data.push_back(0);
        break;
    }
}
