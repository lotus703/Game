#include "CTexture.h"
 
int CTexture::GetFrameWidth()
{
	return frameWidth;
}
int CTexture::GetFrameHeight()
{
	return frameHeight;
}
int CTexture::GetColumn()
{
	return column;
}
int CTexture::GetRow() 
{ 
	return row; 
}
CTexture::CTexture(char * path, int col, int ro, int totalframes, int R, int G, int B)
{
	//code
	column = col;
	row = ro;
	totalFrames = totalframes;
	D3DXIMAGE_INFO info;
	HRESULT result = D3DXGetImageInfoFromFileA(path, &info);
	if (result != D3D_OK)
	{
		DebugOut(L"[ERROR] GetImageInfoFromFile failed: %s\n", path);
	}
	this->frameWidth = info.Width / column;
	this->frameHeight = info.Height / row;
	LPDIRECT3DDEVICE9 d3ddv = CGame::GetInstance()->GetDirect3DDevice();
		result = D3DXCreateTextureFromFileExA(
			d3ddv,								// Pointer to Direct3D device object
			path,							// Path to the image to load
			info.Width,							// Texture width
			info.Height,						// Texture height
			1,
			D3DUSAGE_DYNAMIC,
			D3DFMT_UNKNOWN,
			D3DPOOL_DEFAULT,
			D3DX_DEFAULT,
			D3DX_DEFAULT,
			D3DCOLOR_XRGB(R, G, B),
			&info,
			NULL,
			&texture);								// Created texture pointer

		if (result != D3D_OK)
		{
			OutputDebugString(L"[ERROR] CreateTextureFromFile failed\n");
			return;
		}
}
CTexture::~CTexture()
{ 
	if (this->texture != NULL)
		this->texture->Release();
	
}