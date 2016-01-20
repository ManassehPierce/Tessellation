#pragma once
#include <string>
#include <functional>
#include <vector>

#include "Tessellator.h";
#include "Matrix.h"
#include "../../util/TilePos.h"
#include "../../tile/Tile.h"
#include "../../level/TileSource.h"
#include "../../util/Vec3.h"
#include "../../util/Vec2.h"
#include "texture/Textures.h"
#include "texture/TextureUVCoordinateSet.h"
#include "../../util/AABB.h"
#include "../../util/DataID.h"

class TileTessellator {
public:

    bool forceOpaque; // 0
    bool mirror; // 1
    TileSource* tileSource; // 4
    TextureUVCoordinateSet forcedUV; // 8
    bool useForcedUV; // 40
    char filler[88]; // 44
    int rotBottom; // 132
    int rotTop; // 136
    int rotEast; // 140
    int rotWest; // 144
    int rotNorth; // 148
    int rotSouth; // 152
    char filler1[512]; // 156
    Tessellator* tess; // 668
    AABB bounds; // 672
	
	bool tessellateInWorld(Tile*, const TilePos&, unsigned char, bool);
	bool tessellateBlockInWorld(Tile*, const TilePos&);
	bool tessellateRowTexture(Tile*, unsigned char, float, float, float);
	bool tessellateRowInWorld(Tile*, const TilePos&, unsigned char);
	bool tessellateCrossPolyInWorld(Tile*, TilePos const&, unsigned char, bool);
	bool tessellateCrossPolyTexture(TextureUVCoordinateSet const&, Vec3 const&, bool, Tile*);
	bool tessellateCrossInWorld(Tile*, const TilePos&, unsigned char, bool);
	bool tessellateCrossTexture(Tile*, unsigned char, float, float, float, bool);
	bool tessellateCrossTexture(TextureUVCoordinateSet const&, float, float, float, bool, Tile*, float);
	
	//TileTessellator(Tessellator&, TileSource*)
	void renderFaceUp(Tile*, const Vec3&, const TextureUVCoordinateSet&);
    void tessellateTorch(Tile*, float, float, float, float, float);
    void tex1(unsigned int);
    DataID getData(const TilePos&) const;
    unsigned int getLightColor(const TilePos&);
	void renderGuiTile(FullTile const&, float, float);
	int getWaterHeight(TilePos const&, Material const*);
	void blend(int, int, int, int);
	bool isTranslucent(Tile const*);
	bool isSolidRender(Tile const*);
	
	/* Custom Functions */
	void setRenderBounds(float, float, float, float, float, float);
	void setRenderBounds(Vec3, Vec3);
	void setRenderBox(float, float, float, float, float, float);
	void setRenderBox(Vec3, Vec3);
	void extrude(int, TilePos const&, Vec2, Vec2, Vec2, Vec2, float);
	void face4(TilePos const&, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, bool);
	void face4(TilePos const&, Vec3, Vec3, Vec3, Vec3, bool);
	void vertexBound(TilePos const&, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, bool);
	void setRotatedFace(int, const TilePos&, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, Vec3, Vec2, bool);
	void setRotatedBounds(int, float, float, float, float, float, float);
	void setRotatedBox(int, float, float, float, float, float, float);
	void setRotatedVertex(int, TilePos const&, Vec3, Vec3, Vec3, Vec3, Vec3, Vec3, Vec3, Vec3, std::vector<float>);
	bool shouldRenderFace(TilePos const&, int);
	
	Tile* getTile(int, int, int);
	Tile* getTile(TilePos const&);
	Tile* getTile(Vec3);
	
	int getId(int, int, int);
	int getId(TilePos const&);
	int getId(Vec3);
	
	/* render functions */
	bool tessellateTVinesInWorld(Tile*, TilePos const&);
	bool tessellatePumpkinInWorld(Tile*, TilePos const&);
	bool tessellateLitPumpkinInWorld(Tile*, TilePos const&);
	bool tessellateCompanionCubeInWorld(Tile*, TilePos const&);
	bool tessellateQuartzBlockInWorld(Tile*, TilePos const&);
	bool tessellateEnchantTableInWorld(Tile*, TilePos const&);
	bool tessellateDragonEggInWorld(Tile*, TilePos const&);
	bool tessellatePipeInWorld(Tile*, TilePos const&);
	bool tessellateStoneBrickInWorld(Tile*, TilePos const&);
	bool tessellateFurnaceInWorld(Tile*, TilePos const&);
	bool tessellateLitFurnaceInWorld(Tile*, TilePos const&);
	bool tessellateBeaconInWorld(Tile*, TilePos const&);
	bool tessellateTLadderInWorld(Tile*, TilePos const&);
	bool tessellateCraftingTableInWorld(Tile*, TilePos const&);
	bool tessellateDandelionInWorld(Tile*, TilePos const&);
	bool tessellateHexagonInWorld(Tile*, TilePos const&);
	bool tessellateLogInWorld(Tile*, TilePos const&);
	bool tessellateFlowerInWorld(Tile*, TilePos const&);
	bool tessellateNormalRailInWorld(Tile*, TilePos const&);
	bool tessellatePyramidInWorld(Tile*, TilePos const&);
	bool tessellateBricksInWorld(Tile*, TilePos const&);
	bool tessellateBrownMushroomInWorld(Tile*, TilePos const&);
	bool tessellatePoweredRailInWorld(Tile*, TilePos const&);
	
	bool tessellateCoalOreInWorld(Tile*, TilePos const&);
	bool tessellateIronOreInWorld(Tile*, TilePos const&);
	bool tessellateGoldOreInWorld(Tile*, TilePos const&);
	bool tessellateDiamondOreInWorld(Tile*, TilePos const&);
	bool tessellateRedstoneOreInWorld(Tile*, TilePos const&);
	
	void renderNormalLog(Tile*, TilePos const&);
	void renderSideLog(int, Tile*, TilePos const&);
	
	void renderNSRail(Tile*, TilePos const&);
	void renderEWRail(Tile*, TilePos const&);
	void renderCurvedRail(int, Tile*, TilePos const&);
	void renderSlantedRail(int, Tile*, TilePos const&);
	void renderNSPoweredRail(Tile*, TilePos const&);
	void renderEWPoweredRail(Tile*, TilePos const&);
	
};
