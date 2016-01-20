#include "mcpe/client/renderer/TileTessellator.h"
#include <stdlib.h>

bool TileTessellator::tessellateHexagonInWorld(Tile* tile, TilePos const& pos) {
	int data = getData(pos);
	useForcedUV = true;
	
	// Base 
	forcedUV = tile->getTextureUVCoordinateSet("stone",0);
	setRenderBox(0.0, 0.0, 0.0, 16.0, 2.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	// Carpet 
	forcedUV = tile->getTextureUVCoordinateSet("wool",14);
	setRenderBox(1.0, 2.0, 1.0, 15.0, 3.0, 15.0);
	tessellateBlockInWorld(tile, pos);
	
	// Exibite 
	forcedUV = tile->getTextureUVCoordinateSet("diamond_block",0);
	setRenderBox(5.0, 6.0, 5.0, 11.0, 12.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	
	// Glass 
	forcedUV = tile->getTextureUVCoordinateSet("glass",0);
	setRenderBox(0.0, 2.0, 0.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	/*tess->color(255, 255, 255, 1.0);
	
	//bottom
	forcedUV = tile->getTexture(0, data);
	face4(pos, 
		Vec3{0.0, 0.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 0.0, 1.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 0.0, 1.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 8.0}, Vec2{16.0, 0.0},
	true);
	face4(pos, 
		Vec3{0.0, 0.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 0.0, 15.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 0.0, 15.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 8.0}, Vec2{16.0, 0.0},
	true);
	
	//top
	forcedUV = tile->getTexture(1, data);
	face4(pos, 
		Vec3{0.0, 16.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 16.0, 1.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 16.0, 1.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 8.0}, Vec2{16.0, 0.0},
	true);
	face4(pos, 
		Vec3{0.0, 16.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 16.0, 15.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 16.0, 15.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 8.0}, Vec2{16.0, 0.0},
	true);
	
	//south
	forcedUV = tile->getTexture(2, data);
	face4(pos, 
		Vec3{4.0, 0.0, 1.0}, Vec2{0.0, 0.0},
		Vec3{12.0, 0.0, 1.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 16.0, 1.0}, Vec2{16.0, 16.0},
		Vec3{4.0, 16.0, 1.0}, Vec2{16.0, 0.0},
	true);
	
	//north
	forcedUV = tile->getTexture(3, data);
	face4(pos, 
		Vec3{4.0, 0.0, 15.0}, Vec2{0.0, 0.0},
		Vec3{12.0, 0.0, 15.0}, Vec2{0.0, 16.0},
		Vec3{12.0, 16.0, 15.0}, Vec2{16.0, 16.0},
		Vec3{4.0, 16.0, 15.0}, Vec2{16.0, 0.0},
	true);
	
	//east
	forcedUV = tile->getTexture(4, data);
	face4(pos, 
		Vec3{0.0, 0.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 0.0, 1.0}, Vec2{0.0, 16.0},
		Vec3{4.0, 16.0, 1.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 16.0, 8.0}, Vec2{16.0, 0.0},
	true);
	face4(pos, 
		Vec3{0.0, 0.0, 8.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 0.0, 15.0}, Vec2{0.0, 16.0},
		Vec3{4.0, 16.0, 15.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 16.0, 8.0}, Vec2{16.0, 0.0},
	true);
	
	//west
	forcedUV = tile->getTexture(5, data);
	face4(pos, 
		Vec3{12.0, 0.0, 1.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 0.0, 8.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 8.0}, Vec2{16.0, 16.0},
		Vec3{12.0, 16.0, 1.0}, Vec2{16.0, 0.0},
	true);
	face4(pos, 
		Vec3{12.0, 0.0, 15.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 0.0, 8.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 8.0}, Vec2{16.0, 16.0},
		Vec3{12.0, 16.0, 15.0}, Vec2{16.0, 0.0},
	true);
	*/
	return false;
}
