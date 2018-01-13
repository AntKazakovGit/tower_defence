#pragma once
#include "Entity.h"

class Tower :
	public Entity
{
public:
	/*
	����������� ������� ��� ���������������
	(������� ������� ����� �������� ��������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������
	*/
	Tower(SDL_Texture * entityTexture, int X, int Y);


	/*
	����������� ������� � ����������������
	(������� ������� �������� �������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������
	*/
	Tower(SDL_Texture * entityTexture, int X, int Y, int Width, int Height);


	~Tower();


	/*
	��������
	*/
	void Shoot();
};

