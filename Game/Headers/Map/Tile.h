#pragma once
class Tile
{
public :

	char name='.';
	bool canWalkThrough = true;
	bool canSwimThrough = false;

	enum TYPES {
		GROUND = 0,
		WATER,
		MOUNTAIN,
		EXIT,
		COUNT

	};

	Tile(char name, bool canWalkThrough, bool canSwimThrough);
};

