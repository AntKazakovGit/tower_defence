#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	//Список существующих на текущий момент врагов
	std::vector<Enemy> enemies;
	//Список существующих на карте башен
	std::vector<Tower> towers;

	//Переопределение SetObjects
	void SetObjects();

public:
	Game();
	~Game();
};

