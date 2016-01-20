#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateTLadderInWorld(Tile* tile, TilePos const& pos){
	useForcedUV = true;
	int data = getData(pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("log",0);
	setRotatedBox(data, 0.0, 0.0, 15.0, 2.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 14.0, 0.0, 15.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRotatedBox(data, 1.0, 1.0, 14.0, 15.0, 3.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 1.0, 5.0, 14.0, 15.0, 7.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 1.0, 9.0, 14.0, 15.0, 11.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 1.0, 13.0, 14.0, 15.0, 15.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return true;
}

