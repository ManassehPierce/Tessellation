#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellatePipeInWorld(Tile* tile, TilePos const& pos){
	useForcedUV = true;
	int x = pos.x, y = pos.y, z = pos.z;
	
	forcedUV = tile->getTextureUVCoordinateSet("diamond_block",0);
	setRenderBox(7.0, 7.0, 7.0, 9.0, 9.0, 9.0);
	tessellateBlockInWorld(tile, pos);
	
	if( tileSource->getTilePtr(x, y - 1, z) == tile){
		setRenderBox(7.0, 0.0, 7.0, 9.0, 7.0, 9.0);
		tessellateBlockInWorld(tile, pos);
	}
	if( tileSource->getTilePtr(x, y + 1, z) == tile){
		setRenderBox(7.0, 9.0, 7.0, 9.0, 16.0, 9.0);
		tessellateBlockInWorld(tile, pos);
	}
	if( tileSource->getTilePtr(x, y, z - 1) == tile){
		setRenderBox(7.0, 7.0, 0.0, 9.0, 9.0, 7.0);
		tessellateBlockInWorld(tile, pos);
	}
	if( tileSource->getTilePtr(x, y, z + 1) == tile){
		setRenderBox(7.0, 7.0, 9.0, 9.0, 9.0, 16.0);
		tessellateBlockInWorld(tile, pos);
	}
	if( tileSource->getTilePtr(x - 1, y, z) == tile){
		setRenderBox(0.0, 7.0, 7.0, 7.0, 9.0, 9.0);
		tessellateBlockInWorld(tile, pos);
	}
	if( tileSource->getTilePtr(x + 1, y, z) == tile){
		setRenderBox(9.0, 7.0, 7.0, 16.0, 9.0, 9.0);
		tessellateBlockInWorld(tile, pos);
	}
	
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(6.0, 5.0, 5.0, 10.0, 6.0, 6.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.0, 5.0, 6.0, 6.0, 6.0, 10.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(10.0, 5.0, 6.0, 11.0, 6.0, 10.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(6.0, 5.0, 10.0, 10.0, 6.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	
	setRenderBox(6.0, 10.0, 5.0, 10.0, 11.0, 6.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.0, 10.0, 6.0, 6.0, 11.0, 10.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(10.0, 10.0, 6.0, 11.0, 11.0, 10.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(6.0, 10.0, 10.0, 10.0, 11.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	
	setRenderBox(5.0, 6.0, 5.0, 6.0, 10.0, 6.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(10.0, 6.0, 5.0, 11.0, 10.0, 6.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.0, 6.0, 10.0, 6.0, 10.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(10.0, 6.0, 10.0, 11.0, 10.0, 11.0);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("glass",0);
	
	tess->color(255, 255, 255, 1.0);
	
	face4(pos, 
		Vec3{6.0, 5.5, 6.0}, Vec2{0.0, 0.0},
		Vec3{6.0, 5.5, 10.0}, Vec2{0.0, 16.0},
		Vec3{10.0, 5.5, 10.0}, Vec2{16.0, 16.0},
		Vec3{10.0, 5.5, 6.0}, Vec2{16.0, 0.0},
	true);
	
	face4(pos, 
		Vec3{6.0, 10.5, 6.0}, Vec2{0.0, 0.0},
		Vec3{6.0, 10.5, 10.0}, Vec2{0.0, 16.0},
		Vec3{10.0, 10.5, 10.0}, Vec2{16.0, 16.0},
		Vec3{10.0, 10.5, 6.0}, Vec2{16.0, 0.0},
	true);
	
	face4(pos, 
		Vec3{6.0, 6.0, 5.5}, Vec2{0.0, 0.0},
		Vec3{6.0, 10.0, 5.5}, Vec2{0.0, 16.0},
		Vec3{10.0, 10.0, 5.5}, Vec2{16.0, 16.0},
		Vec3{10.0, 6.0, 5.5}, Vec2{16.0, 0.0},
	true);
	
	face4(pos, 
		Vec3{6.0, 6.0, 10.5}, Vec2{0.0, 0.0},
		Vec3{6.0, 10.0, 10.5}, Vec2{0.0, 16.0},
		Vec3{10.0, 10.0, 10.5}, Vec2{16.0, 16.0},
		Vec3{10.0, 6.0, 10.5}, Vec2{16.0, 0.0},
	true);
	
	face4(pos, 
		Vec3{5.5, 6.0, 6.0}, Vec2{0.0, 0.0},
		Vec3{5.5, 6.0, 10.0}, Vec2{0.0, 16.0},
		Vec3{5.5, 10.0, 10.0}, Vec2{16.0, 16.0},
		Vec3{5.5, 10.0, 6.0}, Vec2{16.0, 0.0},
	true);
	
	face4(pos, 
		Vec3{10.5, 6.0, 6.0}, Vec2{0.0, 0.0},
		Vec3{10.5, 6.0, 10.0}, Vec2{0.0, 16.0},
		Vec3{10.5, 10.0, 10.0}, Vec2{16.0, 16.0},
		Vec3{10.5, 10.0, 6.0}, Vec2{16.0, 0.0},
	true);
	
	tile->hitbox = AABB(5.0/16.0, 5.0/16.0, 5.0/16.0, 11.0/16.0, 11.0/16.0, 11.0/16.0);
	
	useForcedUV = false;
	return true;
}
