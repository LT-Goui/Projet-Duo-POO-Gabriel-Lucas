#pragma once
#include <vector>
#include "Utilities.h"
#include "Tile.h"


class Map
{
	Tile TileMetadata[4] = { Tile(), Tile(), Tile(), Tile()};
	std::vector<int> data = {};

	Vector2 size{0,0};

	Tile getTileAtPos(Vector2 pos);
};

