#include "TextureUVCoordinateSet.h"

void TextureUVCoordinateSet::setUV(float minU, float minV, float maxU, float maxV){
	this->maxU = this->minU + (maxU / 512.0);
	this->maxV = this->minV + (maxV / 256.0);
	this->minU = this->minU + (minU / 512.0);
	this->minV = this->minV + (minV / 256.0);
}
