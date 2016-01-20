#include "mcpe/client/renderer/TileTessellator.h"

void TileTessellator::renderSlantedRail(int data, Tile* tile, TilePos const& pos){
	/*
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	tess->color(255, 255, 255, 1);
	//Rail 1 
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 1.98}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.0, 3.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.0, 3.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 1.98}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.75, 1.98}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 3.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 3.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.75, 1.98}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 1.98}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 1.98}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 1.98}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 1.98}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 3.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 3.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 3.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 3.0}, Vec2{0.0, 16.0},
	true);
	
	//Rail 2
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 13.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.0, 14.02}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.0, 14.02}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 13.0}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.75, 13.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 14.02}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 14.02}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.75, 13.0}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 13.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 13.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 13.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 13.0}, Vec2{0.0, 16.0},
	true);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 14.02}, Vec2{0.0, 0.0},
		Vec3{0.0, 1.75, 14.02}, Vec2{16.0, 0.0},
		Vec3{16.0, 17.75, 14.02}, Vec2{16.0, 16.0},
		Vec3{16.0, 17.0, 14.02}, Vec2{0.0, 16.0},
	true);
	
	//Plank 1
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRotatedFace(data, pos, 
		Vec3{1.02, 2.02, 1.0}, Vec2{0.0, 0.0},
		Vec3{1.02, 2.02, 15.0}, Vec2{2.0, 0.0},
		Vec3{2.98, 3.98, 15.0}, Vec2{2.0, 2.0},
		Vec3{2.98, 3.98, 1.0}, Vec2{0.0, 2.0},
	true);
	
	//Plank 2
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRotatedFace(data, pos, 
		Vec3{4.02, 5.02, 1.0}, Vec2{0.0, 0.0},
		Vec3{4.02, 5.02, 15.0}, Vec2{2.0, 0.0},
		Vec3{5.98, 6.98, 15.0}, Vec2{2.0, 2.0},
		Vec3{5.98, 6.98, 1.0}, Vec2{0.0, 2.0},
	true);
	*/
	if(tile->id == 27) forcedUV = tile->getTextureUVCoordinateSet("rail_golden_powered", 0);
	if(tile->id == 66) forcedUV = tile->getTextureUVCoordinateSet("normal_rail", 0);
	
	tess->color(255, 255, 255, 1.0);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 0.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{0.0, 0.0, 16.0}, Vec2{16.0, 0.0},
		Vec3{16.0, 16.0, 16.0}, Vec2{16.0, 16.0},
		Vec3{16.0, 16.0, 0.0}, Vec2{0.0, 16.0},
	true);
}

void TileTessellator::renderCurvedRail(int data, Tile* tile, TilePos const& pos){
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRotatedBox(data, 2.00, 1.00, 12.00, 3.00, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 3.00, 1.00, 10.00, 4.00, 1.75, 12.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 4.00, 1.00, 8.00, 5.00, 1.75, 10.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 5.00, 1.00, 7.00, 6.00, 1.75, 8.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 6.00, 1.00, 6.00, 7.00, 1.75, 7.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 7.00, 1.00, 5.00, 8.00, 1.75, 6.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 8.00, 1.00, 4.00, 10.00, 1.75, 5.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 10.00, 1.00, 3.00, 12.00, 1.75, 4.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 12.00, 1.00, 2.00, 16.00, 1.75, 3.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 13.00, 1.00, 14.00, 14.02, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 14.00, 1.00, 13.00, 16.00, 1.75, 14.02);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("planks", 0);
	setRotatedBox(data, 1.00, 0.00, 11.00, 4.00, 1.00, 13.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 4.00, 0.00, 12.00, 7.00, 1.00, 14.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 7.00, 0.00, 13.00, 10.00, 1.00, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 10.00, 0.00, 14.00, 12.00, 1.00, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 12.00, 0.00, 14.00, 15.00, 1.00, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 15.00, 0.00, 14.00, 16.00, 1.00, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 14.00, 0.00, 12.00, 16.00, 1.00, 14.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 12.00, 0.00, 13.00, 14.00, 1.00, 14.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 6.00, 0.00, 5.00, 7.00, 1.00, 6.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 6.00, 0.00, 6.00, 8.00, 1.00, 7.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 6.00, 0.00, 7.00, 9.00, 1.00, 8.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 7.00, 0.00, 8.00, 10.00, 1.00, 9.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 8.00, 0.00, 9.00, 11.00, 1.00, 10.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 9.00, 0.00, 10.00, 12.00, 1.00, 11.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 10.00, 0.00, 11.00, 13.00, 1.00, 12.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 12.00, 0.00, 12.00, 14.00, 1.00, 13.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 11.00, 0.00, 1.00, 13.00, 1.00, 4.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 12.00, 0.00, 4.00, 14.00, 1.00, 7.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 13.00, 0.00, 7.00, 15.00, 1.00, 10.00);
	tessellateBlockInWorld(tile, pos);
	setRotatedBox(data, 14.00, 0.00, 10.00, 16.00, 1.00, 12.00);
	tessellateBlockInWorld(tile, pos);
}

void TileTessellator::renderNSRail(Tile* tile, TilePos const& pos){
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(1.98, 1.00, 0.00, 3.00, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(13.00, 1.00, 0.00, 14.02, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRenderBox(1.00, 0.00, 1.02, 15.00, 1.02, 2.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 5.02, 15.00, 1.02, 6.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 9.02, 15.00, 1.02, 10.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 13.02, 15.00, 1.02, 14.98);
	tessellateBlockInWorld(tile, pos);
}

void TileTessellator::renderEWRail(Tile* tile, TilePos const& pos){
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(0.00, 1.00, 13.00, 16.00, 1.75, 14.02);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(0.00, 1.00, 1.98, 16.00, 1.75, 3.00);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRenderBox(13.02, 0.00, 1.00, 14.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(9.02, 0.00, 1.00, 10.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.02, 0.00, 1.00, 6.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.02, 0.00, 1.00, 2.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
}

void TileTessellator::renderNSPoweredRail(Tile* tile, TilePos const& pos){
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(1.98, 1.00, 0.00, 3.00, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(13.00, 1.00, 0.00, 14.02, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("gold_block",0);
	setRenderBox(3.00, 1.00, 0.00, 4.02, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(11.98, 1.00, 0.00, 13.00, 1.75, 16.00);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRenderBox(1.00, 0.00, 1.02, 15.00, 1.02, 2.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 5.02, 15.00, 1.02, 6.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 9.02, 15.00, 1.02, 10.98);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.00, 0.00, 13.02, 15.00, 1.02, 14.98);
	tessellateBlockInWorld(tile, pos);
}

void TileTessellator::renderEWPoweredRail(Tile* tile, TilePos const& pos){
	forcedUV = tile->getTextureUVCoordinateSet("iron_block",0);
	setRenderBox(0.00, 1.00, 13.00, 16.00, 1.75, 14.02);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(0.00, 1.00, 1.98, 16.00, 1.75, 3.00);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("gold_block",0);
	setRenderBox(0.00, 1.00, 11.98, 16.00, 1.75, 13.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(0.00, 1.00, 3.00, 16.00, 1.75, 4.02);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("planks",0);
	setRenderBox(13.02, 0.00, 1.00, 14.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(9.02, 0.00, 1.00, 10.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(5.02, 0.00, 1.00, 6.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
	setRenderBox(1.02, 0.00, 1.00, 2.98, 1.02, 15.00);
	tessellateBlockInWorld(tile, pos);
}

bool TileTessellator::tessellatePoweredRailInWorld(Tile* tile, const TilePos& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	switch(data){
		case 0:
			renderNSPoweredRail(tile, pos);
			break;
		case 1:
			renderEWPoweredRail(tile, pos);
			break;
		case 2:
			renderSlantedRail(2, tile, pos);
			break;
		case 3:
			renderSlantedRail(3, tile, pos);
			break;
		case 4:
			renderSlantedRail(4, tile, pos);
			break;
		case 5:
			renderSlantedRail(5, tile, pos);
			break;
	}
	
	useForcedUV = false;
	return true;
}

bool TileTessellator::tessellateNormalRailInWorld(Tile* tile, const TilePos& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	useForcedUV = true;
	
	switch(data){
		case 0:
			renderNSRail(tile, pos);
			break;
		case 1:
			renderEWRail(tile, pos);
			break;
		case 2:
			renderSlantedRail(2, tile, pos);
			break;
		case 3:
			renderSlantedRail(3, tile, pos);
			break;
		case 4:
			renderSlantedRail(4, tile, pos);
			break;
		case 5:
			renderSlantedRail(5, tile, pos);
			break;
		case 6:
			renderCurvedRail(2, tile, pos);
			break;
		case 7:
			renderCurvedRail(5, tile, pos);
			break;
		case 8:
			renderCurvedRail(3, tile, pos);
			break;
		case 9:
			renderCurvedRail(4, tile, pos);
			break;
		
	}
	
	useForcedUV = false;
	return true;
}

