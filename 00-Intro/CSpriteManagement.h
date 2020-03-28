#pragma once
#include <Windows.h>
#include <d3dx9.h>
#include <unordered_map>
#include "CSprite.h"
typedef CSprite* LPSPRITE;
class CSpriteManagement
{
	static CSpriteManagement* __instance;

	unordered_map<int, LPSPRITE> sprites;
public:
	void Add(int id, int left, int top, int right, int bottom, LPDIRECT3DTEXTURE9 tex);
	LPSPRITE Get(int id);

	static CSpriteManagement* GetInstance();
};

