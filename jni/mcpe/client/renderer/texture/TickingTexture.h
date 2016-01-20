#pragma once

class Textures;
class TextureUVCoordinateSet;

class TickingTexture {
public:

	TickingTexture(TextureUVCoordinateSet const&, int)
	void bindTexture(Textures*);
	TextureUVCoordinateSet getGPUTexture(Textures*) const;
};
