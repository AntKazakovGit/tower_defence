#pragma once

#include "Entity.h"

class Enemy :
	public Entity
{
	int Health;

public:
	/*
	����������� ������� ��� ���������������
	(������� ������� ����� �������� ��������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������  
	*/
	Enemy(SDL_Texture * entityTexture, int X, int Y);


	/*
	����������� ������� � ����������������
	(������� ������� �������� �������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������
	*/
	Enemy(SDL_Texture * entityTexture, int X, int Y, int Width, int Height);


	~Enemy();

	/*
	��������
	*/
	void Move();
};

