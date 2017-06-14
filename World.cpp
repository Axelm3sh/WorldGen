//
// Created by axelm on 6/14/2017.
//

#include "World.h"

World::World()
{
	worldHeight = DEFAULT_HEIGHT;
	worldWidth = DEFAULT_WIDTH;
}

World::~World()
{

}

void World::DisplayWorld() const
{
	vector<string> displayStack;

	for (int i = 0; i < worldWidth; ++i)
	{
		for (int j = 0; j < worldHeight; ++j)
		{

		}
	}

}

void World::SetWorldSize(int width, int height)
{
	worldHeight = height;
	worldWidth = width;

	world.resize(width);
	for (int i = 0; i < width; ++i)
	{
		world.at(i).resize(height);
	}
}

char World::TileToCharacter(Tiles tile)
{
	TileType tileData = tile.getData();

	switch(tileData)
	{
		case WATER:
			return 'S';
		case GRASS:
			return ',';
		case PATH:
			return '#';
		case MOUNTAIN:
			return '^';
		case FOREST:
			return 'Y';
	}

}
