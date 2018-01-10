#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class TD_Render
{
	SDL_Renderer *renderer;

public:
	TD_Render(SDL_Window *window);

	~TD_Render();

	SDL_Texture *loadTexture(const std::string &path);

	void renderTexture(SDL_Texture * texture, int x, int y, int width, int height);

	void renderTexture(SDL_Texture *tex, int x, int y);

	void Show();

	void ClearScreen();
};

