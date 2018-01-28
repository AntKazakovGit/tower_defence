#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	// �������� ��������
	int castleHealth;
	// ��������� � ������ ������ ��� ��������� �����
	int gold;
	// ���������� ����� ��������� �����������
	int spawnPointX, spawnPointY;
	// �����
	Entity map;
	// ������
	Entity bottomPanel;
	// ���������
	Entity gameOver;
	// ������
	Entity victory;
	// ������ ������������ �� ������� ������ ������
	std::vector<Enemy> enemies;
	// ������ ������������ �� ����� �����
	std::vector<Tower> towers;
	// ���� �� �������� ������������ �����
	std::vector<path> paths;

	// ��������������� SetObjects
	void SetObjects();
	// ��������������� SceneRestart
	void SceneInit();
	// ��������������� SceneUpdate
	void SceneUpdate();

public:
	Game();
	~Game();
};
