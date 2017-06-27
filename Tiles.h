//
// Created by axelm on 6/14/2017.
//

#ifndef WORLDGEN_TILES_H
#define WORLDGEN_TILES_H

enum TileType
{
	WATER,
	GRASS,
	PATH,
	MOUNTAIN,
	FOREST,
	EMPTY
};

class Tiles
{

public:
	Tiles();
	~Tiles();

	TileType getData() const;

	void setData(TileType data);

private:
	TileType data;

};


#endif //WORLDGEN_TILES_H
