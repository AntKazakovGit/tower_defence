#include "Game.h"



void Game::SetObjects()
{
	for (int i = 0; i < enemies.size(); i++)
	{
		AddEntities(&enemies[i]);
	}

	for (int i = 0; i < towers.size(); i++)
	{
		AddEntities(&towers[i]);
	}
}

void Game::SceneRestart()
{
	// �������� ���� ��������
	//bullets.clear();
	enemies.clear();
	towers.clear();

	// ������������� ���������� � ��������
}

void Game::SceneUpdate()
{
	// �������� ���������� �������� � ����������
}

Game::Game()
{

}


Game::~Game()
{
}

