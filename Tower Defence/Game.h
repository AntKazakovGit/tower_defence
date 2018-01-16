#pragma once

#include "App.h"
#include "GameObjects.h"

class Game :
	public App
{
	//������ ������������ �� ������� ������ ������
	std::vector<Enemy> enemies;
	//������ ������������ �� ����� �����
	std::vector<Tower> towers;

	//��������������� SetObjects
	void SetObjects();

public:
	Game();
	~Game();
};

