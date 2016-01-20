#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateCoalOreInWorld(Tile* tile, TilePos const& pos){
	//inner box
	setRenderBox(0.00, 0.00, 0.00, 16.00, 16.00, 16.00);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = true;
	forcedUV = tile->getTextureUVCoordinateSet("coal_block",0);
	
	//top
	if(shouldRenderFace(pos, 1)==true){
		setRenderBox(4.00, 16.00, 2.00, 5.00, 16.25, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 16.00, 2.00, 14.00, 16.40, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, 16.00, 3.00, 9.00, 16.55, 4.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 16.00, 5.00, 7.00, 16.70, 6.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, 16.00, 6.00, 8.00, 16.70, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(10.00, 16.00, 5.00, 12.00, 16.40, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(1.00, 16.00, 8.00, 3.00, 16.25, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 16.00, 8.00, 10.00, 16.25, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, 16.00, 9.00, 11.00, 16.25, 10.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 16.00, 10.00, 5.00, 16.40, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, 16.00, 13.00, 5.00, 16.55, 14.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.00, 16.00, 11.00, 13.00, 16.70, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 16.00, 12.00, 14.00, 16.70, 13.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, 16.00, 13.00, 11.00, 16.70, 14.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//south
	if(shouldRenderFace(pos, 2)==true){
		setRenderBox(11.00, 13.00, -0.25, 12.00, 14.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.00, 13.00, -0.40, 4.00, 14.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, 12.00, -0.55, 9.00, 13.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, 10.00, -0.70, 11.00, 11.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 9.00, -0.70, 13.00, 10.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 9.00, -0.40, 6.00, 11.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(13.00, 7.00, -0.25, 15.00, 8.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(6.00, 7.00, -0.25, 8.00, 8.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 6.00, -0.25, 9.00, 7.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.00, 5.00, -0.40, 12.00, 6.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.00, 2.00, -0.55, 13.00, 3.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, 4.00, -0.70, 5.00, 5.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.00, 3.00, -0.70, 8.00, 4.00, 0.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 2.00, -0.70, 7.00, 3.00, 0.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//west
	if(shouldRenderFace(pos, 5)==true){
		setRenderBox(16.00, 13.00, 11.00, 16.25, 14.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 13.00, 2.00, 16.40, 14.00, 4.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 12.00, 7.00, 16.55, 13.00, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 10.00, 9.00, 16.70, 11.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 9.00, 8.00, 16.70, 10.00, 13.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 9.00, 4.00, 16.40, 11.00, 6.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 7.00, 13.00, 16.25, 8.00, 15.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 7.00, 6.00, 16.25, 8.00, 8.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 6.00, 5.00, 16.25, 7.00, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 5.00, 11.00, 16.40, 6.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 2.00, 11.00, 16.55, 3.00, 13.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 4.00, 3.00, 16.70, 5.00, 5.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 3.00, 2.00, 16.70, 4.00, 8.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.00, 2.00, 5.00, 16.70, 3.00, 7.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//north
	if(shouldRenderFace(pos, 2)==true){
		setRenderBox(4.00, 13.00, 16.00, 5.00, 14.00, 16.25);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, 13.00, 16.00, 14.00, 14.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, 12.00, 16.00, 9.00, 13.00, 16.55);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, 10.00, 16.00, 7.00, 11.00, 16.70);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, 9.00, 16.00, 8.00, 10.00, 16.70);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(10.00, 9.00, 16.00, 12.00, 11.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(1.00, 7.00, 16.00, 3.00, 8.00, 16.25);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 7.00, 16.00, 10.00, 8.00, 16.25);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, 6.00, 16.00, 11.00, 7.00, 16.25);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, 5.00, 16.00, 5.00, 6.00, 16.40);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, 2.00, 16.00, 5.00, 3.00, 16.55);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.00, 4.00, 16.00, 13.00, 5.00, 16.70);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, 3.00, 16.00, 14.00, 4.00, 16.70);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, 2.00, 16.00, 11.00, 3.00, 16.70);
		tessellateBlockInWorld(tile, pos);
	}
	
	//east
	if(shouldRenderFace(pos, 4)==true){
		setRenderBox(-0.25, 13.00, 4.00, 0.00, 14.00, 5.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 13.00, 12.00, 0.00, 14.00, 14.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.55, 12.00, 7.00, 0.00, 13.00, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.70, 10.00, 5.00, 0.00, 11.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.70, 9.00, 3.00, 0.00, 10.00, 8.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 9.00, 10.00, 0.00, 11.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.25, 7.00, 1.00, 0.00, 8.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.25, 7.00, 8.00, 0.00, 8.00, 10.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.25, 6.00, 7.00, 0.00, 7.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 5.00, 4.00, 0.00, 6.00, 5.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.40, 2.00, 3.00, 0.00, 3.00, 5.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.70, 4.00, 11.00, 0.00, 5.00, 13.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.70, 3.00, 8.00, 0.00, 4.00, 14.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.70, 2.00, 9.00, 0.00, 3.00, 11.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	//bottom
	if(shouldRenderFace(pos, 0)==true){
		setRenderBox(4.00, -0.25, 2.00, 5.00, 0.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.00, -0.40, 2.00, 14.00, 0.00, 3.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, -0.55, 3.00, 9.00, 0.00, 4.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(5.00, -0.70, 5.00, 7.00, 0.00, 6.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, -0.70, 6.00, 8.00, 0.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(10.00, -0.40, 5.00, 12.00, 0.00, 7.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(1.00, -0.25, 8.00, 3.00, 0.00, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, -0.25, 8.00, 10.00, 0.00, 9.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(7.00, -0.25, 9.00, 11.00, 0.00, 10.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.00, -0.40, 10.00, 5.00, 0.00, 11.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.00, -0.40, 13.00, 5.00, 0.00, 14.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.00, -0.70, 11.00, 13.00, 0.00, 12.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(8.00, -0.70, 12.00, 14.00, 0.00, 13.00);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(9.00, -0.70, 13.00, 11.00, 0.00, 14.00);
		tessellateBlockInWorld(tile, pos);
	}
	
	useForcedUV = false;
	return true;
}

