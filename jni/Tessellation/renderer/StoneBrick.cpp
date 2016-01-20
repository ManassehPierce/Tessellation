#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateStoneBrickInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	
	tess->color( getLightColor(pos) );
	
	setRenderBounds(0.0, 0.0, 0.0, 1.0, 1.0, 1.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = true;
	forcedUV = tile->getTexture(0, data);
	switch (data) {
		case 3: {} break;
		default: {
			if( getTile(x, y + 1, z) == NULL || Tile::solid[getId(x, y + 1, z)] == false ) {
				setRenderBox(0.00, 16.00, 0.00, 15.00, 16.40, 7.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(0.00, 16.00, 8.00, 7.00, 16.40, 15.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(8.00, 16.00, 8.00, 16.00, 16.40, 15.00);
				tessellateBlockInWorld(tile, pos);
			}
			if( getTile(x, y, z - 1) == NULL || Tile::solid[getId(x, y, z - 1)] == false ) {
				setRenderBox(1.00, 9.00, -0.40, 16.00, 16.00, 0.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(9.00, 1.00, -0.40, 16.00, 8.00, 0.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(0.00, 1.00, -0.40, 8.00, 8.00, 0.00);
				tessellateBlockInWorld(tile, pos);
			}
			if( getTile(x + 1, y, z) == NULL || Tile::solid[getId(x + 1, y, z)] == false) {
				setRenderBox(16.00, 9.00, 1.00, 16.40, 16.00, 16.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(16.00, 1.00, 9.00, 16.40, 8.00, 16.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(16.00, 1.00, 0.00, 16.43, 8.00, 8.00);
				tessellateBlockInWorld(tile, pos);
			}
			if( getTile(x, y, z + 1) == NULL || Tile::solid[getId(x, y, z + 1)] == false) {
				setRenderBox(0.00, 9.00, 16.00, 15.00, 16.00, 16.40);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(0.00, 1.00, 16.00, 7.00, 8.00, 16.40);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(8.00, 1.00, 16.00, 16.00, 8.00, 16.40);
				tessellateBlockInWorld(tile, pos);
			}
			if( getTile(x - 1, y, z) == NULL ) {
				setRenderBox(-0.40, 9.00, 0.00, 0.00, 16.00, 15.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(-0.40, 1.00, 0.00, 0.00, 8.00, 7.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(-0.40, 1.00, 8.00, 0.00, 8.00, 16.00);
				tessellateBlockInWorld(tile, pos);
			}
			if( getTile(x, y - 1, z) == NULL || Tile::solid[getId(x, y - 1, z)] == false) {
				setRenderBox(0.00, -0.40, 0.00, 15.00, 0.00, 7.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(0.00, -0.40, 8.00, 7.00, 0.00, 15.00);
				tessellateBlockInWorld(tile, pos);
				setRenderBox(8.00, -0.40, 8.00, 16.00, 0.00, 15.00);
				tessellateBlockInWorld(tile, pos);
			}
		}
	}
	
	useForcedUV = false;
	return true;
}
