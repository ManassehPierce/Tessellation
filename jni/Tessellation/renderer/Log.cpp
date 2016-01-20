#include "mcpe/client/renderer/TileTessellator.h"

void TileTessellator::renderNormalLog(Tile* tile, TilePos const& pos){
	//block
	setRenderBox(0.0, 0.01, 0.0, 16.0, 15.99, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTexture(0, getData(pos));
	tess->color(255, 255, 255, 1.0);
	
	//east
	if(shouldRenderFace(pos, 4)==true){
		setRenderBox(-1.0, 0.01, 2.0, 0.0, 15.99, 14.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(-2.0, 0.01, 4.0, -1.0, 15.99, 12.0);
		tessellateBlockInWorld(tile, pos);
		
		face4(pos, 
			Vec3{-1.0, 16.0, 2.0}, Vec2{0.0, 0.0},
			Vec3{-1.0, 16.0, 4.0}, Vec2{0.0, 2.0},
			Vec3{0.0, 16.0, 4.0}, Vec2{1.0, 2.0},
			Vec3{0.0, 16.0, 2.0}, Vec2{1.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{-1.0, 16.0, 12.0}, Vec2{0.0, 0.0},
			Vec3{-1.0, 16.0, 14.0}, Vec2{0.0, 2.0},
			Vec3{0.0, 16.0, 14.0}, Vec2{1.0, 2.0},
			Vec3{0.0, 16.0, 12.0}, Vec2{1.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{-2.0, 16.0, 4.0}, Vec2{0.0, 4.0},
			Vec3{-2.0, 16.0, 12.0}, Vec2{1.0, 12.0},
			Vec3{-1.0, 16.0, 12.0}, Vec2{1.0, 12.0},
			Vec3{-1.0, 16.0, 4.0}, Vec2{0.0, 4.0},
		false);
		
		face4(pos, 
			Vec3{-1.0, 16.0, 4.0}, Vec2{1.0, 4.0},
			Vec3{-1.0, 16.0, 12.0}, Vec2{2.0, 12.0},
			Vec3{0.0, 16.0, 12.0}, Vec2{2.0, 12.0},
			Vec3{0.0, 16.0, 4.0}, Vec2{1.0, 4.0},
		false);
		
		face4(pos, 
			Vec3{0.0, 16.0, 1.0}, Vec2{1.0, 1.0},
			Vec3{0.0, 16.0, 15.0}, Vec2{2.0, 15.0},
			Vec3{1.0, 16.0, 15.0}, Vec2{2.0, 15.0},
			Vec3{1.0, 16.0, 1.0}, Vec2{1.0, 1.0},
		false);
	}
	
	//west
	if(shouldRenderFace(pos, 5)==true){
		setRenderBox(16.0, 0.01, 2.0, 17.0, 15.99, 14.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(17.0, 0.01, 4.0, 18.0, 15.99, 12.0);
		tessellateBlockInWorld(tile, pos);
		
		face4(pos, 
			Vec3{16.0, 16.0, 2.0}, Vec2{0.0, 0.0},
			Vec3{16.0, 16.0, 4.0}, Vec2{0.0, 2.0},
			Vec3{17.0, 16.0, 4.0}, Vec2{1.0, 2.0},
			Vec3{17.0, 16.0, 2.0}, Vec2{1.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{16.0, 16.0, 12.0}, Vec2{0.0, 0.0},
			Vec3{16.0, 16.0, 14.0}, Vec2{0.0, 2.0},
			Vec3{17.0, 16.0, 14.0}, Vec2{1.0, 2.0},
			Vec3{17.0, 16.0, 12.0}, Vec2{1.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{18.0, 16.0, 4.0}, Vec2{0.0, 4.0},
			Vec3{18.0, 16.0, 12.0}, Vec2{1.0, 12.0},
			Vec3{17.0, 16.0, 12.0}, Vec2{1.0, 12.0},
			Vec3{17.0, 16.0, 4.0}, Vec2{0.0, 4.0},
		false);
		
		face4(pos, 
			Vec3{17.0, 16.0, 4.0}, Vec2{1.0, 4.0},
			Vec3{17.0, 16.0, 12.0}, Vec2{2.0, 12.0},
			Vec3{16.0, 16.0, 12.0}, Vec2{2.0, 12.0},
			Vec3{16.0, 16.0, 4.0}, Vec2{1.0, 4.0},
		false);
		
		face4(pos, 
			Vec3{15.0, 16.0, 1.0}, Vec2{1.0, 1.0},
			Vec3{15.0, 16.0, 15.0}, Vec2{2.0, 15.0},
			Vec3{16.0, 16.0, 15.0}, Vec2{2.0, 15.0},
			Vec3{16.0, 16.0, 1.0}, Vec2{1.0, 1.0},
		false);
	}
	
	//south
	if(shouldRenderFace(pos, 2)==true){
		setRenderBox(2.0, 0.01, -1.0, 14.0, 15.99, 0.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.0, 0.01, -2.0, 12.0, 15.99, -1.0);
		tessellateBlockInWorld(tile, pos);
		
		face4(pos, 
			Vec3{2.0, 16.0, -1.0}, Vec2{0.0, 0.0},
			Vec3{4.0, 16.0, -1.0}, Vec2{2.0, 0.0},
			Vec3{4.0, 16.0, 0.0}, Vec2{2.0, 1.0},
			Vec3{2.0, 16.0, 0.0}, Vec2{0.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{12.0, 16.0, -1.0}, Vec2{0.0, 0.0},
			Vec3{14.0, 16.0, -1.0}, Vec2{2.0, 0.0},
			Vec3{14.0, 16.0, 0.0}, Vec2{2.0, 1.0},
			Vec3{12.0, 16.0, 0.0}, Vec2{0.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{4.0, 16.0, -2.0}, Vec2{4.0, 0.0},
			Vec3{12.0, 16.0, -2.0}, Vec2{12.0, 1.0},
			Vec3{12.0, 16.0, -1.0}, Vec2{12.0, 1.0},
			Vec3{4.0, 16.0, -1.0}, Vec2{4.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{4.0, 16.0, -1.0}, Vec2{4.0, 1.0},
			Vec3{12.0, 16.0, -1.0}, Vec2{12.0, 2.0},
			Vec3{12.0, 16.0, 0.0}, Vec2{12.0, 2.0},
			Vec3{4.0, 16.0, 0.0}, Vec2{4.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{1.0, 16.0, 0.0}, Vec2{1.0, 1.0},
			Vec3{15.0, 16.0, 0.0}, Vec2{15.0, 2.0},
			Vec3{15.0, 16.0, 1.0}, Vec2{15.0, 2.0},
			Vec3{1.0, 16.0, 1.0}, Vec2{1.0, 1.0},
		false);
	}
	
	//north
	if(shouldRenderFace(pos, 3)==true){
		setRenderBox(2.0, 0.01, 16.0, 14.0, 15.99, 17.0);
		tessellateBlockInWorld(tile, pos);
		setRenderBox(4.0, 0.01, 17.0, 12.0, 15.99, 18.0);
		tessellateBlockInWorld(tile, pos);
		
		face4(pos, 
			Vec3{2.0, 16.0, 16.0}, Vec2{0.0, 0.0},
			Vec3{4.0, 16.0, 16.0}, Vec2{2.0, 0.0},
			Vec3{4.0, 16.0, 17.0}, Vec2{2.0, 1.0},
			Vec3{2.0, 16.0, 17.0}, Vec2{0.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{12.0, 16.0, 16.0}, Vec2{0.0, 0.0},
			Vec3{14.0, 16.0, 16.0}, Vec2{2.0, 0.0},
			Vec3{14.0, 16.0, 17.0}, Vec2{2.0, 1.0},
			Vec3{12.0, 16.0, 17.0}, Vec2{0.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{4.0, 16.0, 18.0}, Vec2{4.0, 0.0},
			Vec3{12.0, 16.0, 18.0}, Vec2{12.0, 1.0},
			Vec3{12.0, 16.0, 17.0}, Vec2{12.0, 1.0},
			Vec3{4.0, 16.0, 17.0}, Vec2{4.0, 0.0},
		false);
		
		face4(pos, 
			Vec3{4.0, 16.0, 17.0}, Vec2{4.0, 1.0},
			Vec3{12.0, 16.0, 17.0}, Vec2{12.0, 2.0},
			Vec3{12.0, 16.0, 16.0}, Vec2{12.0, 2.0},
			Vec3{4.0, 16.0, 16.0}, Vec2{4.0, 1.0},
		false);
		
		face4(pos, 
			Vec3{1.0, 16.0, 15.0}, Vec2{1.0, 1.0},
			Vec3{15.0, 16.0, 15.0}, Vec2{15.0, 2.0},
			Vec3{15.0, 16.0, 16.0}, Vec2{15.0, 2.0},
			Vec3{1.0, 16.0, 16.0}, Vec2{1.0, 1.0},
		false);
	}
	
	
	// top
	face4(pos, 
		Vec3{1.0, 16.0, 1.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 16.0, 1.0}, Vec2{15.0, 1.0},
		Vec3{15.0, 16.0, 15.0}, Vec2{15.0, 15.0},
		Vec3{1.0, 16.0, 15.0}, Vec2{1.0, 15.0},
	false);
	
	// bottom
	face4(pos, 
		Vec3{1.0, 0.0, 1.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 0.0, 1.0}, Vec2{15.0, 1.0},
		Vec3{15.0, 0.0, 15.0}, Vec2{15.0, 15.0},
		Vec3{1.0, 0.0, 15.0}, Vec2{1.0, 15.0},
	false);
}

void TileTessellator::renderSideLog(int data, Tile* tile, TilePos const& pos){
	setRotatedBox( data, 0.01, 0.0, 0.0, 15.99, 16.0, 16.0);
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 2.0, -1.0, 15.99, 14.0, 0.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 4.0, -2.0, 15.99, 12.00, -0.01 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 2.0, 16.0, 15.99, 14.0, 17.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 4.0, 17.0, 15.99, 12.0, 18.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, -1.0, 2.0, 15.99, 0.0, 14.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, -2.0, 4.0, 15.99, -1.0, 12.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 16.0, 2.0, 15.99, 17.00, 14.0 );
	tessellateBlockInWorld( tile, pos );
	setRotatedBox( data, 0.01, 17.0, 4.0, 15.99, 18.0, 12.0 );
	tessellateBlockInWorld( tile, pos );
	
	forcedUV = tile->getTexture(data, getData(pos));
	
	// top
	
	tess->color(255, 255, 255, 1.0);
	
	if(data == 2) data = 4;
	else if(data == 4) data = 2;
	
	setRotatedFace(data, pos, 
		Vec3{2.0, -1.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{4.0, -1.0, 16.0}, Vec2{2.0, 0.0},
		Vec3{4.0, 0.0, 16.0}, Vec2{2.0, 1.0},
		Vec3{2.0, 0.0, 16.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{12.0, -1.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{14.0, -1.0, 16.0}, Vec2{2.0, 0.0},
		Vec3{14.0, 0.0, 16.0}, Vec2{2.0, 1.0},
		Vec3{12.0, 0.0, 16.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{2.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 16.0, 16.0}, Vec2{2.0, 0.0},
		Vec3{4.0, 17.0, 16.0}, Vec2{2.0, 1.0},
		Vec3{2.0, 17.0, 16.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{12.0, 16.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{14.0, 16.0, 16.0}, Vec2{2.0, 0.0},
		Vec3{14.0, 17.0, 16.0}, Vec2{2.0, 1.0},
		Vec3{12.0, 17.0, 16.0}, Vec2{0.0, 1.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 2.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{-1.0, 4.0, 16.0}, Vec2{0.0, 2.0},
		Vec3{0.0, 4.0, 16.0}, Vec2{1.0, 2.0},
		Vec3{0.0, 2.0, 16.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 12.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{-1.0, 14.0, 16.0}, Vec2{0.0, 2.0},
		Vec3{0.0, 14.0, 16.0}, Vec2{1.0, 2.0},
		Vec3{0.0, 12.0, 16.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{16.0, 2.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 4.0, 16.0}, Vec2{0.0, 2.0},
		Vec3{17.0, 4.0, 16.0}, Vec2{1.0, 2.0},
		Vec3{17.0, 2.0, 16.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{16.0, 12.0, 16.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 14.0, 16.0}, Vec2{0.0, 2.0},
		Vec3{17.0, 14.0, 16.0}, Vec2{1.0, 2.0},
		Vec3{17.0, 12.0, 16.0}, Vec2{1.0, 0.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{4.0, -2.0, 16.0}, Vec2{4.0, 0.0},
		Vec3{12.0, -2.0, 16.0}, Vec2{12.0, 1.0},
		Vec3{12.0, -1.0, 16.0}, Vec2{12.0, 1.0},
		Vec3{4.0, -1.0, 16.0}, Vec2{4.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{4.0, 18.0, 16.0}, Vec2{4.0, 0.0},
		Vec3{12.0, 18.0, 16.0}, Vec2{12.0, 1.0},
		Vec3{12.0, 17.0, 16.0}, Vec2{12.0, 1.0},
		Vec3{4.0, 17.0, 16.0}, Vec2{4.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-2.0, 4.0, 16.0}, Vec2{0.0, 4.0},
		Vec3{-2.0, 12.0, 16.0}, Vec2{1.0, 12.0},
		Vec3{-1.0, 12.0, 16.0}, Vec2{1.0, 12.0},
		Vec3{-1.0, 4.0, 16.0}, Vec2{0.0, 4.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{18.0, 4.0, 16.0}, Vec2{0.0, 4.0},
		Vec3{18.0, 12.0, 16.0}, Vec2{1.0, 12.0},
		Vec3{17.0, 12.0, 16.0}, Vec2{1.0, 12.0},
		Vec3{17.0, 4.0, 16.0}, Vec2{0.0, 4.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{4.0, -1.0, 16.0}, Vec2{4.0, 1.0},
		Vec3{12.0, -1.0, 16.0}, Vec2{12.0, 2.0},
		Vec3{12.0, 0.0, 16.0}, Vec2{12.0, 2.0},
		Vec3{4.0, 0.0, 16.0}, Vec2{4.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{4.0, 17.0, 16.0}, Vec2{4.0, 1.0},
		Vec3{12.0, 17.0, 16.0}, Vec2{12.0, 2.0},
		Vec3{12.0, 16.0, 16.0}, Vec2{12.0, 2.0},
		Vec3{4.0, 16.0, 16.0}, Vec2{4.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 4.0, 16.0}, Vec2{1.0, 4.0},
		Vec3{-1.0, 12.0, 16.0}, Vec2{2.0, 12.0},
		Vec3{0.0, 12.0, 16.0}, Vec2{2.0, 12.0},
		Vec3{0.0, 4.0, 16.0}, Vec2{1.0, 4.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{17.0, 4.0, 16.0}, Vec2{1.0, 4.0},
		Vec3{17.0, 12.0, 16.0}, Vec2{2.0, 12.0},
		Vec3{16.0, 12.0, 16.0}, Vec2{2.0, 12.0},
		Vec3{16.0, 4.0, 16.0}, Vec2{1.0, 4.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{1.0, 0.0, 16.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 0.0, 16.0}, Vec2{15.0, 2.0},
		Vec3{15.0, 1.0, 16.0}, Vec2{15.0, 2.0},
		Vec3{1.0, 1.0, 16.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{1.0, 15.0, 16.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 15.0, 16.0}, Vec2{15.0, 2.0},
		Vec3{15.0, 16.0, 16.0}, Vec2{15.0, 2.0},
		Vec3{1.0, 16.0, 16.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 16.0}, Vec2{1.0, 1.0},
		Vec3{0.0, 15.0, 16.0}, Vec2{2.0, 15.0},
		Vec3{1.0, 15.0, 16.0}, Vec2{2.0, 15.0},
		Vec3{1.0, 1.0, 16.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{15.0, 1.0, 16.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 15.0, 16.0}, Vec2{2.0, 15.0},
		Vec3{16.0, 15.0, 16.0}, Vec2{2.0, 15.0},
		Vec3{16.0, 1.0, 16.0}, Vec2{1.0, 1.0},
	false);
	
	// bottom
	
	setRotatedFace(data, pos, 
		Vec3{2.0, -1.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{4.0, -1.0, 0.0}, Vec2{2.0, 0.0},
		Vec3{4.0, 0.0, 0.0}, Vec2{2.0, 1.0},
		Vec3{2.0, 0.0, 0.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{12.0, -1.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{14.0, -1.0, 0.0}, Vec2{2.0, 0.0},
		Vec3{14.0, 0.0, 0.0}, Vec2{2.0, 1.0},
		Vec3{12.0, 0.0, 0.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{2.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{4.0, 16.0, 0.0}, Vec2{2.0, 0.0},
		Vec3{4.0, 17.0, 0.0}, Vec2{2.0, 1.0},
		Vec3{2.0, 17.0, 0.0}, Vec2{0.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{12.0, 16.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{14.0, 16.0, 0.0}, Vec2{2.0, 0.0},
		Vec3{14.0, 17.0, 0.0}, Vec2{2.0, 1.0},
		Vec3{12.0, 17.0, 0.0}, Vec2{0.0, 1.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 2.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{-1.0, 4.0, 0.0}, Vec2{0.0, 2.0},
		Vec3{0.0, 4.0, 0.0}, Vec2{1.0, 2.0},
		Vec3{0.0, 2.0, 0.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 12.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{-1.0, 14.0, 0.0}, Vec2{0.0, 2.0},
		Vec3{0.0, 14.0, 0.0}, Vec2{1.0, 2.0},
		Vec3{0.0, 12.0, 0.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{16.0, 2.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 4.0, 0.0}, Vec2{0.0, 2.0},
		Vec3{17.0, 4.0, 0.0}, Vec2{1.0, 2.0},
		Vec3{17.0, 2.0, 0.0}, Vec2{1.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{16.0, 12.0, 0.0}, Vec2{0.0, 0.0},
		Vec3{16.0, 14.0, 0.0}, Vec2{0.0, 2.0},
		Vec3{17.0, 14.0, 0.0}, Vec2{1.0, 2.0},
		Vec3{17.0, 12.0, 0.0}, Vec2{1.0, 0.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{4.0, -2.0, 0.0}, Vec2{4.0, 0.0},
		Vec3{12.0, -2.0, 0.0}, Vec2{12.0, 1.0},
		Vec3{12.0, -1.0, 0.0}, Vec2{12.0, 1.0},
		Vec3{4.0, -1.0, 0.0}, Vec2{4.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{4.0, 18.0, 0.0}, Vec2{4.0, 0.0},
		Vec3{12.0, 18.0, 0.0}, Vec2{12.0, 1.0},
		Vec3{12.0, 17.0, 0.0}, Vec2{12.0, 1.0},
		Vec3{4.0, 17.0, 0.0}, Vec2{4.0, 0.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-2.0, 4.0, 0.0}, Vec2{0.0, 4.0},
		Vec3{-2.0, 12.0, 0.0}, Vec2{1.0, 12.0},
		Vec3{-1.0, 12.0, 0.0}, Vec2{1.0, 12.0},
		Vec3{-1.0, 4.0, 0.0}, Vec2{0.0, 4.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{18.0, 4.0, 0.0}, Vec2{0.0, 4.0},
		Vec3{18.0, 12.0, 0.0}, Vec2{1.0, 12.0},
		Vec3{17.0, 12.0, 0.0}, Vec2{1.0, 12.0},
		Vec3{17.0, 4.0, 0.0}, Vec2{0.0, 4.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{4.0, -1.0, 0.0}, Vec2{4.0, 1.0},
		Vec3{12.0, -1.0, 0.0}, Vec2{12.0, 2.0},
		Vec3{12.0, 0.0, 0.0}, Vec2{12.0, 2.0},
		Vec3{4.0, 0.0, 0.0}, Vec2{4.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{4.0, 17.0, 0.0}, Vec2{4.0, 1.0},
		Vec3{12.0, 17.0, 0.0}, Vec2{12.0, 2.0},
		Vec3{12.0, 16.0, 0.0}, Vec2{12.0, 2.0},
		Vec3{4.0, 16.0, 0.0}, Vec2{4.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{-1.0, 4.0, 0.0}, Vec2{1.0, 4.0},
		Vec3{-1.0, 12.0, 0.0}, Vec2{2.0, 12.0},
		Vec3{0.0, 12.0, 0.0}, Vec2{2.0, 12.0},
		Vec3{0.0, 4.0, 0.0}, Vec2{1.0, 4.0},
	false);
	
	setRotatedFace(data, pos,
		Vec3{17.0, 4.0, 0.0}, Vec2{1.0, 4.0},
		Vec3{17.0, 12.0, 0.0}, Vec2{2.0, 12.0},
		Vec3{16.0, 12.0, 0.0}, Vec2{2.0, 12.0},
		Vec3{16.0, 4.0, 0.0}, Vec2{1.0, 4.0},
	false);
	
	//
	
	setRotatedFace(data, pos, 
		Vec3{1.0, 0.0, 0.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 0.0, 0.0}, Vec2{15.0, 2.0},
		Vec3{15.0, 1.0, 0.0}, Vec2{15.0, 2.0},
		Vec3{1.0, 1.0, 0.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{1.0, 15.0, 0.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 15.0, 0.0}, Vec2{15.0, 2.0},
		Vec3{15.0, 16.0, 0.0}, Vec2{15.0, 2.0},
		Vec3{1.0, 16.0, 0.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{0.0, 1.0, 0.0}, Vec2{1.0, 1.0},
		Vec3{0.0, 15.0, 0.0}, Vec2{2.0, 15.0},
		Vec3{1.0, 15.0, 0.0}, Vec2{2.0, 15.0},
		Vec3{1.0, 1.0, 0.0}, Vec2{1.0, 1.0},
	false);
	
	setRotatedFace(data, pos, 
		Vec3{15.0, 1.0, 0.0}, Vec2{1.0, 1.0},
		Vec3{15.0, 15.0, 0.0}, Vec2{2.0, 15.0},
		Vec3{16.0, 15.0, 0.0}, Vec2{2.0, 15.0},
		Vec3{16.0, 1.0, 0.0}, Vec2{1.0, 1.0},
	false);
}

bool TileTessellator::tessellateLogInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	
	if(tile->id == 162){
		switch(data){
			case 4: //Acacia NS
				renderSideLog(2, tile, pos);
			break;
			case 5: //Dark Oak NS
				renderSideLog(2, tile, pos);
			break;
			case 8: // EW
				renderSideLog(4, tile, pos);
			break;
			case 9:
				renderSideLog(4, tile, pos);
			break;
			default:
				renderNormalLog(tile, pos);
		}
	}
	if(tile->id == 17){
		switch(data){
			case 4:
				renderSideLog(2, tile, pos);
			break;
			case 5:
				renderSideLog(2, tile, pos);
			break;
			case 6:
				renderSideLog(2, tile, pos);
			break;
			case 7:
				renderSideLog(2, tile, pos);
			break;
			case 8:
				renderSideLog(4, tile, pos);
			break;
			case 9:
				renderSideLog(4, tile, pos);
			break;
			case 10:
				renderSideLog(4, tile, pos);
			break;
			case 11:
				renderSideLog(4, tile, pos);
			break;
			default:
				renderNormalLog(tile, pos);
		}
	}
	
	return true;
}
