#include "CTexturesManagement.h"
CTexturesManagement* CTexturesManagement::__Instance = NULL;
CTexturesManagement* CTexturesManagement::GetInstance()
{
	if (__Instance == NULL)
		__Instance = new CTexturesManagement();
	return __Instance;
}
void CTexturesManagement::AddTexture(eType type, CTexture* texture)
{
	_ListTextures[type] = texture;
}
void CTexturesManagement::LoadResource()
{
	//code
	AddTexture(eType::SIMON, new CTexture("Resources/simon.png", 8, 3, 24));
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
CTexture * CTexturesManagement::GetTexture(eType type)
{
	return _ListTextures[type];
}