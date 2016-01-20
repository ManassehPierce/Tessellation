#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateFurnaceInWorld(Tile* tile, TilePos const& pos){
	int data = getData(pos);
	useForcedUV = true;
	tess->color(255, 255, 255, 1.0);
	
	//forcedUV = tile->getTextureUVCoordinateSet("furnace",3);
	forcedUV = tile->getTexture(0, data);
	
	//bottom
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//shelf
	face4(pos, 
		Vec3{0.0, 8.5, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 8.5, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 8.5, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 8.5, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//top
	face4(pos, 
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//if(data == 4) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 4) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(4, data);
	
	//east
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 5) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 5) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(5, data);
	
	//west
	face4(pos, 
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 3) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 3) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(3, data);
	
	//north
	face4(pos, 
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 2) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 2) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(2, data);
	
	//south
	face4(pos, 
		Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	useForcedUV = false;
	return true;
}

bool TileTessellator::tessellateLitFurnaceInWorld(Tile* tile, TilePos const& pos){
	int data = getData(pos);
	tess->color(255, 255, 255, 1.0);
	
	//forcedUV = tile->getTextureUVCoordinateSet("furnace",3);
	forcedUV = tile->getTexture(0, data);
	
	//bottom
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//shelf
	face4(pos, 
		Vec3{0.0, 8.5, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 8.5, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 8.5, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 8.5, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//top
	face4(pos, 
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 16.0},
	true);
	
	//if(data == 4) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 4) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(4, data);
	
	//east
	face4(pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 5) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 5) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(5, data);
	
	//west
	face4(pos, 
		Vec3{16.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 3) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 3) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(3, data);
	
	//north
	face4(pos, 
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 0.0, 16.0}, Vec2{0.0, 16.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 16.0, 16.0}, Vec2{16.0, 0.0},
	true);
	
	//if(data == 2) forcedUV = tile->getTextureUVCoordinateSet("furnace",0);
	//if(data != 2) forcedUV = tile->getTextureUVCoordinateSet("furnace",2);
	forcedUV = tile->getTexture(2, data);
	
	//south
	face4(pos, 
		Vec3{16.0, 0.0, 0.0}, Vec2{16.0, 16.0},
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 16.0},
		Vec3{0.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{16.0, 0.0},
	true);
	
	forcedUV = tile->getTextureUVCoordinateSet("fire",2);
	
	//south fire
	face4(pos, 
		Vec3{0.1, 0.1, 0.2}, Vec2{16.0, 16.0},
		Vec3{15.9, 0.1, 0.2}, Vec2{0.0, 16.0},
		Vec3{15.9, 8.4, 0.2}, Vec2{0.0, 0.0},
		Vec3{0.1, 8.4, 0.2}, Vec2{16.0, 0.0},
	true);
	
	//east fire
	face4(pos, 
		Vec3{0.2, 0.1, 0.1}, Vec2{16.0, 16.0},
		Vec3{0.2, 0.1, 15.9}, Vec2{0.0, 16.0},
		Vec3{0.2, 8.4, 15.9}, Vec2{0.0, 0.0},
		Vec3{0.2, 8.4, 0.1}, Vec2{16.0, 0.0},
	true);
	
	//north fire
	face4(pos, 
		Vec3{0.1, 0.1, 15.8}, Vec2{16.0, 16.0},
		Vec3{15.9, 0.1, 15.8}, Vec2{0.0, 16.0},
		Vec3{15.9, 8.4, 15.8}, Vec2{0.0, 0.0},
		Vec3{0.1, 8.4, 15.8}, Vec2{16.0, 0.0},
	true);
	
	//west fire
	face4(pos, 
		Vec3{15.8, 0.1, 15.9}, Vec2{16.0, 16.0},
		Vec3{15.8, 0.1, 0.1}, Vec2{0.0, 16.0},
		Vec3{15.8, 8.4, 0.1}, Vec2{0.0, 0.0},
		Vec3{15.8, 8.4, 15.9}, Vec2{16.0, 0.0},
	true);
	
	useForcedUV = true;
	
	//iron ingot
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(4.0, 8.5, 5.0, 10.0, 9.5, 7.0);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(6.0, 9.5, 4.0, 8.0, 10.5, 10.0);
	tessellateBlockInWorld(tile, pos);
	
	//gold ingot
	forcedUV = tile->getTextureUVCoordinateSet("gold_block",0);
	setRenderBox(4.0, 8.5, 9.0, 10.0, 9.5, 11.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	return true;
}
