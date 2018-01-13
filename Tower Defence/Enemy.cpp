#include "Enemy.h"



Enemy::Enemy(SDL_Texture * entityTexture, int X, int Y) : Entity(entityTexture, X, Y)
{

}


Enemy::Enemy(SDL_Texture * entityTexture, int X, int Y, int Width, int Height) : Entity(entityTexture, X, Y, Width, Height)
{

}


Enemy::~Enemy()
{
}


void Enemy::Move()
{
}


