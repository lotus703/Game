#pragma once
#include <Windows.h>
#include <d3dx9.h>
#include <unordered_map>
#include "CSprite.h"
typedef CSprite* LPSPRITE;
class CAnimationFrame
{
	 
	LPSPRITE sprite;
	DWORD time;

public:
	CAnimationFrame(LPSPRITE sprite, int time);
	DWORD GetTime();
	LPSPRITE GetSprite();
 
};

