#pragma once

#include "Entity.h"


//����� ��������� ������ "����"
class Enemy :
	public Entity
{
	//������� �������� 
	int health;
	
	//����� �������� ���. ������, �����, ���� � ������
public:
	Enemy(SDL_Texture * enemyTexture, int X, int Y);

	Enemy(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height);

	~Enemy();

	void Move();
};


//����� ��������� ������ "�����"
class Tower :
	public Entity
{
	// �������� ��������� �����, �������, ����, ������, �������� � ��� �����
public:
	Tower(SDL_Texture * enemyTexture, int X, int Y);

	Tower(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height);

	~Tower();
};