#include "GameObjects.h"


//=======================================================================
//=== Методы класса Enemy ===============================================
//=======================================================================

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y) : Entity(enemyTexture, X, Y)
{
	lastMove = SDL_GetTicks();
	// Добавить инициализацию скорости и уровня здоровья
}

Enemy::~Enemy()
{

}


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
				int distance = (int)((SDL_GetTicks() - lastMove) * ((double)speed / 60000));

				switch (paths[currentPath].direction)
				{
				case Directions::Left:
					rect.x -= distance;
					break;
				case Directions::Right:
					rect.x += distance;
					break;
				case Directions::Top:
					rect.y -= 1;
					break;
				case Directions::Bottom:
					rect.y += 1;
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