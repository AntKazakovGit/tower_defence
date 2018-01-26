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

	// Вектор графических объектов
	std::vector<Entity> objects;


	//Вывод объектов на экран
	void Render();
	//Вывод текстур в рендер
	void DrawObjects();
	//Обработка событий
	void OnEvent();

	// Сброс всех объектов сцены
	virtual void SceneRestart();
	// Обновление сцены
	virtual void SceneUpdate();
	// Занесение объектов в вектор
	virtual void SetObjects();

	//=======================================
	// События
	//=======================================

	// Выход из приложения
	void Event_Exit();

	// Нажатие левой кнопки мыши
	virtual void Event_LeftButtonDown();

	// Нажатие правой кнопки мыши
	virtual void Event_RightButtonDown();

	// Нажатие средней кнопки мыши
	virtual void Event_MiddleButtonDown();

	// Отпускание левой кнопки мыши
	virtual void Event_LeftButtonUp();

	// Отпускание правой кнопки мыши
	virtual void Event_RightButtonUp();

	// Отпускание средней кнопки мыши
	virtual void Event_MiddleButtonUp();

	// Нажатие клавиши
	virtual void Event_KeyDown();

	// Отпускание клавиши
	virtual void Event_KeyUp();

	//=======================================

protected:
	// Добавление объектов в вектор
	void AddEntities(Entity *entity);

	SDL_Texture *LoadTexture(std::string path);

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

