#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <iostream>

class TD_Render
{
	SDL_Renderer *renderer;

public:
	TD_Render(SDL_Window *window);

	~TD_Render();


	/*
	�������� ��������
	path - ���� �� �����������
	*/
	SDL_Texture *LoadTexture(const std::string &path);


	/*
	������ ��������
	texture - ������������ � ������ ��������
	x - ���������� �������� �� X
	y - ���������� �������� �� Y
	width - ������ �������� ����� ���������������
	height - ������ �������� ����� ���������������
	*/
	void RenderTexture(SDL_Texture * texture, int x, int y, int width, int height);


	/*
	������ ����� ��������
	texture - ������������ � ������ ��������
	src_x - ���������� X ��� ����� �������� ������� ����� ���������� � ������
	src_y - ���������� Y ��� ����� �������� ������� ����� ���������� � ������
	src_w - ������ ��� ����� �������� ������� ����� ���������� � ������
	src_h - ������ ��� ����� �������� ������� ����� ���������� � ������
	dst_x - ���������� �������� �� X
	dst_y - ���������� �������� �� Y
	dst_w - ������ �������� ����� ���������������
	dst_h - ������ �������� ����� ���������������
	*/
	void RenderTexture(SDL_Texture *texture, int src_x, int src_y, int src_w, int src_h, int dst_x, int dst_y, int dst_w, int dst_h);


	//��������� ���������
	void Show();


	//������� ���������
	void ClearScreen();
};

