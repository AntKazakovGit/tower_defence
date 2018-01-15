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

