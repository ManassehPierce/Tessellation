#pragma once

#include "TextureFile.h"

// Size : 32
class TextureUVCoordinateSet
{
public:
	float minU;		// 0
	float minV;		// 4
	float maxU;			// 8
	float maxV;			// 12
	float width;		// 16
	float height;		// 20
	int i1;				// 24
	TextureFile type;	// 28
	//int type;

public:
	TextureUVCoordinateSet(float, float, float, float, float, float, int, TextureFile);
	TextureUVCoordinateSet();
	void fix();
	
	float getInterpolatedU(float);
	float getInterpolatedV(float);
	
	void setUV(float, float, float, float);
};
