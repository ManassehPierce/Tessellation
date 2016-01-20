#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateFlowerInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	switch(data){
		case 2: {
			forcedUV = tile->getTextureUVCoordinateSet("grass", 0);
			
			//stem
			setRenderBox(7.5, 0.0, 7.0, 8.5, 8.0, 8.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower center
			setRenderBox(5.5, 9.0, 5.0, 10.5, 13.0, 10.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower top/bottom north
			setRenderBox(6.5, 9.0, 5.0, 10.5, 13.0, 6.0);
			//tessellateBlockInWorld(tile, pos);
			
			//flower top/bottom east
			setRenderBox(9.5, 9.0, 6.0, 10.5, 13.0, 10.0);
			//tessellateBlockInWorld(tile, pos);
			
			//flower top/bottom south
			setRenderBox(5.5, 9.0, 5.0, 9.5, 13.0, 10.0);
			//tessellateBlockInWorld(tile, pos);
			
			//flower top/bottom west
			setRenderBox(5.5, 9.0, 5.0, 6.5, 13.0, 9.0);
			//tessellateBlockInWorld(tile, pos);
			
			//flower top
			setRenderBox(6.5, 13.0, 6.0, 9.5, 14.0, 9.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower bottom
			setRenderBox(6.5, 8.0, 6.0, 9.5, 9.0, 9.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower north
			setRenderBox(6.49, 9.99, 4.0, 9.51, 12.01, 5.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower east
			setRenderBox(10.5, 9.99, 5.99, 11.5, 12.01, 9.01);
			tessellateBlockInWorld(tile, pos);
			
			//flower south
			setRenderBox(6.49, 9.99, 10.0, 9.51, 12.01, 11.0);
			tessellateBlockInWorld(tile, pos);
			
			//flower west
			setRenderBox(4.5, 9.99, 5.99, 5.5, 12.01, 9.01);
			tessellateBlockInWorld(tile, pos);
			
		} break;
	}
	useForcedUV = false;
	return true;
}
