#pragma once

class Entity;
class ItemInstance;
class Player;
class MinecraftClient;
class TextureUVCoordinateSet;
class Matrix;
class LocalPlayer;

class ItemInHandRenderer {
public:

	ItemInHandRenderer(MinecraftClient&, TileTessellator&);
	virtual ~ItemInHandRenderer();
	
	virtual void renderItem(Entity&, ItemInstance&, float);
	virtual void tick();
	virtual void initMaterials();
	virtual bool itemPlaced();
	virtual void render(float);
	virtual void renderTex(float, TextureUVCoordinateSet const&) const;
	virtual void setPlayerBob(LocalPlayer&, float, Matrix&);
	virtual void renderFire(float);
};

