#include "Window.h"


void UserSettings::LoadSettings()
{
	DefaultSettings();
}

void UserSettings::DefaultSettings()
{
	resWidth = GetSystemMetrics(SM_CXSCREEN);
	resHeight = GetSystemMetrics(SM_CYSCREEN);

	windowFlags = SDL_WindowFlags::SDL_WINDOW_FULLSCREEN;
}

Window::Window()
{
	// Загрузка пользовательских текстур
	settings.LoadSettings();
	// Создание окна
	window = SDL_CreateWindow(
		"Tower Defense", 
		SDL_WINDOWPOS_UNDEFINED, 
		SDL_WINDOWPOS_UNDEFINED, 
		Default_Res_X, 
		Default_Res_Y, 
		settings.windowFlags);
	// Смена разрешение на пользовательское
	SDL_SetWindowSize(window, settings.resWidth, settings.resHeight);
	// Создание рендерера
	renderer = SDL_CreateRenderer(
		window, 
		-1, 
		SDL_RendererFlags::SDL_RENDERER_PRESENTVSYNC | 
		SDL_RendererFlags::SDL_RENDERER_ACCELERATED);
}

Window::~Window()
{
}

SDL_Texture * Window::LoadTexture(std::string path)
{
	SDL_Texture * texture = IMG_LoadTexture(renderer, path.c_str());
	if (!texture)
		std::cout << SDL_GetError() << std::endl;
	return texture;
}

SDL_Texture * Window::LoadTexture(std::string text, TTF_Font * font, SDL_Color color)
{
	SDL_Surface * surface = TTF_RenderUTF8_Solid(font, text.c_str(), color);
	if (!surface)
	{
		std::cout << SDL_GetError() << std::endl;
		return NULL;
	}
	SDL_Texture * texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (!texture)
	{
		std::cout << SDL_GetError() << std::endl;
		return NULL;
	}
	return texture;
}

void Window::UpdateWindow(std::vector<Entity*> entities)
{
	// Очистка рендерера
	SDL_RenderClear(renderer);
	// Добавление текстур в рендерер
	for (int i = 0; i < entities.size(); i++)
	{
		SDL_RenderCopy(
			renderer, 
			entities[i]->GetTexture(), 
			entities[i]->GetFrame(), 
			&ScaleTexture(entities[i]->GetPosition()));
	}
	// Непосредствено обновление окна
	SDL_RenderPresent(renderer);
}

SDL_Rect Window::ScaleTexture(SDL_Rect * position)
{
	SDL_Rect rect;

	rect.w = position->w * ((double)settings.resWidth / Default_Res_X);
	rect.h = position->h * ((double)settings.resHeight / Default_Res_Y);
	rect.x = position->x * ((double)settings.resWidth / Default_Res_X);
	rect.y = position->y * ((double)settings.resHeight / Default_Res_Y);

	return rect;
}
