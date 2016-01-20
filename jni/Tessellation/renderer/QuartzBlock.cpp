#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateQuartzBlockInWorld(Tile* tile, TilePos const& pos){
	int data = getData(pos);
	int x = pos.x, y = pos.y, z = pos.z;

	setRenderBox(0.0, 0.0, 0.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	switch(data) {
		case 2: {
			setRenderBox(13.00, 0.00, -1.00, 15.00, 16.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(9.00, 0.00, -1.00, 11.00, 16.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(5.00, 0.00, -1.00, 7.00, 16.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(1.00, 0.00, -1.00, 3.00, 16.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 0.00, 13.00, 17.00, 16.00, 15.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 0.00, 9.00, 17.00, 16.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 0.00, 5.00, 17.00, 16.00, 7.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 0.00, 1.00, 17.00, 16.00, 3.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(13.00, 0.00, 16.00, 15.00, 16.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(9.00, 0.00, 16.00, 11.00, 16.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(5.00, 0.00, 16.00, 7.00, 16.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(1.00, 0.00, 16.00, 3.00, 16.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 0.00, 13.00, 0.00, 16.00, 15.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 0.00, 9.00, 0.00, 16.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 0.00, 5.00, 0.00, 16.00, 7.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 0.00, 1.00, 0.00, 16.00, 3.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 16.00, 2.00, 12.00, 16.50, 4.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(12.00, 16.00, 2.00, 14.00, 16.50, 12.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(4.00, 16.00, 12.00, 14.00, 16.50, 14.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 16.00, 4.00, 4.00, 16.50, 14.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(5.00, 16.00, 5.00, 11.00, 16.75, 11.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(2.00, -0.50, 2.00, 12.00, 0.00, 4.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(12.00, -0.50, 2.00, 14.00, 0.00, 12.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(4.00, -0.50, 12.00, 14.00, 0.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, -0.50, 4.00, 4.00, 0.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(5.00, -0.75, 5.00, 11.00, 0.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			
		} break;
		case 6: {
			setRenderBox(0.00, 16.00, 1.00, 16.00, 17.00, 3.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 16.00, 5.00, 16.00, 17.00, 7.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 16.00, 9.00, 16.00, 17.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 16.00, 13.00, 16.00, 17.00, 15.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 1.00, -1.00, 16.00, 3.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 5.00, -1.00, 16.00, 7.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 9.00, -1.00, 16.00, 11.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 13.00, -1.00, 16.00, 15.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, -1.00, 13.00, 16.00, 0.00, 15.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, -1.00, 9.00, 16.00, 0.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, -1.00, 5.00, 16.00, 0.00, 7.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, -1.00, 1.00, 16.00, 0.00, 3.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 13.00, 16.00, 16.00, 15.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 9.00, 16.00, 16.00, 11.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 5.00, 16.00, 16.00, 7.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(0.00, 1.00, 16.00, 16.00, 3.00, 17.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 12.00, 4.00, 16.50, 14.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 4.00, 2.00, 16.50, 14.00, 4.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 2.00, 2.00, 16.50, 4.00, 12.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 2.00, 12.00, 16.50, 12.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(16.00, 5.00, 5.00, 16.75, 11.00, 11.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(-0.50, 12.00, 4.00, 0.00, 14.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-0.50, 4.00, 2.00, 0.00, 14.00, 4.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-0.50, 2.00, 2.00, 0.00, 4.00, 12.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-0.50, 2.00, 12.00, 0.00, 12.00, 14.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(-0.75, 5.00, 5.00, 0.00, 11.00, 11.00);
			tessellateBlockInWorld(tile, pos);
		} break;
		case 10: {
			setRenderBox(1.00, 16.00, 0.00, 3.00, 17.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(5.00, 16.00, 0.00, 7.00, 17.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(9.00, 16.00, 0.00, 11.00, 17.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(13.00, 16.00, 0.00, 15.00, 17.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 13.00, 0.00, 17.00, 15.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 9.00, 0.00, 17.00, 11.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 5.00, 0.00, 17.00, 7.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(16.00, 1.00, 0.00, 17.00, 3.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(13.00, -1.00, 0.00, 15.00, 0.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(9.00, -1.00, 0.00, 11.00, 0.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(5.00, -1.00, 0.00, 7.00, 0.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(1.00, -1.00, 0.00, 3.00, 0.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 1.00, 0.00, 0.00, 3.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 5.00, 0.00, 0.00, 7.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 9.00, 0.00, 0.00, 11.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(-1.00, 13.00, 0.00, 0.00, 15.00, 16.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(4.00, 12.00, -0.50, 14.00, 14.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 4.00, -0.50, 4.00, 14.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 2.00, -0.50, 12.00, 4.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(12.00, 2.00, -0.50, 14.00, 12.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(5.00, 5.00, -0.75, 11.00, 11.00, 0.00);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(4.00, 12.00, 16.00, 14.00, 14.00, 16.50);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 4.00, 16.00, 4.00, 14.00, 16.50);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(2.00, 2.00, 16.00, 12.00, 4.00, 16.50);
			tessellateBlockInWorld(tile, pos);
			setRenderBox(12.00, 2.00, 16.00, 14.00, 12.00, 16.50);
			tessellateBlockInWorld(tile, pos);
			
			setRenderBox(5.00, 5.00, 16.00, 11.00, 11.00, 16.75);
			tessellateBlockInWorld(tile, pos);
		} break;
	}
	return true;
}

