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

	//Занесение объектов в вектор
	virtual void SetObjects();
	//Вывод текстур в рендер
	void DrawObjects();

protected:
	//Вектор графических объектов
	std::vector<Entity> objects;

public:
	App();

	~App();

	/*
	Инициализация приложения
	Render - рендер окна используемого в приложании
	*/
	static void Init(TD_Render *Render);

	//Вывод объектов на экран
	void Render();

	//Выполнение приложение
	void Execution();
};

