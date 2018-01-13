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


	/*
	Загрузка текстуры
	path - Путь до изображения
	*/
	SDL_Texture *LoadTexture(const std::string &path);


	/*
	Рендер текстуры
	texture - Отправляемая в рендер текстура
	x - Координата текстуры по X
	y - Координата текстуры по Y
	width - Ширина текстуры после масштабирования
	height - Высота текстуры после масштабирования
	*/
	void RenderTexture(SDL_Texture * texture, int x, int y, int width, int height);


	/*
	Рендер части текстуры
	texture - Отправляемая в рендер текстура
	src_x - Координата X той части текстуры которая будет отправлена в рендер
	src_y - Координата Y той части текстуры которая будет отправлена в рендер
	src_w - Ширина той части текстуры которая будет отправлена в рендер
	src_h - Высота той части текстуры которая будет отправлена в рендер
	dst_x - Координата текстуры по X
	dst_y - Координата текстуры по Y
	dst_w - Ширина текстуры после масштабирования
	dst_h - Высота текстуры после масштабирования
	*/
	void RenderTexture(SDL_Texture *texture, int src_x, int src_y, int src_w, int src_h, int dst_x, int dst_y, int dst_w, int dst_h);


	//Отрисовка рендерера
	void Show();


	//Очистка рендерера
	void ClearScreen();
};

