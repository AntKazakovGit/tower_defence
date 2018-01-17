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

void Game::SceneInit()
{
	// Добавить инициализацию
}

void Game::SceneUpdate()
{
	// Добавить обновления объектов и параметров
}

Game::Game()
{
}


Game::~Game()
{
}

