#pragma once

#include "Render.h"

class App
{
	//Продолжать ли работу приложения
	static bool running;
	//Рендер приложания
	static TD_Render *render;

public:
	App();

	~App();

	/*
	Инициализация приложения
	Render - рендер окна используемого в приложании
	*/
	static void Init(TD_Render *Render);

	//Выполнение приложение
	virtual void Execution();
};

