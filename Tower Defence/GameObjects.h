#pragma once

#include <vector>
#include "Entity.h"

enum Directions
{
	Left,
	Right,
	Top,
	Bottom
};

struct path
{
	int distance;
	Directions direction;
};

//Класс описывает обьект "Враг"
class Enemy :
	public Entity
{
	//Уровень здоровья 
	int health;
	// Текущий путь
	int currentPath = 0;
	// Пути пройдено
	int pathsPassed = 0;
	// Скорость перемещения	пикселей в минуту
	int speed;
	// Время последнего перемещения
	Uint32 lastMove;

	//Можно добавить маг. резист, броню, бафы и дебафы
public:
	Enemy(SDL_Texture * enemyTexture, int X, int Y, int health, int speed	);

	~Enemy();

	// Обработка движения
	bool Move(std::vector<path> paths);
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

