#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	// Имеющееся у игрока золото для постройки башен
	int gold;
	// Список существующих на текущий момент врагов
	std::vector<Enemy> enemies;
	// Список существующих на карте башен
	std::vector<Tower> towers;

	// Переопределение SetObjects
	void SetObjects();
	// Переопределение SceneInit
	void SceneInit();
	// Переопределение SceneUpdate
	void SceneUpdate();

public:
	Game();
	~Game();
};

