#pragma once

#include <SDL.h>
#include "Render.h"

class Entity
{
	//�������� �������
	SDL_Texture *texture;

protected:
	//���������� � ������� �������
	SDL_Rect rect;

public:
	/*
	����������� ������� ��� ��������������� 
	(������� ������� ����� �������� ��������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������
	*/
	Entity(SDL_Texture *entityTexture, int X, int Y);


	/*
	����������� ������� � ����������������
	(������� ������� �������� �������)
	entityTexture - �������� �������
	X - ���������� X �������
	Y - ���������� Y �������
	*/
	Entity(SDL_Texture *entityTexture, int X, int Y, int Width, int Height);


	~Entity();
	

	/*
	������ �������� �������
	render - ������ � ������� ����� �������� ��������
	*/
	virtual void Show(TD_Render *render);


	/*
	������ ����� �������� �������
	render - ������ � ������� ����� �������� ��������
	src_X - ���������� X ����� ��������
	src_Y - ���������� Y ����� ��������
	src_W - ������ ����� ��������
	src_H - ������ ����� ��������
	*/
	virtual void Show(TD_Render *render, int src_X, int src_Y, int src_W, int src_H);
};


