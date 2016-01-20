#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellatePyramidInWorld(Tile* tile, TilePos const& pos) {
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	tess->color(255, 255, 255, 1);
	forcedUV = tile->getTexture(0, data);
	
	//Bottom Square
	face4(pos, 
	Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
	Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 0.0},
	Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
	Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 16.0},
	true);
	
	//East face
	face4(pos, 
	Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
	Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{16.0, 16.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{0.0, 16.0},
	true);
	
	//South Face
	face4(pos, 
	Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
	Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 0.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{16.0, 16.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{0.0, 16.0},
	true);
	
	//North Face
	face4(pos, 
	Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 0.0},
	Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 0.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{16.0, 16.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{0.0, 16.0},
	true);
	
	//West Face
	face4(pos, 
	Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 0.0},
	Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 0.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{16.0, 16.0},
	Vec3{8.0, 12.0, 8.0}, Vec2{0.0, 16.0},
	true);
	
	useForcedUV = false;
	return false;
}
