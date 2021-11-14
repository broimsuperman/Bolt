#ifndef CLIENT_SDK_CLASSES_BLOCK
#define CLIENT_SDK_CLASSES_BLOCK

class Material {
public:
	int type; // 5 for water, 6 for lava
	bool isFlammable;
	bool isNeverBuildable;
	bool isAlwaysDestroyable;
	bool isReplaceable;
	bool isLiquid;  // 0x0008
private:
	char pad2[0x3]; // 0x009
public:
	float translucency;  // 0x00C
	bool isBlockingMotion;
	bool isBlockingPrecipitation;
	bool isSolid;
	bool isSuperHot;
	float color[4];
};

class BlockLegacy {
private:
    char pad_0000[48];   //0x0000
public:
	std::string name;    //0x0030
private:
    char pad_0038[160];  //0x0038
public:
	//Material* material;  //0x00D8
	
	auto getMaterial(void) -> Material* {
		return *(Material**)((uintptr_t)(this) + 0xD8);
	};
};

class Block {
private:
    char pad_0000[16]; //0x0000
public:
    BlockLegacy* blockLegacy;
};

#endif /* CLIENT_SDK_CLASSES_BLOCK */