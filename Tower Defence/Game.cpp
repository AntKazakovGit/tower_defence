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

Game::Game()
{
}


Game::~Game()
{
}

