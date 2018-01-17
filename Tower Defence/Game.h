#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	//Название загружаемого уровня
	std::string LevelName;
	// Имеющееся у игрока золото для постройки башен
	int gold;
	// Список существующих на текущий момент врагов
	std::vector<Enemy> enemies;
	// Список существующих на карте башен
	std::vector<Tower> towers;

	// Переопределение SetObjects
	void SetObjects();
	// Переопределение SceneRestart
	void SceneRestart();
	// Переопределение SceneUpdate
	void SceneUpdate();

public:
	Game(std::string *CurrentLvl);
	~Game();
};

