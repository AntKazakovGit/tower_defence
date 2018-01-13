#pragma once
#include "Entity.h"

class Tower :
	public Entity
{
public:
	/*
	Конструктор объекта без масштабирования
	(размеры объекта равны размерам текстуры)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта
	*/
	Tower(SDL_Texture * entityTexture, int X, int Y);


	/*
	Конструктор объекта с масштабированием
	(размеры объекта вводятся вручную)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта
	*/
	Tower(SDL_Texture * entityTexture, int X, int Y, int Width, int Height);


	~Tower();


	/*
	Стрельба
	*/
	void Shoot();
};

