#pragma once
#include <d3dx9.h>
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

	CTexture(char* path, int column = 1, int row = 1, int totalframes = 1, int R = 255, int G = 0, int B = 255);
	~CTexture();
};

