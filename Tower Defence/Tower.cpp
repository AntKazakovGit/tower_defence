#include "Tower.h"



Tower::Tower(SDL_Texture * entityTexture, int X, int Y) : Entity(entityTexture, X, Y)
{

}


Tower::Tower(SDL_Texture * entityTexture, int X, int Y, int Width, int Height) : Entity(entityTexture, X, Y, Width, Height)
{

}


Tower::~Tower() 
{
}


void Tower::Shoot()
{
}
