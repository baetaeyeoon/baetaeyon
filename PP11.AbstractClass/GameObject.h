#pragma once
#include<iostream>
#include<string>
#include "SDL.h"
#include <map>
#include <SDL_image.h>
#include "TextureManager.h"
#include "LoaderParms.h"


class GameObject
{
public:
	virtual void load(int x, int y, int width, int height,
		std::string textureID);
	virtual void draw(SDL_Renderer* pRenderer);
	virtual void update();
	virtual void clean() {  }
protected:
	std::string m_textureID;
	int m_currentFrame;
	int m_currentRow;
	int m_x;
	int m_y;
	int m_width;
	int m_height;

};