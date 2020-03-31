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
CTexture::CTexture(char * path, int column, int row, int totalframes, int R, int G, int B)
{
	//code
}
CTexture::~CTexture()
{ 
	if (this->texture != NULL)
		this->texture->Release();
	
}