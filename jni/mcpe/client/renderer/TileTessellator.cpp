#include "mcpe/client/renderer/TileTessellator.h"

bool TileTessellator::shouldRenderFace(TilePos const& pos, int side){
	int x = pos.x, y = pos.y, z = pos.z;
	switch(side){
		case 0:{
			if( getTile(x, y - 1, z) == NULL || Tile::solid[getId(x, y - 1, z)] == false ){
				return true;
			}
		} break;
		case 1:{
			if( getTile(x, y + 1, z) == NULL || Tile::solid[getId(x, y + 1, z)] == false ){
				return true;
			}
		} break;
		case 2:{
			if( getTile(x, y, z - 1) == NULL || Tile::solid[getId(x, y, z - 1)] == false ){
				return true;
			}
		} break;
		case 3:{
			if( getTile(x, y, z + 1) == NULL || Tile::solid[getId(x, y, z + 1)] == false ){
				return true;
			}
		} break;
		case 4:{
			if( getTile(x - 1, y, z) == NULL || Tile::solid[getId(x - 1, y, z)] == false ){
				return true;
			}
		} break;
		case 5:{
			if( getTile(x + 1, y, z) == NULL || Tile::solid[getId(x + 1, y, z)] == false ){
				return true;
			}
		} break;
	}
}

Tile* TileTessellator::getTile(int x, int y, int z) {
	return tileSource->getTilePtr(x, y, z);
}

Tile* TileTessellator::getTile(TilePos const& pos) {
	return tileSource->getTilePtr(pos.x, pos.y, pos.z);
}

Tile* TileTessellator::getTile(Vec3 pos) {
	return tileSource->getTilePtr(pos.x, pos.y, pos.z);
}

int TileTessellator::getId(int x, int y, int z) {
	return tileSource->getTilePtr(x, y, z)->id;
}

int TileTessellator::getId(TilePos const& pos) {
	return tileSource->getTilePtr(pos.x, pos.y, pos.z)->id;
}

int TileTessellator::getId(Vec3 pos) {
	return tileSource->getTilePtr(pos.x, pos.y, pos.z)->id;
}

void TileTessellator::setRenderBounds(float x1, float y1, float z1, float x2, float y2, float z2) {
	bounds = AABB(x1, y1, z1, x2, y2, z2);
}

void TileTessellator::setRenderBounds(Vec3 min, Vec3 max) {
	bounds = AABB(min.x, min.y, min.z, max.x, max.y, max.z);
}

void TileTessellator::setRenderBox(float x1, float y1, float z1, float x2, float y2, float z2){ //simplify some renders...
	bounds = AABB(x1 / 16.0, y1 / 16.0, z1 / 16.0, x2 / 16.0, y2 / 16.0, z2 / 16.0);
}

void TileTessellator::setRenderBox(Vec3 min, Vec3 max){ //simplify some renders...
	bounds = AABB(min.x / 16.0, min.y / 16.0, min.z / 16.0, max.x / 16.0, max.y / 16.0, max.z / 16.0);
}

void TileTessellator::vertexBound(TilePos const& pos, Vec3 v1, Vec2 uv1, Vec3 v2, Vec2 uv2, Vec3 v3, Vec2 uv3, Vec3 v4, Vec2 uv4, Vec3 v5, Vec2 uv5, Vec3 v6, Vec2 uv6, Vec3 v7, Vec2 uv7, Vec3 v8, Vec2 uv8, bool doubleSided){
	face4(pos, v1, uv1, v2, uv2, v3, uv3, v4, uv4, doubleSided);
	face4(pos, v1, uv1, v2, uv2, v6, uv6, v5, uv5, doubleSided);
	face4(pos, v3, uv3, v4, uv4, v8, uv8, v7, uv7, doubleSided);
	face4(pos, v2, uv2, v3, uv3, v7, uv7, v6, uv6, doubleSided);
	face4(pos, v4, uv4, v1, uv1, v5, uv5, v8, uv8, doubleSided);
	face4(pos, v5, uv5, v6, uv6, v7, uv7, v8, uv8, doubleSided);
}

void TileTessellator::face4(const TilePos& pos, Vec3 v1, Vec3 v2, Vec3 v3, Vec3 v4, bool doubleSided) {
	int x = pos.x, y = pos.y, z = pos.z;
	
	tess->vertexUV(x + v1.x / 16.0, y + v1.y / 16.0, z + v1.z / 16.0, forcedUV.minU, forcedUV.minV);
	tess->vertexUV(x + v2.x / 16.0, y + v2.y / 16.0, z + v2.z / 16.0, forcedUV.maxU, forcedUV.minV);
	tess->vertexUV(x + v3.x / 16.0, y + v3.y / 16.0, z + v3.z / 16.0, forcedUV.maxU, forcedUV.maxV);
	tess->vertexUV(x + v4.x / 16.0, y + v4.y / 16.0, z + v4.z / 16.0, forcedUV.minU, forcedUV.maxV);
	
	if(doubleSided) {
		tess->vertexUV(x + v3.x / 16.0, y + v3.y / 16.0, z + v3.z / 16.0, forcedUV.minU, forcedUV.minV);
		tess->vertexUV(x + v2.x / 16.0, y + v2.y / 16.0, z + v2.z / 16.0, forcedUV.maxU, forcedUV.minV);
		tess->vertexUV(x + v1.x / 16.0, y + v1.y / 16.0, z + v1.z / 16.0, forcedUV.maxU, forcedUV.maxV);
		tess->vertexUV(x + v4.x / 16.0, y + v4.y / 16.0, z + v4.z / 16.0, forcedUV.minU, forcedUV.maxV);
	}
}

void TileTessellator::face4(const TilePos& pos, Vec3 v1, Vec2 uv1, Vec3 v2, Vec2 uv2, Vec3 v3, Vec2 uv3, Vec3 v4, Vec2 uv4, bool doubleSided) {
	int x = pos.x, y = pos.y, z = pos.z;
	
	tess->vertexUV(x + v1.x / 16.0, y + v1.y / 16.0, z + v1.z / 16.0, forcedUV.minU + uv1.x / 512.0, forcedUV.minV + uv1.y / 256.0);
	tess->vertexUV(x + v2.x / 16.0, y + v2.y / 16.0, z + v2.z / 16.0, forcedUV.minU + uv2.x / 512.0, forcedUV.minV + uv2.y / 256.0);
	tess->vertexUV(x + v3.x / 16.0, y + v3.y / 16.0, z + v3.z / 16.0, forcedUV.minU + uv3.x / 512.0, forcedUV.minV + uv3.y / 256.0);
	tess->vertexUV(x + v4.x / 16.0, y + v4.y / 16.0, z + v4.z / 16.0, forcedUV.minU + uv4.x / 512.0, forcedUV.minV + uv4.y / 256.0);
	
	if(doubleSided) {
		tess->vertexUV(x + v3.x / 16.0, y + v3.y / 16.0, z + v3.z / 16.0, forcedUV.minU + uv3.x / 512.0, forcedUV.minV + uv3.y / 256.0);
		tess->vertexUV(x + v2.x / 16.0, y + v2.y / 16.0, z + v2.z / 16.0, forcedUV.minU + uv2.x / 512.0, forcedUV.minV + uv2.y / 256.0);
		tess->vertexUV(x + v1.x / 16.0, y + v1.y / 16.0, z + v1.z / 16.0, forcedUV.minU + uv1.x / 512.0, forcedUV.minV + uv1.y / 256.0);
		tess->vertexUV(x + v4.x / 16.0, y + v4.y / 16.0, z + v4.z / 16.0, forcedUV.minU + uv4.x / 512.0, forcedUV.minV + uv4.y / 256.0);
	}
}

void TileTessellator::setRotatedFace(int data, const TilePos& pos, Vec3 v1, Vec2 uv1, Vec3 v2, Vec2 uv2, Vec3 v3, Vec2 uv3, Vec3 v4, Vec2 uv4, bool doubleSided) {
	Vec3 temp1 = v1, temp2 = v2, temp3 = v3, temp4 = v4;
	switch(data){
		case 2: { //South z - 1
			v1 = v1;
			v2 = v2;
			v3 = v3;
			v4 = v4;
		} break;
		case 3: { //North z + 1
			v1.x = temp3.x;
			v2.x = temp4.x;
			v3.x = temp1.x;
			v4.x = temp2.x;
			v1.z = 16.0 - temp2.z;
			v2.z = 16.0 - temp1.z;
			v3.z = 16.0 - temp4.z;
			v4.z = 16.0 - temp3.z;
		} break;
		case 4: { //East x - 1
			v1.x = temp1.z;
			v2.x = temp2.z;
			v3.x = temp3.z;
			v4.x = temp4.z;
			v1.z = 16.0 - temp2.x;
			v2.z = 16.0 - temp1.x;
			v3.z = 16.0 - temp4.x;
			v4.z = 16.0 - temp3.x;
		} break;
		case 5: { //West x + 1
			v1.x = 16.0 - temp2.z;
			v2.x = 16.0 - temp1.z;
			v3.x = 16.0 - temp4.z;
			v4.x = 16.0 - temp3.z;
			v1.z = temp1.x;
			v2.z = temp2.x;
			v3.z = temp3.x;
			v4.z = temp4.x;
		} break;
	}
	face4(pos, v1, uv1, v2, uv2, v3, uv3, v4, uv4, doubleSided);
}

void TileTessellator::setRotatedBounds(int data, float x1, float y1, float z1, float x2, float y2, float z2) {
	float temp = x1, temp1 = y1, temp2 = z1, temp3 = x2, temp4 = y2, temp5 = z2;
	switch (data) {
		case 2: { //South z - 1
			x1 = x1;
			y1 = y1;
			z1 = z1;
			x2 = x2;
			y2 = y2;
			z2 = z2;
		} break;
		case 3: { //North z + 1
			x1 = 1.0 - temp3;
			y1 = y1;
			z1 = 1.0 - temp5;
			x2 = 1.0 - temp;
			y2 = y2;
			z2 = 1.0 - temp2;
		} break;
		case 4: { //East x - 1
			x1 = temp2;
			y1 = y1;
			z1 = temp;
			x2 = temp5;
			y2 = y2;
			z2 = temp3;
		} break;
		case 5: { //West x + 1
			x1 = 1.0 - temp5;
			y1 = y1;
			z1 = temp;
			x2 = 1.0 - temp2;
			y2 = y2;
			z2 = temp3;
		} break;
	}
	setRenderBounds(x1, y1, z1, x2, y2, z2);
}

void TileTessellator::setRotatedBox(int data, float x1, float y1, float z1, float x2, float y2, float z2) {
	float temp = x1, temp1 = y1, temp2 = z1, temp3 = x2, temp4 = y2, temp5 = z2;
	switch (data) {
		case 2: { //South z - 1
			x1 = x1;
			y1 = y1;
			z1 = z1;
			x2 = x2;
			y2 = y2;
			z2 = z2;
		} break;
		case 3: { //North z + 1
			x1 = 16.0 - temp3;
			y1 = y1;
			z1 = 16.0 - temp5;
			x2 = 16.0 - temp;
			y2 = y2;
			z2 = 16.0 - temp2;
		} break;
		case 4: { //East x - 1
			x1 = temp2;
			y1 = y1;
			z1 = 16.0 - temp;
			x2 = temp5;
			y2 = y2;
			z2 = 16.0 - temp3;
		} break;
		case 5: { //West x + 1
			x1 = 16.0 - temp5;
			y1 = y1;
			z1 = temp;
			x2 = 16.0 - temp2;
			y2 = y2;
			z2 = temp3;
		} break;
	}
	setRenderBox(x1, y1, z1, x2, y2, z2);
}

void TileTessellator::setRotatedVertex(int data, TilePos const& pos, Vec3 v1, Vec3 v2, Vec3 v3, Vec3 v4, Vec3 v5, Vec3 v6, Vec3 v7, Vec3 v8, std::vector<float> tex){
	//redo...
	//vertexBound(pos, v1, v2, v3, v4, v5, v6, v7, v8, tex, true);
}
