#pragma once
class Tile
{
public :

	char name='.';
	bool canGoThrough = true;

	enum TYPES {
		GROUND = 0,
		WATER,
		MOUNTAIN,
		EXIT,
		COUNT

	};

	Tile(char name, bool canGoThrough);
};

