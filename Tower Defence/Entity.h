#pragma once

#include <SDL.h>
#include "Render.h"

class Entity
{
	//Текстура объекта
	SDL_Texture *texture;

protected:
	//Координаты и размеры объекта
	SDL_Rect rect;

public:
	/*
	Конструктор объекта без масштабирования 
	(размеры объекта равны размерам текстуры)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта
	*/
	Entity(SDL_Texture *entityTexture, int X, int Y);


	/*
	Конструктор объекта с масштабированием
	(размеры объекта вводятся вручную)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта
	*/
	Entity(SDL_Texture *entityTexture, int X, int Y, int Width, int Height);


	~Entity();
	

	/*
	Рендер текстуры объекта
	render - рендер в который будет выведена текстура
	*/
	virtual void Show(TD_Render *render);


	/*
	Рендер части текстуры объекта
	render - рендер в который будет выведена текстура
	src_X - Координата X части текстуры
	src_Y - Координата Y части текстуры
	src_W - Ширина части текстуры
	src_H - Высота части текстуры
	*/
	virtual void Show(TD_Render *render, int src_X, int src_Y, int src_W, int src_H);
};


