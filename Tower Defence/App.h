#pragma once

#include <iostream>
#include <vector>
#include "Window.h"
#include "Scene.h"
#include "Entity.h"


class App
{
	// Окно приложения
	Window appWindow;
	// Параметр показывающий работает ли приложение
	bool running = true;
	// Текущая сцена
	Scene * curScene;
	// Обработка событий приложения
	void EventHandling(SDL_Event * appEvent);

public:
	App();
	~App();
	// Выполнение программы
	void Execution();

};

