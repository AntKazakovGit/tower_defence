#include "Render.h"



TD_Render::TD_Render(SDL_Window *window)
{
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
}

TD_Render::~TD_Render()
{
}

SDL_Texture * TD_Render::loadTexture(const std::string &path)
{
	SDL_Texture *texture = IMG_LoadTexture(renderer, path.c_str());
	if (texture == nullptr) 
	{
		std::cout << IMG_GetError();
	}
	return texture;
}

void TD_Render::renderTexture(SDL_Texture *texture, int x, int y, int width, int height)
{
	SDL_Rect dst;
	dst.x = x;
	dst.y = y;
	dst.w = width;
	dst.h = height;
	SDL_RenderCopy(renderer, texture, NULL, &dst);
}

void TD_Render::renderTexture(SDL_Texture *tex, int x, int y)
{
	int w, h;
	SDL_QueryTexture(tex, NULL, NULL, &w, &h);
	renderTexture(tex, x, y, w, h);
}

void TD_Render::Show()
{
	SDL_RenderPresent(renderer);
}

void TD_Render::ClearScreen()
{
	SDL_RenderClear(renderer);
}
