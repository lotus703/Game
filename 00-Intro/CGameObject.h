#pragma once
#include <Windows.h>
#include <d3dx9.h>
#include <vector>
#include "CSpriteManagement.h"
#include "CAnimation.h"
#include "CAnimations.h"

using namespace std;
class CGameObject
{
protected:
	float x;
	float y;
	//vận tốc
	float vx; //vận tốc chiều ngang
	float vy; //vận tốc chiều dọc

	int nx;

	int state;
	 

	 static vector<LPANIMATION> animations;
public:
	void SetPosition(float x, float y) { this->x = x, this->y = y; }
	void SetSpeed(float vx, float vy) { this->vx = vx, this->vy = vy; }
	
	void SetState(int state) { this->state = state; }
	int GetState() { return this->state; }
	void AddAnimation(int aniId);
	CGameObject();
	void Update(DWORD dt);
	void Render();
	~CGameObject();
};

