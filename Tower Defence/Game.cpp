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
	enemies.clear();
	towers.clear();
}

void Game::SceneUpdate()
{
	// Перемещение всех врагов
	for (int i = 0; i < enemies.size(); i++)
	{
		if (!enemies[i].Move(paths))
		{
			castleHealth -= 1;
			enemies.erase(enemies.begin() + i);
		}
	}

}


Game::Game()
{

}


Game::~Game()
{
}

