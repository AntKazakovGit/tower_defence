#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	int castleHealth;
	// Имеющееся у игрока золото для постройки башен
	int gold;
	// Тайлы карты
	Entity map;
	// Список существующих на текущий момент врагов
	std::vector<Enemy> enemies;
	// Список существующих на карте башен
	std::vector<Tower> towers;
	// Путь по которому перемещаются враги
	std::vector<path> paths;

	// Переопределение SetObjects
	void SetObjects();
	// Переопределение SceneRestart
	void SceneInit();
	// Переопределение SceneUpdate
	void SceneUpdate();

public:
	Game();
	~Game();
};
