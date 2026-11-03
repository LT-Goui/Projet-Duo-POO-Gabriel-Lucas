#pragma once
#include <vector>
#include "Utilities.h"
#include "Tile.h"


class Map
{
public:
	Tile TileMetadata[4] = { Tile('.',true), Tile('~',false), Tile('A',false), Tile('E',true)};

	std::vector<int> data = {};

	Vector2 size{ 0,0 };

	int getHeight();
	int getWidth();

	Tile getTileType(int index);
	Tile getTileAtPos(Vector2 pos);

};