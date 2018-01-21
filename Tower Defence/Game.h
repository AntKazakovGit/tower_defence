#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	// ��������� � ������ ������ ��� ��������� �����
	int gold;
	// ������ ������������ �� ������� ������ ������
	std::vector<Enemy> enemies;
	// ������ ������������ �� ����� �����
	std::vector<Tower> towers;

	// ��������������� SetObjects
	void SetObjects();
	// ��������������� SceneRestart
	void SceneRestart();
	// ��������������� SceneUpdate
	void SceneUpdate();

public:
	Game();
	~Game();
};

