#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateDragonEggInWorld(Tile* tile, TilePos const& pos){
	setRenderBox(2.0, 0.0, 2.0, 14.0, 3.0, 14.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.0, 3.0, 1.0, 15.0, 7.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(2.0, 7.0, 2.0, 14.0, 10.0, 14.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(3.0, 10.0, 3.0, 13.0, 12.0, 13.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(4.0, 12.0, 4.0, 12.0, 13.0, 12.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.0, 13.0, 5.0, 11.0, 14.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(6.0, 14.0, 6.0, 10.0, 15.0, 10.0);
	tessellateBlockInWorld(tile, pos);
	return true;
}
