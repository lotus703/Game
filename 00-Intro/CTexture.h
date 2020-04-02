#pragma once
#include <d3dx9.h>
#include "debug.h"
#include "CGame.h"
#include <d3d9.h>
class CTexture
{
private:
	int frameWidth, frameHeight, column, row;
public:
 
	int totalFrames;
 
	LPDIRECT3DTEXTURE9 texture;
	int GetFrameWidth();
	int GetFrameHeight();
	int GetColumn();
	int GetRow();

	CTexture(char* path, int col = 1, int ro = 1, int totalframes = 1, int R = 255, int G = 0, int B = 255);
	~CTexture();
};

