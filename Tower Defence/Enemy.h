#pragma once

#include "Entity.h"

class Enemy :
	public Entity
{
	int Health;

public:
	/*
	Конструктор объекта без масштабирования
	(размеры объекта равны размерам текстуры)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта  
	*/
	Enemy(SDL_Texture * entityTexture, int X, int Y);


	/*
	Конструктор объекта с масштабированием
	(размеры объекта вводятся вручную)
	entityTexture - текстура объекта
	X - Координата X объекта
	Y - Координата Y объекта
	*/
	Enemy(SDL_Texture * entityTexture, int X, int Y, int Width, int Height);


	~Enemy();

	/*
	Движение
	*/
	void Move();
};

