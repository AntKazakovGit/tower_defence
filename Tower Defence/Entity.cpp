#include "Entity.h"


Entity::Entity(SDL_Texture * texture, int x, int y, std::vector<SDL_Rect> * frames) :
	texture(texture),
	frames(frames)
{
	SDL_QueryTexture(texture, NULL, NULL, &position.w, &position.h);
	position.x = x;
	position.y = y;
	curFrame = NULL;

}

Entity::~Entity()
{

}

SDL_Texture * Entity::GetTexture()
{
	return texture;
}

SDL_Rect * Entity::GetFrame()
{
	return curFrame;
}

SDL_Rect * Entity::GetPosition()
{
	return &position;
}
