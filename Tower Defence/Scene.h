#pragma once

#include "Window.h"


class Scene
{
public:
	Scene();
	~Scene();
	// ���������� ������ ������ �� ������� ������� ������ ���� ����������
	std::vector<Entity*> GetEntities();

};

