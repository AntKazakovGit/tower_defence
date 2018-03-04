#pragma once

#include <Windows.h>
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "Entity.h"

const int Default_Res_X = 1920;
const int Default_Res_Y = 1080;


struct UserSettings
{
	int resWidth;
	int resHeight;
	Uint16 windowFlags;

	void LoadSettings();
	void DefaultSettings();

};


class Window
{
	// Окно приложения
	SDL_Window * window;
	// Поверхность (придумать нормальное описание)
	SDL_Renderer * renderer;
	// Пользовательские настройки
	UserSettings settings;

	// Масштабирование текстур
	SDL_Rect ScaleTexture(SDL_Rect * position);


public:
	Window();
	~Window();
	// Загрузка текстуры из файла
	SDL_Texture * LoadTexture(std::string path);
	// Преобразование строки в текстуру
	SDL_Texture * LoadTexture(std::string text, TTF_Font * font, SDL_Color color);
	// Обновление окна
	void UpdateWindow(std::vector<Entity*> entities);

};
