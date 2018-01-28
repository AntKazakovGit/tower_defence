#include "Game.h"



void Game::SetObjects()
{
	AddEntities(&map);

	for (int i = 0; i < enemies.size(); i++)
	{
		AddEntities(&enemies[i]);
	}

	for (int i = 0; i < towers.size(); i++)
	{
		AddEntities(&towers[i]);
	}

	AddEntities(&bottomPanel);

	if (!castleHealth)
		AddEntities(&gameOver);
	else
		if (enemies.empty())
			AddEntities(&victory);
}

void Game::SceneInit()
{
	enemies.clear();
	towers.clear();

	// ---
	map = Entity(LoadTexture("Resources/map.png"), 0, 0);
	gold = 100;
	castleHealth = 30;
	paths.push_back({ 395, Right });
	paths.push_back({ 200, Bottom });
	paths.push_back({ 445, Right });
	spawnPointX = -40;
	spawnPointY = 105;
}

void Game::SceneUpdate()
{
	if (castleHealth)
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
	font = TTF_OpenFont("times.ttf", 14);
	bottomPanel = Entity(LoadTexture("Resources/Bottom_Panel.png"), 0, 400);
	gameOver = Entity(LoadTexture("Resources/Game_Over.png"), (800 - 365) / 2, (600 - 365) / 2);
	victory = Entity(LoadTexture("Resources/Victory.png"), (800 - 700) / 2, (600 - 575) / 2);
}


Game::~Game()
{
}

