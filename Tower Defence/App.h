#pragma once

#include "Render.h"

class App
{
	//���������� �� ������ ����������
	static bool running;
	//������ ����������
	static TD_Render *render;

public:
	App();

	~App();

	/*
	������������� ����������
	Render - ������ ���� ������������� � ����������
	*/
	static void Init(TD_Render *Render);

	//���������� ����������
	virtual void Execution();
};

