#pragma once

#include <vector>
#include "Entity.h"

enum Directions
{
	Left,
	Right,
	Top,
	Bottom
};

struct path
{
	int distance;
	Directions direction;
};

//����� ��������� ������ "����"
class Enemy :
	public Entity
{
	//������� �������� 
	int health;
	// ������� ����
	int currentPath = 0;
	// ���� ��������
	int pathsPassed = 0;
	// �������� �����������	�������� � ������
	int speed;
	// ����� ���������� �����������
	Uint32 lastMove;

	//����� �������� ���. ������, �����, ���� � ������
public:
	Enemy(SDL_Texture * enemyTexture, int X, int Y, int health, int speed	);

	~Enemy();

	// ��������� ��������
	bool Move(std::vector<path> paths);
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

