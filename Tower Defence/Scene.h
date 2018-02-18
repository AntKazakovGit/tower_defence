#pragma once

#include "Window.h"


class Scene
{
public:
	Scene();
	~Scene();
	// Возвращает список ссылок на объекты которые должны быть отображены
	virtual std::vector<Entity*> GetEntities();

	// ==================================
	// === Обработчики событий ==========
	// ==================================

	// Клик левой кнопки мыши 
	virtual void OnLeftButtonClick(int x, int y);
	// Клик правой кнопки мыши
	virtual void OnRightButtonClick(int x, int y);
	// Клик средней кнопки мыши
	virtual void OnMiddleButtonClick(int x, int y);
	// Клик левой кнопки мыши
	virtual void OnLeftButtonDoubleClick(int x, int y);
	// Клик правой кнопки мыши
	virtual void OnRightButtonDoubleClick(int x, int y);
	// Клик средней кнопки мыши
	virtual void OnMiddleButtonDoubleClick(int x, int y);
	// Движение мыши
	virtual void OnMouseMotion(int x, int y, int xRel, int yRel, Uint32 buttonState);

};

