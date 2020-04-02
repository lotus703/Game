#include "CGameObject.h"
#include <d3dx9.h>

#include "debug.h"
#include "CGame.h"
#include "CAnimations.h"

vector<LPANIMATION> CGameObject::animations;

CGameObject::CGameObject()
{
	x = y = 0;
	vx = vy = 0;
	nx = 1;
}

void CGameObject::Update(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
	
}
void CGameObject::AddAnimation(int aniId)
{
	LPANIMATION ani = CAnimations::GetInstance()->Get(aniId);
	animations.push_back(ani);
}
void CGameObject::Render()
{

}


CGameObject::~CGameObject()
{
	
}