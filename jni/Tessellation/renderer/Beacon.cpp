#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateBeaconInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	useForcedUV = true;
	
	forcedUV = tile->getTextureUVCoordinateSet("glass",0);
	
	setRenderBox(0.0, 0.0, 0.0, 16.0, 16.0, 16.0);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("obsidian",0);
	
	setRenderBox(2.0, 0.0, 2.0, 14.0, 3.0, 14.0);
	tessellateBlockInWorld(tile, pos);
	
	forcedUV = tile->getTextureUVCoordinateSet("beacon_tess",0);
	
	setRenderBox(3.0, 3.0, 3.0, 13.0, 13.0, 13.0);
	tessellateBlockInWorld(tile, pos);
	
	useForcedUV = false;
	
	if(tileSource->canSeeSky(pos)){
		tess->color(255, 255, 255, 1.0);
		
		forcedUV = tile->getTextureUVCoordinateSet("beacon_beam",0);
		
		face4(pos,
			Vec3{5.0, 5.0, 5.0}, 					Vec2{0.0, 0.0},
			Vec3{11.0, 5.0, 5.0}, 					Vec2{16.0, 0.0},
			Vec3{11.0, (128.0 - y) * 16.0, 5.0}, 	Vec2{16.0, 16.0},
			Vec3{5.0, (128.0 - y) * 16.0, 5.0}, 	Vec2{0.0, 16.0},
		true);
		
		face4(pos,
			Vec3{5.0, 5.0, 11.0}, 					Vec2{0.0, 0.0},
			Vec3{11.0, 5.0, 11.0}, 					Vec2{16.0, 0.0},
			Vec3{11.0, (128.0 - y) * 16.0, 11.0}, 	Vec2{16.0, 16.0},
			Vec3{5.0, (128.0 - y) * 16.0, 11.0}, 	Vec2{0.0, 16.0},
		true);
		
		face4(pos,
			Vec3{5.0, 5.0, 5.0}, 					Vec2{0.0, 0.0},
			Vec3{5.0, 5.0, 11.0}, 					Vec2{16.0, 0.0},
			Vec3{5.0, (128.0 - y) * 16.0, 11.0}, 	Vec2{16.0, 16.0},
			Vec3{5.0, (128.0 - y) * 16.0, 5.0}, 	Vec2{0.0, 16.0},
		true);
		
		face4(pos,
			Vec3{11.0, 5.0, 5.0}, 					Vec2{0.0, 0.0},
			Vec3{11.0, 5.0, 11.0}, 					Vec2{16.0, 0.0},
			Vec3{11.0, (128.0 - y) * 16.0, 11.0}, 	Vec2{16.0, 16.0},
			Vec3{11.0, (128.0 - y) * 16.0, 5.0}, 	Vec2{0.0, 16.0},
		true);
		
	}
	
	return true;
}
