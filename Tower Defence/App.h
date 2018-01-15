#pragma once

#include <vector>
#include "Render.h"
#include "Entity.h"

class App
{
private:
	//���������� �� ������ ����������
	static bool running;
	//������ ����������
	static TD_Render *render;
	//������� ����������
	static SDL_Event appEvent;

	//����� �������� �� �����
	void Render();
	//����� ������� � ������
	void DrawObjects();
	//��������� �������
	void OnEvent();

protected:
	//������ ����������� ��������
	std::vector<Entity> objects;

	//��������� �������� � ������
	virtual void SetObjects();

	//=======================================
	// �������
	//=======================================

	// ����� �� ����������
	void Event_Exit();

	// ������� ����� ������ ����
	virtual void Event_LeftButtonDown();

	// ������� ������ ������ ����
	virtual void Event_RightButtonDown();

	// ������� ������� ������ ����
	virtual void Event_MiddleButtonDown();

	// ���������� ����� ������ ����
	virtual void Event_LeftButtonUp();

	// ���������� ������ ������ ����
	virtual void Event_RightButtonUp();

	// ���������� ������� ������ ����
	virtual void Event_MiddleButtonUp();
	
	// ������� �������
	virtual void Event_KeyDown();

	// ���������� �������
	virtual void Event_KeyUp();

	//=======================================

public:
	App();

	~App();

	/*
	������������� ����������
	Render - ������ ���� ������������� � ����������
	*/
	static void Init(TD_Render *Render);

	//���������� ����������
	void Execution();
};

