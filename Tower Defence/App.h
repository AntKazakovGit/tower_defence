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

	// ������ ����������� ��������
	std::vector<Entity> objects;


	//����� �������� �� �����
	void Render();
	//����� ������� � ������
	void DrawObjects();
	//��������� �������
	void OnEvent();

	// ����� ���� �������� �����
	virtual void SceneInit();
	// ���������� �����
	virtual void SceneUpdate();
	// ��������� �������� � ������
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

protected:
	//������� ����������
	static SDL_Event appEvent;

	// ���������� �������� � ������
	void AddEntities(Entity *entity);

	SDL_Texture *LoadTexture(std::string path);

	SDL_Texture *LoadText(std::string textureText, TTF_Font *font, SDL_Color textColor, int size);

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

