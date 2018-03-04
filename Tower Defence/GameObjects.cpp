#include "GameObjects.h"


//=======================================================================
//=== Методы класса Enemy ===============================================
//=======================================================================

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y, int health, int speed) : health(health), speed(speed),	Entity(enemyTexture, X, Y)
{
	lastMove = SDL_GetTicks();
}

Enemy::~Enemy()
{

}

// Переделать
bool Enemy::Move(std::vector<path> paths)
{
	if (paths.size() == 0)
	{
		return false;
	}
	if (paths[currentPath].distance <= pathsPassed)
	{
		if (currentPath < paths.size() - 1)
		{
			currentPath += 1;
			pathsPassed = 0;
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (speed)
		{
			if (SDL_GetTicks() - lastMove >= 60000 / speed)
			{
				int distance;
				if ((int)((SDL_GetTicks() - lastMove) * ((double)speed / 60000)) <= paths[currentPath].distance - pathsPassed)
					distance = (int)((SDL_GetTicks() - lastMove) * ((double)speed / 60000));
				else
					distance = paths[currentPath].distance - pathsPassed;
				switch (paths[currentPath].direction)
				{
				case Directions::Left:
					rect.x -= distance;
					break;
				case Directions::Right:
					rect.x += distance;
					break;
				case Directions::Top:
					rect.y -= distance;
					break;
				case Directions::Bottom:
					rect.y += distance;
					break;
				}
				pathsPassed += distance;

				lastMove = SDL_GetTicks();
			}
		}
	}
	return true;
}


//======================================================================
//=== Методы класса Tower ==============================================
//======================================================================

Tower::Tower(SDL_Texture * towerTexture, int X, int Y) : Entity(towerTexture, X, Y)
{
	// Добавить смену типа врагов
}

Tower::Tower(SDL_Texture * towerTexture, int X, int Y, int Width, int Height) : Entity(towerTexture, X, Y, Width, Height)
{
	// Добавить смену типа врагов
}

Tower::~Tower()
{

}