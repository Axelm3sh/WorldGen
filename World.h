//
// Created by axelm on 6/14/2017.
//
#ifndef WORLDGEN_WORLD_H
#define WORLDGEN_WORLD_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include "Tiles.h"

using namespace std;

const int DEFAULT_WIDTH = 30;
const int DEFAULT_HEIGHT = 10;

class World
{
public:
	World();
	~World();

	void DisplayWorld();
	char TileToCharacter(Tiles tile);

	void SetWorldSize(int width = DEFAULT_WIDTH, int height = DEFAULT_HEIGHT);

private:
	typedef vector<vector<Tiles>> VectorArray2D;
	VectorArray2D world;

	int worldHeight;
	int worldWidth;

};


#endif //WORLDGEN_WORLD_H
