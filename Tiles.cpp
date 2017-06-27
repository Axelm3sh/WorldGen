//
// Created by axelm on 6/14/2017.
//

#include <cstdlib>
#include "Tiles.h"


Tiles::Tiles()
{
	//Quick Test
	int switchCase = rand() % 5;

	switch(switchCase)
	{
		case 0:
			data = WATER;
			break;
		case 1:
			data = GRASS;
			break;
		case 2:
			data = PATH;
			break;
		case 3:
			data = MOUNTAIN;
			break;
		case 4:
			data = FOREST;
			break;
		default: data = EMPTY;
	}
	//data = WATER;
}

Tiles::~Tiles()
{

}

TileType Tiles::getData() const
{
	return data;
}

void Tiles::setData(TileType data)
{
	Tiles::data = data;
}
