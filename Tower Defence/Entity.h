#pragma once

#include <vector>
#include <SDL.h>
#include <iostream>

class Entity
{
	// Текстура объекта
	SDL_Texture * texture;
	// Кадры анимации данного объекта
	std::vector<SDL_Rect> * frames;
	// Текущий кадр
	SDL_Rect * curFrame;
	// Координаты объекта
	SDL_Rect position;

public:
	Entity(SDL_Texture * texture, int x, int y, std::vector<SDL_Rect>* frames = NULL);
	~Entity();
	// Возвращает указатель на текстуру
	SDL_Texture * GetTexture();
	// Возврощает координаты той части текстуры которая должна быть выведена на экран
	SDL_Rect * GetFrame();
	// Возвращает координаты и размеры объекта
	SDL_Rect * GetPosition();

};