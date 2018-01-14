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

	//��������� �������� � ������
	virtual void SetObjects();
	//����� ������� � ������
	void DrawObjects();

protected:
	//������ ����������� ��������
	std::vector<Entity> objects;

public:
	App();

	~App();

	/*
	������������� ����������
	Render - ������ ���� ������������� � ����������
	*/
	static void Init(TD_Render *Render);

	//����� �������� �� �����
	void Render();

	//���������� ����������
	void Execution();
};

