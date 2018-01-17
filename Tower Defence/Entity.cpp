#include "Entity.h"



Entity::Entity(SDL_Texture * entityTexture, int X, int Y)
{
	texture = entityTexture;
	rect.x = X;
	rect.y = Y;
	SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
}


Entity::Entity(SDL_Texture * entityTexture, int X, int Y, int Width, int Height)
{
	texture = entityTexture;
	rect.x = X;
	rect.y = Y;
	rect.w = Width;
	rect.h = Height;
}


Entity::~Entity()
{

}


void Entity::Show(TD_Render * render)
{
	render->RenderTexture(texture, rect);
}


void Entity::Show(TD_Render * render, int src_X, int src_Y, int src_W, int src_H)
{
	SDL_Rect src = { src_X, src_Y, src_W, src_H};
	render->RenderTexture(texture, src, rect);
}
