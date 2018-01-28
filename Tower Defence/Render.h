#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
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


	SDL_Texture *LoadText(std::string textureText, TTF_Font *font, SDL_Color textColor, int size);


	/*
	������ ��������
	texture - ������������ � ������ ��������
	dst - ���������� � ������� ��������
	dst.x - ���������� �������� �� X
	dst.y - ���������� �������� �� Y
	dst.w - ������ �������� ����� ���������������
	dst.h - ������ �������� ����� ���������������
	*/
	void RenderTexture(SDL_Texture * texture, SDL_Rect dst);


	/*
	������ ����� ��������
	texture - ������������ � ������ ��������
	src - ���������� � ������� ��� ����� �������� ������� ����� ���������� � ������
	src.x - ���������� X ��� ����� �������� ������� ����� ���������� � ������
	src.y - ���������� Y ��� ����� �������� ������� ����� ���������� � ������
	src.w - ������ ��� ����� �������� ������� ����� ���������� � ������
	src.h - ������ ��� ����� �������� ������� ����� ���������� � ������
	dst - ���������� � ������� ��������
	dst.x - ���������� �������� �� X
	dst.y - ���������� �������� �� Y
	dst.w - ������ �������� ����� ���������������
	dst.h - ������ �������� ����� ���������������
	*/
	void RenderTexture(SDL_Texture *texture, SDL_Rect src, SDL_Rect dst);


	//��������� ���������
	void Show();


	//������� ���������
	void ClearScreen();
};

