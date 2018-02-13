#include "Render.h"



TD_Render::TD_Render(SDL_Window *window)
{
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
}


TD_Render::~TD_Render()
{

}


SDL_Texture * TD_Render::LoadTexture(const std::string &path)
{
	SDL_Texture *texture = IMG_LoadTexture(renderer, path.c_str());
	if (texture == nullptr) 
	{
		std::cout << IMG_GetError();
	}
	return texture;
}

SDL_Texture * TD_Render::LoadText(std::string textureText, TTF_Font *font, SDL_Color textColor, int size)
{
	SDL_Surface* textSurface = TTF_RenderText_Solid(font, textureText.c_str(), textColor);
	SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, textSurface);
	if (texture == nullptr)
	{
		std::cout << IMG_GetError();
	}
	return texture;
}


void TD_Render::RenderTexture(SDL_Texture *texture, SDL_Rect dst)
{
	SDL_RenderCopy(renderer, texture, NULL, &dst);
}


void TD_Render::RenderTexture(SDL_Texture *texture, SDL_Rect src, SDL_Rect dst)
{
	SDL_RenderCopy(renderer, texture, &src, &dst);
}


void TD_Render::Show()
{
	SDL_RenderPresent(renderer);
}


void TD_Render::ClearScreen()
{
	SDL_RenderClear(renderer);
}
