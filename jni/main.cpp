#include <jni.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <android/log.h>
#include <Substrate.h>

#include <mcpe/item/ItemInstance.h>
#include <mcpe/item/Item.h>
#include <mcpe/tile/Tile.h>
#include <mcpe/client/renderer/TileTessellator.h>
#include <mcpe/client/renderer/texture/Textures.h>
#include <mcpe/client/resources/I18n.h>
#include <mcpe/client/MinecraftClient.h>
#include <mcpe/client/gui/Gui.h>
#include <mcpe/entity/player/Player.h>
#include <mcpe/util/Util.h>
#include <mcpe/gamemode/GameMode.h>


bool (*_TileTessellator$tessellateInWorld)(TileTessellator*, Tile*, const TilePos&, unsigned char, bool);
void (*_Tile$initTiles)();
void (*_Item$initCreativeItems)();
static std::string (*_I18n$get)(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
void (*_MinecraftClient$onPlayerLoaded)(MinecraftClient*, Player*);
void (*_Gui$render)(Gui*, float, bool, int, int);

Tile* dragonEgg;
Tile* pipeBlock;
Tile* beacon;
Tile* hexBlock;
Tile* pyramid;
Player* player = NULL;
MinecraftClient* client = NULL;

void clientMessage(std::string const& str) {
	client->getGui()->displayClientMessage(str);
}


void popup(std::string const& str, std::string const& str2){
	client->getGui()->showPopupNotice(str, str2);
}


void showTipMessage(std:: string const& str){
	client->getGui()->showTipMessage(str);
}


void chatMessage(const std::string & sender, const std::string & str){
	client->getGui()->displayChatMessage(sender, str);
}


void addMessage(const std::string & sender, const std::string & str, int ticks, bool b){
	client->getGui()->addMessage(sender, str, ticks, b);
}


bool TileTessellator$tessellateInWorld(TileTessellator* self, Tile* tile, const TilePos& pos, unsigned char c, bool b) {
	switch(tile->id) {
		case 14: 
			return self->tessellateGoldOreInWorld(tile, pos);
			break;
		case 15: 
			return self->tessellateIronOreInWorld(tile, pos);
			break;
		case 16: 
			return self->tessellateCoalOreInWorld(tile, pos);
			break;
		case 17: 
			return self->tessellateLogInWorld(tile, pos);
			break;
		case 27: 
			return self->tessellatePoweredRailInWorld(tile, pos);
			break;
		case 37: 
			return self->tessellateDandelionInWorld(tile, pos);
			break;
		/*case 39: 
			return self->tessellateBrownMushroomInWorld(tile, pos);
			break;*/
		case 45:
			return self->tessellateBricksInWorld(tile, pos);
			break;
		case 56: 
			return self->tessellateDiamondOreInWorld(tile, pos);
			break;
		case 58: 
			return self->tessellateCraftingTableInWorld(tile, pos);
			break;
		case 61: 
			return self->tessellateFurnaceInWorld(tile, pos);
			break;
		case 62: 
			return self->tessellateLitFurnaceInWorld(tile, pos);
			break;
		case 65: 
			return self->tessellateTLadderInWorld(tile, pos);
			break;
		case 66: 
			return self->tessellateNormalRailInWorld(tile, pos);
			break;
		case 73: 
			return self->tessellateRedstoneOreInWorld(tile, pos);
			break;
		case 74: 
			return self->tessellateRedstoneOreInWorld(tile, pos);
			break;
		case 86: 
			return self->tessellatePumpkinInWorld(tile, pos);
			break;
		case 91: 
			return self->tessellateLitPumpkinInWorld(tile, pos);
			break;
		case 98: 
			return self->tessellateStoneBrickInWorld(tile, pos);
			break;
		case 116:
			return self->tessellateEnchantTableInWorld(tile, pos);
			break;
		case 122:
			return self->tessellateDragonEggInWorld(tile, pos);
			break;
		case 138:
			return self->tessellateBeaconInWorld(tile, pos);
			break;
		case 155:
			return self->tessellateQuartzBlockInWorld(tile, pos);
			break;
		case 162: 
			return self->tessellateLogInWorld(tile, pos);
			break;
		//case 233:
			//return self->tessellateCompanionCubeInWorld(tile, pos);
			//break;
		case 240:
			return self->tessellatePipeInWorld(tile, pos);
			break;
		case 241:
			return self->tessellateHexagonInWorld(tile, pos);
			break;
		case 242:
			return self->tessellatePyramidInWorld(tile, pos);
			break;
		default:
			return _TileTessellator$tessellateInWorld(self, tile, pos, c, b);
	}
}


void Tile$initTiles() {
	_Tile$initTiles();
	
	Tile::furnace->renderPass = 4;
	Tile::furnace_lit->renderPass = 4;
	Tile::log->renderPass = 4;
	Tile::log2->renderPass = 4;
	Tile::pumpkin->renderPass = 4;
	Tile::litPumpkin->renderPass = 4;
	
	Tile::lightBlock[58] = 0;
	Tile::lightBlock[86] = 0;
	Tile::lightBlock[98] = 0;
	Tile::lightBlock[155] = 0;
	Tile::lightBlock[17] = 0;
	Tile::lightBlock[162] = 0;
	
	dragonEgg = new Tile(122, "dragon_egg", &Material::stone);
	dragonEgg->setSoundType(Tile::SOUND_STONE);
	dragonEgg->destroyTime = -1;
	dragonEgg->category = 2;
	dragonEgg->explosionResistance = 45;
	dragonEgg->descriptionId = "dragonEgg";
	Tile::solid[122] = false;
	Tile::lightBlock[122] = 0;
	Tile::tiles[122] = dragonEgg;
	new TileItem(122 - 0x100);
	
	beacon = new Tile(138, "glass", &Material::glass);
	beacon->setSoundType(Tile::SOUND_GLASS);
	beacon->destroyTime = 2;
	beacon->descriptionId = "beacon";
	beacon->category = 2;
	beacon->renderPass = 4;
	beacon->explosionResistance = 15;
	Tile::solid[138] = false;
	Tile::lightBlock[138] = 0;
	Tile::tiles[138] = beacon;
	new TileItem(138 - 0x100);
	
	hexBlock = new Tile(241, "cobblestone", &Material::stone);
	hexBlock->setSoundType(Tile::SOUND_SILENT);
	hexBlock->descriptionId = "hexBlock";
	hexBlock->category = 2;
	hexBlock->renderPass = 4;
	hexBlock->destroyTime = 1;
	hexBlock->explosionResistance = Tile::rock->explosionResistance;
	Tile::solid[241] = false;
	Tile::lightBlock[241] = 0;
	Tile::tiles[241] = hexBlock;
	new TileItem(241 - 0x100);
	
	pyramid = new Tile(242, "sandstone", &Material::stone);
	pyramid->setSoundType(Tile::SOUND_SILENT);
	pyramid->descriptionId = "pyramid";
	pyramid->category = 2;
	pyramid->renderPass = Tile::rock->renderPass;
	hexBlock->destroyTime = 1;
	pyramid->explosionResistance = Tile::rock->explosionResistance;
	Tile::solid[242] = false;
	Tile::lightBlock[242] = 0;
	Tile::tiles[242] = pyramid;
	new TileItem(242 - 0x100);
	
	pipeBlock = new Tile(240, "reactor_core", &Material::cloth);
	pipeBlock->setSoundType(Tile::SOUND_CLOTH);
	pipeBlock->descriptionId = "pipeBlock";
	pipeBlock->category = 2;
	pipeBlock->renderPass = Tile::glass->renderPass;
	pipeBlock->destroyTime = 1;
	pipeBlock->explosionResistance = Tile::glass->explosionResistance;
	Tile::solid[240] = false;
	Tile::lightBlock[240] = 0;
	Tile::tiles[240] = pipeBlock;
	new TileItem(240 - 0x100);
	
}


void Item$initCreativeItems() {
	_Item$initCreativeItems();
	Item::addCreativeItem(dragonEgg, 0);
	Item::addCreativeItem(pipeBlock, 0);
	Item::addCreativeItem(hexBlock, 0);
	Item::addCreativeItem(beacon, 0);
	Item::addCreativeItem(pyramid, 0);
}


static std::string I18n$get(std::string const& key, std::vector<std::string, std::allocator<std::string>> const& a) {
	if(key == "dragonEgg.name") return "Dragon Egg";
	if(key == "pipeBlock.name") return "Pipe";
	if(key == "hexBlock.name") return "Hex Block";
	if(key == "beacon.name") return "Beacon";
	if(key == "pyramid.name") return "Pyramid";
	return _I18n$get(key, a);
}


void MinecraftClient$onPlayerLoaded(MinecraftClient * mc, Player * p) {
	player = p;
	client = mc;
	addMessage("§aTessellation§f", "Copyright §4Darkserver", 0, false);
	addMessage("§aTessellation§f", "Twitter: §4@pierce_manasseh", 0, false);
	_MinecraftClient$onPlayerLoaded(mc, p);
}


void Gui$render(Gui* gui, float f1, bool b1, int i1, int i2){
	_Gui$render(gui, f1, b1, i1, i2);
}


JNIEXPORT jint JNI_OnLoad(JavaVM* vm, void* reserved) {
	MSHookFunction((void*) &I18n::get, 								(void*) &I18n$get, 									(void**) &_I18n$get);
	MSHookFunction((void*) &Item::initCreativeItems, 				(void*) &Item$initCreativeItems, 					(void**) &_Item$initCreativeItems);
	MSHookFunction((void*) &Tile::initTiles, 						(void*) &Tile$initTiles, 							(void**) &_Tile$initTiles);
	MSHookFunction((void*) &TileTessellator::tessellateInWorld, 	(void*) &TileTessellator$tessellateInWorld, 		(void**) &_TileTessellator$tessellateInWorld);
	MSHookFunction((void*) &Gui::render, 							(void*) &Gui$render, 								(void**) &_Gui$render);
	MSHookFunction((void*) &MinecraftClient::onPlayerLoaded, 		(void*) &MinecraftClient$onPlayerLoaded, 			(void**) &_MinecraftClient$onPlayerLoaded);
	
	return JNI_VERSION_1_2;
}
