#include "Map.h"

Tile Map::getTileType(int index)
{
	return TileMetadata[index];
}

Tile Map::getTileAtPos(Vector2 pos)
{
	Tile tile('.',true);

	int position = pos.x + pos.y * Map::getWidth();

	tile = TileMetadata[data[position]];

	return tile;
}

int Map::getHeight() {
	return (size.y);
}
int Map::getWidth() {
	return (size.x);
}