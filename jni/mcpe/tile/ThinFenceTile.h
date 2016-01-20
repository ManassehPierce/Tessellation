#pragma once

#include "Tile.h"

class ThinFenceTile : public Tile{
public:
	virtual void addCollisionShapes(TileSource&, int, int, int, AABB const*, std::vector<AABB, std::allocator<AABB> >&);
	virtual int getResource(Random*, int, int);
	virtual bool shouldRenderFace(TileSource*, int, int, int, signed char, AABB const&) const;
	virtual AABB const& getVisualShape(TileSource*, int, int, int, AABB&, bool);
	virtual ~ThinFenceTile();
	virtual void addAABBs(TileSource*, int, int, int, AABB const*, std::vector<AABB, std::allocator<AABB> >&);
};
