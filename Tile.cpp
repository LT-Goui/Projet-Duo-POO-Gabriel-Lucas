#include "Tile.h"

Tile::Tile(char tileName, bool traversable)
{
	name = tileName;
	canGoThrough = traversable;
}
