#include "CSpriteManagement.h"

CSpriteManagement* CSpriteManagement::__instance = NULL;

CSpriteManagement* CSpriteManagement::GetInstance()
{
	if (__instance == NULL) __instance = new CSpriteManagement();
	return __instance;
}
void CSpriteManagement::Add(int id, int left, int top, int right, int bottom, LPDIRECT3DTEXTURE9 tex)
{
	LPSPRITE s = new CSprite(id, left, top, right, bottom, tex);
	sprites[id] = s;
}

LPSPRITE CSpriteManagement::Get(int id)
{
	return sprites[id];
}

