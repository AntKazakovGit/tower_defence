#include "GameObjects.h"


//=======================================================================
//=== ������ ������ Enemy ===============================================
//=======================================================================

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y) : Entity(enemyTexture, X, Y)
{
	// �������� ����� ���� ������
}

Enemy::Enemy(SDL_Texture * enemyTexture, int X, int Y, int Width, int Height) : Entity(enemyTexture, X, Y, Width, Height)
{
	// �������� ����� ���� ������
}

Enemy::~Enemy()
{

}

void Enemy::Move()
{

}


//======================================================================
//=== ������ ������ Tower ==============================================
//======================================================================

Tower::Tower(SDL_Texture * towerTexture, int X, int Y) : Entity(towerTexture, X, Y)
{
	// �������� ����� ���� ������
}

Tower::Tower(SDL_Texture * towerTexture, int X, int Y, int Width, int Height) : Entity(towerTexture, X, Y, Width, Height)
{
	// �������� ����� ���� ������
}

Tower::~Tower()
{

}