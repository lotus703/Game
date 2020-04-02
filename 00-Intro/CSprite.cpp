#include "CSprite.h"
#include "CGame.h"
#include "debug.h"
CSprite::CSprite(CTexture * Texture, DWORD TimeAnimation)
{
	texture = Texture;
	currentFrame = 0;
	totalFrames = texture->totalFrames - 1;
	this->timeAnimation = TimeAnimation;
	spriteHandler = CGame::GetInstance()->GetSpriteHandler();
}
void CSprite::NextFrame()
{
	currentFrame++;
	if (currentFrame > totalFrames)
			currentFrame = 0;
}
void CSprite::ResetTime()
{
	timeAccumulated = 0;
}
void CSprite::SelectFrame(int idFrame)
{
	currentFrame = idFrame;
}
void CSprite::Update(DWORD dt)
{
	timeAccumulated += dt;
	if (timeAccumulated >= timeAnimation)
	{
		timeAccumulated -= timeAnimation;
		this->NextFrame();
	}
}
void CSprite::Draw(float X, float Y, int alpha, int R, int G, int B)
{
	DrawFrame(currentFrame, X, Y, alpha, R, G, B);
	 
}
void CSprite::DrawFrame(int idFrame, float X, float Y, int alpha, int R, int G, int B)
{
	RECT r = GetRectFrame(idFrame);
	D3DXVECTOR3 p(trunc(X), trunc(Y), 0);
	spriteHandler->Draw(texture->texture, &r, NULL, &p, D3DCOLOR_ARGB(alpha, R, G, B));
}
int CSprite::GetCurrentFrame()
{
	return currentFrame;
}

int CSprite::GetTotalFrames()
{
	return totalFrames;
}