#pragma once

struct Tile {
	TILE type;         // The type of tile this is.

	int columnIndex;   // The column index of the tile.

	int rowIndex;      // The row index of the tile.

	sf::Sprite sprite; // The tile sprite.

	int H;             // Heuristic / movement cost to goal.

	int G;             // Movement cost. (Total of entire path)

	int F;             // Estimated cost for full path. (G + H)

	Tile* parentNode;  // Node to reach this node.
};
