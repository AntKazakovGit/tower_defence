#include "GameObjects.h"


//=======================================================================
//=== Методы класса Enemy ===============================================
//=======================================================================

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y) : Entity(enemyTexture, X, Y)
{
	// Добавить смену типа врагов
}

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height) : Entity(enemyTexture, X, Y, Width, Height)
{
	// Добавить смену типа врагов
}

Enemy::~Enemy()
{

}

void Enemy::Move()
{

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