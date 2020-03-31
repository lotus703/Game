#include "CTexturesManagement.h"
CTexturesManagement* CTexturesManagement::__Instance = NULL;
CTexturesManagement* CTexturesManagement::GetInstance()
{
	if (__Instance == NULL)
		__Instance = new CTexturesManagement();
	return __Instance;
}
void CTexturesManagement::AddTexture(int id, CTextures* texture)
{
	_ListTextures[id] = texture;
}
void CTexturesManagement::LoadResource()
{
	//code
}
CTexturesManagement::CTexturesManagement()
{
	LoadResource();
}
CTexturesManagement::~CTexturesManagement()
{
	if (__Instance)
	{
		delete(__Instance);
		__Instance = nullptr;
	}
}