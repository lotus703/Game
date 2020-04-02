#pragma once
#include <Windows.h>
#include <d3dx9.h>
#include "CTexture.h"

using namespace std;

class CSprite
{
private:
	LPD3DXSPRITE spriteHandler;
	int currentFrame, totalFrames;
public:
	CSprite(CTexture* texture, DWORD timeAnimation);
	virtual ~CSprite();

	CTexture* texture;
	DWORD timeAccumulated;	 // thời gian chờ đã tích lũy
	DWORD timeAnimation; // thời gian phải chờ giữa các frame
	RECT GetRectFrame(int idFrame);
	void NextFrame();
	void ResetTime();
	void SelectFrame(int idFrame);
	void Update(DWORD dt);
	void Draw(float x, float y, int alpha = 255, int R = 255, int G=255, int B =255);
	void DrawFrame(int idFrame, float X, float Y, int alpha = 255, int R = 255, int G = 255, int B = 255);
	int GetCurrentFrame();
	int GetTotalFrames();
};

