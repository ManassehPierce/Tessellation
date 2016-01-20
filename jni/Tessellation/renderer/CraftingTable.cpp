#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateCraftingTableInWorld(Tile* tile, TilePos const& pos){
	setRenderBox(0.0, 0.0, 0.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = true;
	
	//north
	if(shouldRenderFace(pos, 2)==true){
		forcedUV = tile->getTextureUVCoordinateSet("log",0);
		setRenderBox(12.0, 7.0, -0.5, 13.0, 11.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.0, 10.0, -0.5, 3.0, 13.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.0, 10.0, -0.5, 5.0, 13.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.0, 10.0, -0.5, 4.0, 11.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(3.0, 12.0, -0.5, 4.0, 13.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
		setRenderBox(2.0, 8.0, -0.5, 5.0, 10.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.0, 5.0, -0.5, 4.0, 8.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.0, 3.0, -0.5, 3.0, 5.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.0, 6.0, -0.5, 14.0, 7.0, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.0, 5.0, -0.5, 12.0, 8.0, 0.0);
		tessellateBlockInWorld(tile, pos);
	}
	
	//north
	if(shouldRenderFace(pos, 3)==true){
		forcedUV = tile->getTextureUVCoordinateSet("log",0);
		setRenderBox(3.0, 7.0, 16.0, 4.0, 11.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(11.0, 10.0, 16.0, 12.0, 13.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(13.0, 10.0, 16.0, 14.0, 13.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.0, 10.0, 16.0, 13.0, 11.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.0, 12.0, 16.0, 13.0, 13.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
		setRenderBox(11.0, 8.0, 16.0, 14.0, 10.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(12.0, 5.0, 16.0, 14.0, 8.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(13.0, 3.0, 16.0, 14.0, 5.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(2.0, 6.0, 16.0, 4.0, 7.0, 16.5);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.0, 5.0, 16.0, 5.0, 8.0, 16.5);
		tessellateBlockInWorld(tile, pos);
	}
	
	if(shouldRenderFace(pos, 4)==true){
		forcedUV = tile->getTextureUVCoordinateSet("log",0);
		setRenderBox(-0.5, 9.0, 3.0, 0.0, 11.0, 4.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.5, 9.0, 5.0, 0.0, 11.0, 6.0);
		tessellateBlockInWorld(tile, pos);
		forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
		setRenderBox(-0.5, 6.0, 3.0, 0.0, 8.0, 4.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.5, 6.0, 5.0, 0.0, 8.0, 6.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-0.5, 8.0, 4.0, 0.0, 9.0, 5.0);
		tessellateBlockInWorld(tile, pos);
	}
	
	if(shouldRenderFace(pos, 5)==true){
		forcedUV = tile->getTextureUVCoordinateSet("log",0);
		setRenderBox(16.0, 9.0, 10.0, 16.5, 11.0, 11.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.0, 9.0, 12.0, 16.5, 11.0, 13.0);
		tessellateBlockInWorld(tile, pos);
		forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
		setRenderBox(16.0, 6.0, 10.0, 16.5, 8.0, 11.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.0, 6.0, 12.0, 16.5, 8.0, 13.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(16.0, 8.0, 11.0, 16.5, 9.0, 12.0);
		tessellateBlockInWorld(tile, pos);
	}
	
	useForcedUV = false;
	return true;
}
