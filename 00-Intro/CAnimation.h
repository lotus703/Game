#pragma once
#include<Windows.h>
#include"CAnimationFrame.h"
#include"CSpriteManagement.h"

typedef CAnimationFrame* LPANIMATION_FRAME;
class CAnimation
{
	DWORD lastFrameTime;
	int defaultTime;
	int currentFrame;
	vector<LPANIMATION_FRAME> frames;
public:
	CAnimation(int defaultTime) { this->defaultTime = defaultTime; lastFrameTime = -1; currentFrame = -1; }
	void Add(int spriteId, DWORD time = 0);
	void Render(float x, float y);
};

