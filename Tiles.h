#pragma once
class Tiles
{
public :

	char name='.';
	bool canGoThrough = true;

	enum TYPES {
		GROUND = 0,
		WATER,
		MOUNTAIN,
		COUNT

	};

	TYPES tileType = GROUND;

	//Tiles allTiles[3] = {};


	Tiles(char name, bool canGoThrough);
};

