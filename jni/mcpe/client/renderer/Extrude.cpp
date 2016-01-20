#include "mcpe/client/renderer/TileTessellator.h"

void TileTessellator::extrude(int side, TilePos const& pos, Vec2 v1, Vec2 v2, Vec2 v3, Vec2 v4, float distance) {
	switch(side){
		
		case 0: { //Bottom y - 1
			face4(pos, 
			Vec3{v1.x, - distance, v1.y}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, - distance, v2.y}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, - distance, v3.y}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, - distance, v4.y}, Vec2{16.0 - v4.x, 16.0 - v4.y}, true);
			
			face4(pos, 
			Vec3{v1.x, 0.0, v1.y}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, - distance, v1.y}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, - distance, v2.y}, Vec2{16.0 - v2.x, 16.0 - v1.y - distance}, 
			Vec3{v2.x, 0.0, v2.y}, Vec2{16.0 - v1.x, 16.0 - v1.y - distance}, true);
			
			face4(pos, 
			Vec3{v2.x, 0.0, v2.y}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, - distance, v2.y}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, - distance, v3.y}, Vec2{16.0 - v3.x, 16.0 - v2.y - distance}, 
			Vec3{v3.x, 0.0, v3.y}, Vec2{16.0 - v2.x, 16.0 - v2.y - distance}, true);
			
			face4(pos, 
			Vec3{v3.x, 0.0, v3.y}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, - distance, v3.y}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, - distance, v4.y}, Vec2{16.0 - v4.x, 16.0 - v3.y - distance}, 
			Vec3{v4.x, 0.0, v4.y}, Vec2{16.0 - v3.x, 16.0 - v3.y - distance}, true);
			
			face4(pos, 
			Vec3{v4.x, 0.0, v4.y}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, - distance, v4.y}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, - distance, v1.y}, Vec2{16.0 - v1.x, 16.0 - v4.y - distance}, 
			Vec3{v1.x, 0.0, v1.y}, Vec2{16.0 - v4.x, 16.0 - v4.y - distance}, true);
			
		} break;
		case 1: { //Top y + 1
			face4(pos, 
			Vec3{v1.x, 16.0 + distance, v1.y}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, 16.0 + distance, v2.y}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, 16.0 + distance, v3.y}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, 16.0 + distance, v4.y}, Vec2{16.0 - v4.x, 16.0 - v4.y}, true);
			
			face4(pos, 
			Vec3{v1.x, 16.0, v1.y}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, 16.0 + distance, v1.y}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, 16.0 + distance, v2.y}, Vec2{16.0 - v2.x, 16.0 - v1.y - distance}, 
			Vec3{v2.x, 16.0, v2.y}, Vec2{16.0 - v1.x, 16.0 - v1.y - distance}, true);
			
			face4(pos, 
			Vec3{v2.x, 16.0, v2.y}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, 16.0 + distance, v2.y}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, 16.0 + distance, v3.y}, Vec2{16.0 - v3.x, 16.0 - v2.y - distance}, 
			Vec3{v3.x, 16.0, v3.y}, Vec2{16.0 - v2.x, 16.0 - v2.y - distance}, true);
			
			face4(pos, 
			Vec3{v3.x, 16.0, v3.y}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, 16.0 + distance, v3.y}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, 16.0 + distance, v4.y}, Vec2{16.0 - v4.x, 16.0 - v3.y - distance}, 
			Vec3{v4.x, 16.0, v4.y}, Vec2{16.0 - v3.x, 16.0 - v3.y - distance}, true);
			
			face4(pos, 
			Vec3{v4.x, 16.0, v4.y}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, 16.0 + distance, v4.y}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, 16.0 + distance, v1.y}, Vec2{16.0 - v1.x, 16.0 - v4.y - distance}, 
			Vec3{v1.x, 16.0, v1.y}, Vec2{16.0 - v4.x, 16.0 - v4.y - distance}, true);
		} break;
		case 2: { //South z - 1
			face4(pos, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			face4(pos, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			true);
			
			face4(pos,
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			true);
			
			face4(pos, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			true);
			
			face4(pos, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
		} break;
		case 3: { //North z + 1
			setRotatedFace(3, pos, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			setRotatedFace(3, pos, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			true);
			
			setRotatedFace(3, pos,
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			true);
			
			setRotatedFace(3, pos, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			true);
			
			setRotatedFace(3, pos, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			/*face4(pos, 
			Vec3{v1.x, v1.y, 16.0 + distance}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, 16.0 + distance}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, 16.0 + distance}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, 16.0 + distance}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			face4(pos, 
			Vec3{v1.x, v1.y, 16.0}, Vec2{0.0, 0.0}, 
			Vec3{v1.x, v1.y, 16.0 + distance}, Vec2{16.0, 0.0},
			Vec3{v2.x, v2.y, 16.0 + distance}, Vec2{16.0, 16.0}, 
			Vec3{v2.x, v2.y, 16.0}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{v2.x, v2.y, 16.0}, Vec2{0.0, 0.0}, 
			Vec3{v2.x, v2.y, 16.0 + distance}, Vec2{16.0, 0.0}, 
			Vec3{v3.x, v3.y, 16.0 + distance}, Vec2{16.0, 16.0}, 
			Vec3{v3.x, v3.y, 16.0}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{v3.x, v3.y, 16.0}, Vec2{0.0, 0.0}, 
			Vec3{v3.x, v3.y, 16.0 + distance}, Vec2{16.0, 0.0}, 
			Vec3{v4.x, v4.y, 16.0 + distance}, Vec2{16.0, 16.0}, 
			Vec3{v4.x, v4.y, 16.0}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{v4.x, v4.y, 16.0}, Vec2{0.0, 0.0}, 
			Vec3{v4.x, v4.y, 16.0 + distance}, Vec2{16.0, 0.0}, 
			Vec3{v1.x, v1.y, 16.0 + distance}, Vec2{16.0, 16.0},
			Vec3{v1.x, v1.y, 16.0}, Vec2{0.0, 16.0}, 
			true);*/
		} break;
		case 4: { //East x - 1
			setRotatedFace(4, pos, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			setRotatedFace(4, pos, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			true);
			
			setRotatedFace(4, pos,
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			true);
			
			setRotatedFace(4, pos, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			true);
			
			setRotatedFace(4, pos, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			/*face4(pos, 
			Vec3{- distance, v1.y, v1.x}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{- distance, v2.y, v2.x}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{- distance, v3.y, v3.x}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{- distance, v4.y, v4.x}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			face4(pos,
			Vec3{0.0, v1.y, v1.x}, Vec2{0.0, 0.0}, 
			Vec3{- distance, v1.y, v1.x}, Vec2{16.0, 0.0}, 
			Vec3{- distance, v2.y, v2.x}, Vec2{16.0, 16.0}, 
			Vec3{0.0, v2.y, v2.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{0.0, v2.y, v2.x}, Vec2{0.0, 0.0}, 
			Vec3{- distance, v2.y, v2.x}, Vec2{16.0, 0.0}, 
			Vec3{- distance, v3.y, v3.x}, Vec2{16.0, 16.0}, 
			Vec3{0.0, v3.y, v3.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{0.0, v3.y, v3.x}, Vec2{0.0, 0.0}, 
			Vec3{- distance, v3.y, v3.x}, Vec2{16.0, 0.0}, 
			Vec3{- distance, v4.y, v4.x}, Vec2{16.0, 16.0}, 
			Vec3{0.0, v4.y, v4.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{0.0, v4.y, v4.x}, Vec2{0.0, 0.0}, 
			Vec3{- distance, v4.y, v4.x}, Vec2{16.0, 0.0}, 
			Vec3{- distance, v1.y, v1.x}, Vec2{16.0, 16.0}, 
			Vec3{0.0, v1.y, v1.x}, Vec2{0.0, 16.0}, 
			true);*/
		} break;
		case 5: { //West x + 1
			setRotatedFace(5, pos, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			setRotatedFace(5, pos, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v2.x, 16.0 - v1.y}, 
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			true);
			
			setRotatedFace(5, pos,
			Vec3{v2.x, v2.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{v2.x, v2.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v3.x, 16.0 - v2.y}, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			true);
			
			setRotatedFace(5, pos, 
			Vec3{v3.x, v3.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{v3.x, v3.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v4.x, 16.0 - v3.y}, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			true);
			
			setRotatedFace(5, pos, 
			Vec3{v4.x, v4.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			Vec3{v4.x, v4.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, - distance}, Vec2{16.0 - v1.x, 16.0 - v4.y}, 
			Vec3{v1.x, v1.y, 0.0}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			/*face4(pos, 
			Vec3{16.0 + distance, v1.y, v1.x}, Vec2{16.0 - v1.x, 16.0 - v1.y}, 
			Vec3{16.0 + distance, v2.y, v2.x}, Vec2{16.0 - v2.x, 16.0 - v2.y}, 
			Vec3{16.0 + distance, v3.y, v3.x}, Vec2{16.0 - v3.x, 16.0 - v3.y}, 
			Vec3{16.0 + distance, v4.y, v4.x}, Vec2{16.0 - v4.x, 16.0 - v4.y}, 
			true);
			
			face4(pos, 
			Vec3{16.0, v1.y, v1.x}, Vec2{0.0, 0.0}, 
			Vec3{16.0 + distance, v1.y, v1.x}, Vec2{16.0, 0.0}, 
			Vec3{16.0 + distance, v2.y, v2.x}, Vec2{16.0, 16.0}, 
			Vec3{16.0, v2.y, v2.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{16.0, v2.y, v2.x}, Vec2{0.0, 0.0}, 
			Vec3{16.0 + distance, v2.y, v2.x}, Vec2{16.0, 0.0}, 
			Vec3{16.0 + distance, v3.y, v3.x}, Vec2{16.0, 16.0}, 
			Vec3{16.0, v3.y, v3.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{16.0, v3.y, v3.x}, Vec2{0.0, 0.0}, 
			Vec3{16.0 + distance, v3.y, v3.x}, Vec2{16.0, 0.0}, 
			Vec3{16.0 + distance, v4.y, v4.x}, Vec2{16.0, 16.0}, 
			Vec3{16.0, v4.y, v4.x}, Vec2{0.0, 16.0}, 
			true);
			
			face4(pos, 
			Vec3{16.0, v4.y, v4.x}, Vec2{0.0, 0.0}, 
			Vec3{16.0 + distance, v4.y, v4.x}, Vec2{16.0, 0.0}, 
			Vec3{16.0 + distance, v1.y, v1.x}, Vec2{16.0, 16.0}, 
			Vec3{16.0, v1.y, v1.x}, Vec2{0.0, 16.0}, 
			true);*/
		} break;
	}
}
