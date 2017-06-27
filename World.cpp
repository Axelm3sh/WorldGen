//
// Created by axelm on 6/14/2017.
//

#include "World.h"

World::World()
{
	SetWorldSize();
}

World::~World()
{

}

void World::DisplayWorld()
{
	vector<string> displayStack;
	string temp;

	for (int i = 0; i < worldHeight; ++i)
	{
		temp.clear();
		for (int j = 0; j < worldWidth; ++j)
		{
			temp = temp + TileToCharacter(world.at(i).at(j));
		}
		displayStack.push_back(temp);
	}

	for (int k = 0; k < displayStack.size(); ++k)
	{
		cout << displayStack.at(k) << "\n";
	}

}

void World::SetWorldSize(int width, int height)
{
	worldHeight = height;
	worldWidth = width;

	world.resize(height);
	for (int i = 0; i < height; ++i)
	{
		world.at(i).resize(width);
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
		case EMPTY:
			return '~';
	}

}