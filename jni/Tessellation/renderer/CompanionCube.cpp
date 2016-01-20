#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateCompanionCubeInWorld(Tile* tile, TilePos const& pos){
	useForcedUV = true;
	
	//block
	forcedUV = tile->getTextureUVCoordinateSet("stained_clay", 9);
	setRenderBox(0.0, 0.0, 0.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	//soMidBot
	forcedUV = tile->getTextureUVCoordinateSet("quartz_block", 0);
	setRenderBox(6.0, -1.0, -1.0, 10.0, 2.0, 2.0);
	tessellateBlockInWorld(tile, pos);
	
	//soMidTop
	setRenderBox(6.0, 14.0, -1.0, 10.0, 17.0, 2.0);
	tessellateBlockInWorld(tile, pos);
	
	//seMid
	setRenderBox(-1.0, 6.0, -1.0, 2.0, 10.0, 2.0);
	tessellateBlockInWorld(tile, pos);
	
	//swMid
	setRenderBox(14.0, 6.0, -1.0, 17.0, 10.0, 2.0);
	tessellateBlockInWorld(tile, pos);
	
	//noMidBot
	forcedUV = tile->getTextureUVCoordinateSet("quartz_block", 0);
	setRenderBox(6.0, -1.0, 14.0, 10.0, 2.0, 17.0);
	tessellateBlockInWorld(tile, pos);
	
	//noMidTop
	setRenderBox(6.0, 14.0, 14.0, 10.0, 17.0, 17.0);
	tessellateBlockInWorld(tile, pos);
	
	//neMid
	setRenderBox(-1.0, 6.0, 14.0, 2.0, 10.0, 17.0);
	tessellateBlockInWorld(tile, pos);
	
	//nwMid
	setRenderBox(14.0, 6.0, 14.0, 17.0, 10.0, 17.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return true;
}
