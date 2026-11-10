#include "../../Headers/Map/Map.h"

Tile Map::getTileType(int index)
{
	return TileMetadata[index];
}

Tile Map::getTileAtPos(Vector2 pos)
{
	int position = pos.x + pos.y * Map::getWidth();

	Tile tile = TileMetadata[data[position]];

	return tile;
}

Tile* Map::getTileMetadata()
{
	return TileMetadata;
}

Map::Map(std::vector<int> dataInput) {
	data = dataInput;
}

int Map::getHeight() {
	return (size.y);
}
int Map::getWidth() {
	return (size.x);
}