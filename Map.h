#pragma once
#include "Headers.h"

struct MapTile {
	int tileNumber;
	int spawnable;

};

class Map {

public:


private:
	int m_numTilesX;
	int m_numTilesY;

	int** m_grid;
};

