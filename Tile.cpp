#include "Tile.h"

Tile::Tile(char tileName, bool traversable,bool swimmable)
{
	name = tileName;
	canWalkThrough = traversable;
	canSwimThrough = swimmable;
}
