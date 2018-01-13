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


void TD_Render::RenderTexture(SDL_Texture *texture, int x, int y, int width, int height)
{
	SDL_Rect dst;
	dst.x = x;
	dst.y = y;
	dst.w = width;
	dst.h = height;

	SDL_RenderCopy(renderer, texture, NULL, &dst);
}


void TD_Render::RenderTexture(SDL_Texture * texture, int src_x, int src_y, int src_w, int src_h, int dst_x, int dst_y, int dst_w, int dst_h)
{
	SDL_Rect src;
	src.x = src_x;
	src.y = src_y;
	src.w = src_w;
	src.h = src_h;

	SDL_Rect dst;
	dst.x = dst_x;
	dst.y = dst_y;
	dst.w = dst_w;
	dst.h = dst_h;

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
