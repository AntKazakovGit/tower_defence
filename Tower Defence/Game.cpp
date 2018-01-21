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
	// Удаление всех объектов
	//bullets.clear();
	enemies.clear();
	towers.clear();

	// Инициализация параметров и объектов
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

