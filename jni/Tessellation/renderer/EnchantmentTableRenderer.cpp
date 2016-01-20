#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateEnchantTableInWorld(Tile* tile, TilePos const& pos){
	//base
	setRenderBox(0.0, 0.0, 0.0, 16.0, 12.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = true;
	forcedUV = tile->getTextureUVCoordinateSet("diamond_block", 0);
	setRenderBox(-0.5, 8.0, -0.5, 4.0, 12.5, 4.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(12.0, 8.0, -0.5, 16.5, 12.5, 4.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(-0.5, 8.0, 12.0, 4.0, 12.5, 16.5);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(12.0, 8.0, 12.0, 16.5, 12.5, 16.5);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return true;
}
