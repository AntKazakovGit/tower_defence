#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	// Здоровье крепости
	int castleHealth;
	// Имеющееся у игрока золото для постройки башен
	int gold;
	// Координаты точки появления противников
	int spawnPointX, spawnPointY;
	// Карта
	Entity map;
	// Панель
	Entity bottomPanel;
	// Поражение
	Entity gameOver;
	// Победа
	Entity victory;
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
