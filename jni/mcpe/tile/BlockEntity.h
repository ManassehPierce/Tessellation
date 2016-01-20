#pragma once

#include "../inventory/FillingContainer.h"

#pragma once

enum TileEntityType
{
	FURNACE = 1,
	CHEST,
	NETHERREACTOR,
	SIGN,
	MOBSPAWNER,
	CUSTOME = 20
};

class Packet;
class TilePos;

class TileEntity
{
public:
	TileEntity(TileEntityType, const TilePos &, const std::string &);
	virtual ~TileEntity();
	virtual void load(CompoundTag *);
	virtual bool save(CompoundTag *);
	virtual void tick(TileSource *);
	virtual void isFinished();
	virtual void getUpdatePacket();
	virtual void onUpdatePacket(CompoundTag *);
	virtual void setRemoved();
	virtual void triggerEvent(int, int);
	virtual void clearCache();
	virtual void onNeighborChanged(TileSource &, int, int, int);
	virtual void getShadowRadius(TileSource &) const;
	void _destructionWobble(float &, float &, float &);
	void _resetAABB();
	void clearRemoved();
	void distanceToSqr(const Vec3 &);
	void initTileEntities();
	bool isRemoved() const;
	bool isType(TileEntity *, TileEntityType);
	bool isType(TileEntityType);
	void loadStatic(CompoundTag &);
	void setChanged();
	void setId(TileEntityType, const std::string &);
};
