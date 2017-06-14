//
// Created by axelm on 6/14/2017.
//

#include "Tiles.h"


Tiles::Tiles()
{
	data = WATER;
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
