#pragma once

#include "Window.h"


class Scene
{
public:
	Scene();
	~Scene();
	// ���������� ������ ������ �� ������� ������� ������ ���� ����������
	virtual std::vector<Entity*> GetEntities();

	// ==================================
	// === ����������� ������� ==========
	// ==================================

	// ���� ����� ������ ���� 
	virtual void OnLeftButtonClick(int x, int y);
	// ���� ������ ������ ����
	virtual void OnRightButtonClick(int x, int y);
	// ���� ������� ������ ����
	virtual void OnMiddleButtonClick(int x, int y);
	// ���� ����� ������ ����
	virtual void OnLeftButtonDoubleClick(int x, int y);
	// ���� ������ ������ ����
	virtual void OnRightButtonDoubleClick(int x, int y);
	// ���� ������� ������ ����
	virtual void OnMiddleButtonDoubleClick(int x, int y);
	// �������� ����
	virtual void OnMouseMotion(int x, int y, int xRel, int yRel, Uint32 buttonState);

};

