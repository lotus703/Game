#pragma once

#include <unordered_map>
#include "CTextures.h"
class CTexturesManagement
{
	unordered_map<int, CTextures*> _ListTextures;
public:
	static CTexturesManagement* __Instance;
	static CTexturesManagement* GetInstance();

	void AddTexture(int id, CTextures* texture);
	CTextures* GetTexture(int id);
	void LoadResource();
	CTexturesManagement();
	~CTexturesManagement();
};

