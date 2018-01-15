#pragma once

#include <vector>
#include "Render.h"
#include "Entity.h"

class App
{
private:
	//Продолжать ли работу приложения
	static bool running;
	//Рендер приложания
	static TD_Render *render;
	//События приложения
	static SDL_Event appEvent;

	//Вывод объектов на экран
	void Render();
	//Вывод текстур в рендер
	void DrawObjects();
	//Обработка событий
	void OnEvent();

protected:
	//Вектор графических объектов
	std::vector<Entity> objects;

	//Занесение объектов в вектор
	virtual void SetObjects();

public:
	App();

	~App();

	/*
	Инициализация приложения
	Render - рендер окна используемого в приложании
	*/
	static void Init(TD_Render *Render);

	//Выполнение приложение
	void Execution();
};

