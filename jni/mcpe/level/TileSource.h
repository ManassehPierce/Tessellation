#pragma once

#include "TileTickingQueue.h"
#include "mcpe/util/FullTile.h"
#include "mcpe/util/TilePos.h"
#include "mcpe/util/DataID.h"
class Tile;
class LightLayer;

class TileSource {
public:
	FullTile getTile(int, int, int);
	Tile* getTilePtr(int, int, int);
	DataID getData(int, int, int);
	TileTickingQueue* getTickQueue(TilePos const&);
	void updateNeighborsAt(const TilePos &, TileID);
	int getBrightness(const LightLayer &, const TilePos &);
	int getBrightness(const LightLayer &, int, int, int);
	int getBrightness(const TilePos &);
	int getBrightness(int, int, int);
	bool canSeeSky(int, int, int);
	bool canSeeSky(const TilePos &);
	int getGrassColor(TilePos const&);
};
