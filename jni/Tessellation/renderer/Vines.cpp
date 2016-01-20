#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::tessellateTVinesInWorld(Tile* tile, TilePos const& pos){
	int x = pos.x, y = pos.y, z = pos.z;
	int data = getData(pos);
	
	tess->color(tileSource->getGrassColor(pos));
	
	forcedUV = tile->getTextureUVCoordinateSet("vine", 0);
	
	switch(data){
		case 4: {
			face4(pos, 
				Vec3{0.0, 0.0, 0.5}, Vec2{0.0, 0.0},
				Vec3{16.0, 0.0, 0.5}, Vec2{16.0, 0.0},
				Vec3{16.0, 16.0, 0.5}, Vec2{16.0, 16.0},
				Vec3{0.0, 16.0, 0.5}, Vec2{0.0, 16.0},
			true);
			if( getId(x, y, z - 1) == 17 || getId(x, y, z - 1) == 162){
				face4(pos, 
					Vec3{2.0, 0.0, 1.5}, Vec2{2.0, 0.0},
					Vec3{14.0, 0.0, 1.5}, Vec2{14.0, 0.0},
					Vec3{14.0, 16.0, 1.5}, Vec2{14.0, 16.0},
					Vec3{2.0, 16.0, 1.5}, Vec2{2.0, 16.0},
				true);
				face4(pos, 
					Vec3{4.0, 0.0, 2.5}, Vec2{0.0, 0.0},
					Vec3{12.0, 0.0, 2.5}, Vec2{16.0, 0.0},
					Vec3{12.0, 16.0, 2.5}, Vec2{16.0, 16.0},
					Vec3{4.0, 16.0, 2.5}, Vec2{0.0, 16.0},
				true);
			}
		} break;
		case 8: {
			face4(pos, 
				Vec3{15.5, 0.0, 0.0}, Vec2{0.0, 0.0},
				Vec3{15.5, 0.0, 16.0}, Vec2{16.0, 0.0},
				Vec3{15.5, 16.0, 16.0}, Vec2{16.0, 16.0},
				Vec3{15.5, 16.0, 0.0}, Vec2{0.0, 16.0},
			true);
		} break;
		case 1: {
			face4(pos, 
				Vec3{0.0, 0.0, 15.5}, Vec2{0.0, 0.0},
				Vec3{16.0, 0.0, 15.5}, Vec2{16.0, 0.0},
				Vec3{16.0, 16.0, 15.5}, Vec2{16.0, 16.0},
				Vec3{0.0, 16.0, 15.5}, Vec2{0.0, 16.0},
			true);
			if( getId(x, y, z + 1) == 17 || getId(x, y, z + 1) == 162){
				face4(pos, 
					Vec3{2.0, 0.0, 14.5}, Vec2{2.0, 0.0},
					Vec3{14.0, 0.0, 14.5}, Vec2{14.0, 0.0},
					Vec3{14.0, 16.0, 14.5}, Vec2{14.0, 16.0},
					Vec3{2.0, 16.0, 14.5}, Vec2{2.0, 16.0},
				true);
				face4(pos, 
					Vec3{4.0, 0.0, 13.5}, Vec2{0.0, 0.0},
					Vec3{12.0, 0.0, 13.5}, Vec2{16.0, 0.0},
					Vec3{12.0, 16.0, 13.5}, Vec2{16.0, 16.0},
					Vec3{4.0, 16.0, 13.5}, Vec2{0.0, 16.0},
				true);
			}
		} break;
		case 2: {
			face4(pos, 
				Vec3{0.5, 0.0, 0.0}, Vec2{0.0, 0.0},
				Vec3{0.5, 0.0, 16.0}, Vec2{16.0, 0.0},
				Vec3{0.5, 16.0, 16.0}, Vec2{16.0, 16.0},
				Vec3{0.5, 16.0, 0.0}, Vec2{0.0, 16.0},
			true);
		} break;
	}
	
	if( Tile::solid[getId(x, y + 1, z)] == true){
		face4(pos, 
			Vec3{0.0, 15.5, 0.0}, Vec2{0.0, 0.0},
			Vec3{16.0, 15.5, 0.0}, Vec2{16.0, 0.0},
			Vec3{16.0, 15.5, 16.0}, Vec2{16.0, 16.0},
			Vec3{0.0, 15.5, 16.0}, Vec2{0.0, 16.0},
		true);
	}
	
	return true;
}
