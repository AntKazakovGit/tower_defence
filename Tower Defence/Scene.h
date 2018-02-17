#pragma once

#include "Window.h"


class Scene
{
public:
	Scene();
	~Scene();
	// Возвращает список ссылок на объекты которые должны быть отображены
	std::vector<Entity*> GetEntities();

};

