#pragma once
 
#include <unordered_map>
#include "Define.h"
#include "CTexture.h"

class CTexturesManagement
{
	unordered_map<eType,CTexture*> _ListTextures;
public:
	static CTexturesManagement* __Instance;
	static CTexturesManagement* GetInstance();

	void AddTexture(eType type, CTexture* texture);
	CTexture* GetTexture(eType type);
	void LoadResource();
	CTexturesManagement();
	~CTexturesManagement();
};

 