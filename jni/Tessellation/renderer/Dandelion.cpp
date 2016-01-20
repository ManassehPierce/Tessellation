#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateDandelionInWorld(Tile* tile, TilePos const& pos){
	useForcedUV = true;
	
	//yellow part z
	forcedUV = tile->getTextureUVCoordinateSet("wool", 4); setRenderBounds(0.5625,0.4375,0.46875,0.6875,0.5,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.3125,0.4375,0.46875,0.5,0.5,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.375,0.375,0.46875,0.625,0.4375,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.3125,0.3125,0.46875,0.6875,0.375,0.53125);
	tessellateBlockInWorld(tile, pos);
	
	//green part z
	forcedUV = tile->getTextureUVCoordinateSet("wool", 5);
	setRenderBounds(0.4375,0.25,0.46875,0.5625,0.3125,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.3125,0.1875,0.46875,0.5625,0.25,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.375,0.125,0.46875,0.6875,0.1875,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.4375,0.0625,0.46875,0.625,0.125,0.53125);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.4375,0,0.46875,0.5625,0.0625 ,0.53125);
	tessellateBlockInWorld(tile, pos);
	
	//yellow part x
	forcedUV = tile->getTextureUVCoordinateSet("wool", 4); setRenderBounds(0.46875,0.4375,0.5625,0.53125,0.5,0.6875);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.4375,0.3125,0.53125,0.5,0.5);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.375,0.375,0.53125,0.4375,0.625);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.3125,0.3125,0.53125,0.375,0.6875);
	tessellateBlockInWorld(tile, pos);
	
	//green part x
	forcedUV = tile->getTextureUVCoordinateSet("wool", 5);
	setRenderBounds(0.46875,0.25,0.4375,0.53125,0.3125,0.5625);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.1875,0.3125,0.53125,0.25,0.5625);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.125,0.375,0.53125,0.1875,0.6875);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0.0625,0.4375,0.53125,0.125,0.625);
	tessellateBlockInWorld(tile, pos);
	setRenderBounds(0.46875,0,0.4375,0.53125,0.0625 ,0.5625);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return true;
}

