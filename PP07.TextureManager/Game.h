
#include "SDL.h"
#include "TextureManager.h"
#include <iostream>

class Game
{
public:
	Game() {}
	~Game() {}
	bool init(const char* title, int xpos, int ypos,
		int width, int height, bool fullscreen);

	void render();
	void handleEvents();
	void clean();
	void update();
	bool running() { return m_bRunning; }

private:
	SDL_Window * m_pWindow = 0;
	SDL_Renderer* m_pRenderer = 0;
	bool m_bRunning = true;
	SDL_Texture* m_pTexture;
	//TextureManager m_textureManager;
	//SDL_Rect m_sourceRectangle; //원본 사각형
	//SDL_Rect m_destinationRectangle; //대상 사각형
};

