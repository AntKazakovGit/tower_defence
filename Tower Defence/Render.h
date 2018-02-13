#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>

class TD_Render
{
	SDL_Renderer *renderer;

public:
	TD_Render(SDL_Window *window);

	~TD_Render();


	/*
	Загрузка текстуры
	path - Путь до изображения
	*/
	SDL_Texture *LoadTexture(const std::string &path);


	SDL_Texture *LoadText(std::string textureText, TTF_Font *font, SDL_Color textColor, int size);


	/*
	Рендер текстуры
	texture - Отправляемая в рендер текстура
	dst - Координаты и размеры текстуры
	dst.x - Координата текстуры по X
	dst.y - Координата текстуры по Y
	dst.w - Ширина текстуры после масштабирования
	dst.h - Высота текстуры после масштабирования
	*/
	void RenderTexture(SDL_Texture * texture, SDL_Rect dst);


	/*
	Рендер части текстуры
	texture - Отправляемая в рендер текстура
	src - Координаты и размеры той части текстуры которая будет отправлена в рендер
	src.x - Координата X той части текстуры которая будет отправлена в рендер
	src.y - Координата Y той части текстуры которая будет отправлена в рендер
	src.w - Ширина той части текстуры которая будет отправлена в рендер
	src.h - Высота той части текстуры которая будет отправлена в рендер
	dst - Координаты и размеры текстуры
	dst.x - Координата текстуры по X
	dst.y - Координата текстуры по Y
	dst.w - Ширина текстуры после масштабирования
	dst.h - Высота текстуры после масштабирования
	*/
	void RenderTexture(SDL_Texture *texture, SDL_Rect src, SDL_Rect dst);


	//Отрисовка рендерера
	void Show();


	//Очистка рендерера
	void ClearScreen();
};

