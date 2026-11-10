#pragma once
#include <vector>
#include "../Utils/Utilities.h"
#include "Tile.h"


class Map
{

public:
	std::vector<int> data = {
	};

	Map(std::vector<int> dataInput);

	Vector2 size{ 10,10 };

	int getHeight();
	int getWidth();

	Tile getTileType(int index);
	Tile getTileAtPos(Vector2 pos);

private:
	Tile TileMetadata[4] = {
		Tile('.',true,false),
		Tile('~',false,true),
		Tile('A',false,false),
		Tile('E',true,true)
	};
};