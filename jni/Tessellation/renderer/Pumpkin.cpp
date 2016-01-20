#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellatePumpkinInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	tess->color(255, 255, 255, 1.0);
	
	forcedUV = tile->getTextureUVCoordinateSet("pumpkin",0);
	
	//bottom
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//top
	face4(pos, 
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	if(data == 1) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",2);
	if(data != 1) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//east
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 3) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",2);
	if(data != 3) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//west
	face4(pos, 
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 0) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",2);
	if(data != 0) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//north
	face4(pos, 
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 2) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",2);
	if(data != 2) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//south
	face4(pos, 
		Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	useForcedUV = false;
	return false;
}

bool TileTessellator::tessellateLitPumpkinInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	tess->color(255, 255, 255, 1.0);
	
	forcedUV = tile->getTextureUVCoordinateSet("pumpkin",0);
	
	//bottom
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//top
	face4(pos, 
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	if(data == 1) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",3);
	if(data != 1) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//east
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 3) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",3);
	if(data != 3) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//west
	face4(pos, 
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 0) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",3);
	if(data != 0) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//north
	face4(pos, 
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	if(data == 2) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",3);
	if(data != 2) forcedUV = tile->getTextureUVCoordinateSet("pumpkin",1);
	
	//south
	face4(pos, 
		Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	forcedUV = tile->getTextureUVCoordinateSet("torch_on",0);
	
	setRenderBox(7.0, 0.0, 7.0, 9.0, 10.0, 9.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return false;
}


