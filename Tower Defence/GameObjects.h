#pragma once

#include "Entity.h"


//Класс описывает обьект "Враг"
class Enemy :
	public Entity
{
	//Уровень здоровья 
	int health;
	
	//Можно добавить маг. резист, броню, бафы и дебафы
public:
	Enemy(SDL_Texture * enemyTexture, int X, int Y);

	Enemy(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height);

	~Enemy();

	void Move();
};


//Класс описывает объект "Башня"
class Tower :
	public Entity
{
	// Добавить стоимость башни, уровень, урон, радиус, скорость и тип атаки
public:
	Tower(SDL_Texture * enemyTexture, int X, int Y);

	Tower(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height);

	~Tower();
};